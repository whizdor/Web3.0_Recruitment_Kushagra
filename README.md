# Web3.0_Recruitment_Kushagra

#Task :

The task requires you to create a Car class in a programming language of your choice, with collision detection and time-to-collision calculation implemented using coordinates and speeds. The class should have the following attributes and methods:


Attributes:
1. make (string): The make of the car (e.g., Hyundai, Maruti, BMW) <
2. model (string): The model of the car (e.g., Alto, Creta, City)
3. year (int): The year the car was made
4. speed (int): The current speed of the car in miles per hour
5. x (int): The x-coordinate of the car
6. y (int): The y-coordinate of the car

Methods:
1. accelerate(speed_increment): 
     This method should take an argument that represents the speed increment and increase the speed of the car by that amount.
2. brake(speed_decrement): 
     This method should take an argument that represents the speed decrement and decrease the speed of the car by that amount.
3. move(): 
     This method should update the x and y coordinates of the car based on its current speed.
4. detect_collision(car2): 
     This method should take an argument that represents another car and return True if the two cars have collided, and False otherwise.
5. time_to_collision(car2): 
     This method should take an argument that represents another car and return the time it will take for the two cars to collide, assuming they continue to move at their current speeds.
