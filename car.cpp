#include<iostream>
#include<string>
#include<cmath>

using namespace std;
#define int long long


// Creating a class car with the required attributes.
class Car
{
    public:

    //Variables for details of car, initial position of car and its speed.
    string make;
    string model;
    int year;
    int speed_x, speed_y, speed_z;
    int x; int y; int z;


    //Method to accelerate the car when accelerator is pressed.                                                                   
    void accelerate(int speed_increment_x,int speed_increment_y,int speed_increment_z)
    {
        speed_x += speed_increment_x;
        speed_y += speed_increment_y;
        speed_z += speed_increment_z;
    }

    //Method to reduce the speed of the car when brakes are applied.
    void breaking(int speed_increment_x,int speed_increment_y,int speed_increment_z)
    {
        speed_x -= speed_increment_x;
        speed_y -= speed_increment_y;
        speed_z -= speed_increment_z;
    }

    //Cars move, duh.
    void move(int time)
    {
        x += speed_x*time;
        y += speed_y*time;
        z += speed_z*time - 5*time*time;

        //Since, the car is flying, I'll take gravity into account.
        speed_z -= 10*time;
    }

    //Ah crash!
    bool detect_collision(Car second)
    {
        if(second.x == x && second.y == y && second.z == z) return true;
        return false;
    }

    //Method to calculate the time to the inevitable (or, maybe evitable) collsion.
    //This method returns -1 in case no collision occours.
    double time_to_collsion(Car second)
    {
        //Writing the vector directions for the relative speeds and positons.
        int v1[3],v2[3];
        v1[0] = second.x - x;
        v1[1] = second.y - y;               
        v1[2] = second.z - z;
        v2[0] = second.speed_x - speed_x;
        v2[1] = second.speed_y - speed_y;
        v2[2] = second.speed_z - speed_z;

        //Within the frame of both the cars, gravity does not affect the time taken as both are under the same field.
        //Checking if both the vectors are parallel or antiparallel.
        if(v1[0]*v2[1] == v1[1]*v2[0] && v1[2]*v2[1] == v1[1]*v2[2])
        {
            //Collision occours only if the vectors are anti-parallel, that is the dot product is 0.
            if(v1[0]*v2[0] + v1[1]*v2[1] + v1[2]*v2[2] < 0)
            {
                return -v1[0]/v2[0];
            }
            return -1;
        }
        return -1;
        //Program returns a -1 if the collison is never possible.
    }

    //Function to print the Position and Velocity of the Car.
    void print_status()
    {
        cout << "Velocity is : " << speed_x << " , " << speed_y<< " , "<< speed_z << " in mph" << endl;
        cout << "Position is : " << x << " , " << y<< " , "<< z << " in miles"<< endl;
    }
};

signed main()
{
    Car car1;
    car1.make = "Honda";
    car1.model = "City";
    car1.year = 2020;
    car1.x = 200;
    car1.y = 300;
    car1.z = 400;
    car1.speed_x = 80;
    car1.speed_y = 90;
    car1.speed_z = 80;

    Car car2;
    car1.make = "Porshe";
    car1.model = "Cayenne";  
    car2.x = 800;
    car2.y = 900;
    car2.z = 1000;
    car2.speed_x = 60;
    car2.speed_y = 60;
    car2.speed_z = 60;

    car1.print_status();
    car2.print_status();

    car2.accelerate(0,10,0);
    car2.move(2);
    car1.move(2);


    car1.print_status();
    car2.print_status();

    int temp = car1.time_to_collsion(car2);

    if(temp != -1)
    {
        cout << "Collison Occours at ";
        cout << temp << " hours" << endl;
    }
    else
    {
        cout << "No Collision Occours" << endl;
    }
}
