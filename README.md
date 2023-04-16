# Web3.0_Recruitment_Kushagra

Task :

The task requires you to create a Car class in a programming language of your choice, with collision detection and time-to-collision calculation implemented using coordinates and speeds. The class should have the following attributes and methods:


Attributes:
> >make (string): The make of the car (e.g., Hyundai, Maruti, BMW)
> model (string): The model of the car (e.g., Alto, Creta, City)
> year (int): The year the car was made
> speed (int): The current speed of the car in miles per hour
> x (int): The x-coordinate of the car
> y (int): The y-coordinate of the car

Methods:
> accelerate(speed_increment): 
     This method should take an argument that represents the speed increment and increase the speed of the car by that amount.
> brake(speed_decrement): 
     This method should take an argument that represents the speed decrement and decrease the speed of the car by that amount.
> move(): 
     This method should update the x and y coordinates of the car based on its current speed.
> detect_collision(car2): 
     This method should take an argument that represents another car and return True if the two cars have collided, and False otherwise.
> time_to_collision(car2): 
     This method should take an argument that represents another car and return the time it will take for the two cars to collide, assuming they continue to move at their current speeds.
