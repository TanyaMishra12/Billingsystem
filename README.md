# Billingsystem
Project Explanation: Simple Pizza Ordering System

1. Purpose and Overview:
The purpose of this project is to create a basic pizza ordering system where users can choose different types of pizzas (veg and non-veg) and drinks, add extra cheese to their pizzas, calculate the total bill, and apply a discount if applicable. The project is implemented using classes and user input/output in C++.

2. Classes and Their Roles:

2.1. orderpizza Class:
This class handles the pizza ordering process. It includes member variables to store user choices and the bill amount. The key methods within this class are:

returntotalbill(): This method starts the ordering process. It prompts the user if they are hungry and guides them through selecting pizza items and drinks. It accumulates the cost of selected items in the billamount variable and handles cases where the user doesn't provide valid input. After ordering, it returns the calculated bill amount.
2.2. showbill Class:
Derived from the orderpizza class, this class displays the bill to the user. It includes the following method:

show(int bill): This method takes the calculated bill as an argument and displays the bill amount. If the bill is above 500, it offers a 20% discount and displays the discounted amount. The final message thanks the user for their order.

3. Main Function:
In the main() function:
An instance of the showbill class named Order1 is created.
The returntotalbill() method is called on the Order1 instance to initiate the pizza ordering process and calculate the bill amount.
The show() method of the Order1 instance is then called to display the bill to the user.

4. Execution Flow:
The program's execution follows these steps:
The user is asked if they are hungry and prompted to press 'Y' to begin the ordering process.
The user's name is input.
The user is prompted to choose between veg pizza, non-veg pizza, and cold drinks.
Depending on the choice, the user is further prompted to select specific items and add extra cheese (if desired).
The process continues until the user indicates they are done ordering.
The total bill is calculated based on the selected items and displayed.
If the bill is above 500, a discount is applied, and the final discounted bill is displayed along with a thank-you message.
