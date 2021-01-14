#include <iostream> // Header file
using namespace std; // use namespaces for objects and variables 

// cout prints a message
// cin takes in data and holds
// const means the variable is contant and can never be changed ready only

/*
    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false
*/

/*
    int 4 bytes
    float 4 bytes
    double 8 bythes 
    boolean 1 byte
    char 1 byte
*/

// int for a whole number  | double/float with decimals 
// bool has a true or false vale | 1 = true 0 = false
// in a char value https://www.w3schools.com/charsets/ref_html_ascii.asp
// For a string have to include #include <string>

/*
    + addition
    - subtraction
    * multiplication
    / division
    % modules return the division remainder
    ++ increases the vaule by 1
    -- decreases the value by 1
*/

// Comparison Operators

/*
    int x = 5;
    int y = 3;
    cout << (x > y); // returns 1 (true) because 5 is greater than 3 

    == equal to
    != note equla
    > greater than
    < less than
    >= greater than or equal to
    <= less than or equal to
*/

// Logical Operators

/*
    && return true if both statments are true
    || return true if one of the statments is true
    ! reverse the result, returns false if the result is true

      int x = 5;
      int y = 3;
      cout << (x > 3 && x < 10); // returns true (1) because 5 is greater than 3 AND 5 is less than 10
*/

/*
    if if a condition
    else if something is false then this happens
    elseif else with a condition
    switch specify many alternative blocks of code to be executed

    int time = 20;
    if (time < 18) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }
*/

/*
    swith statements 

    int day = 4;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
     }
    // Outputs "Thursday" (day 4)\
    Could add a default that would run if there is not case match

*/

/*
     While loops

     int i = 0;
        while (i < 5) {
        cout << i << "\n";
        i++;
     }

    code with run over and over until the condition is false

    do loops
    int main() {
        int i = 0;
         do {
            cout << i << "\n";
            i++;
        }
         while (i < 5);
         return 0;    
    }

    will excute the line of code once and then it will check the condition, if it is true it iwll repeat the loop until it is false

    for loops

     for (statement 1; statement 2; statement 3) {
         // code block to be executed
     }

     Statement 1 is executed (one time) before the execution of the code block.

     Statement 2 defines the condition for executing the code block.

     Statement 3 is executed (every time) after the code block has been executed.

     for (int i = 0; i < 5; i++) {
        cout << i << "\n";
     }

    Example explained

    Statement 1 sets a variable before the loop starts (int i = 0).

    Statement 2 defines the condition for the loop to run (i must be less than 5). If the condition is true, the loop will start over again, if it is false, the loop will end.

    Statement 3 increases a value (i++) each time the code block in the loop has been executed.

*/

/*
    break statemnt can be used to jump out of a loop

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    continue statement will break the loop and if the condition occurs and then will continue with the rest of the loop. Will not run the code in the loop

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }
*/

/*
    Arrays

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    int myNum[3] = {10, 20, 30};

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0];
    // Now outputs Opel instead of Volvo

    Loops through a array

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for(int i = 0; i < 4; i++) {
         cout << i << ": " << cars[i] << "\n";
    }   

    You are able to add more items into a array

    string cars[5] = {"Volvo", "BMW", "Ford"}; // size of array is 5, even though it's only three elements inside it

    cars[3] = "Mazda";
    cars[4] = "Tesla";

    you can also delcare a array with out putting any values in it

    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    ...

*/

/*
    References

    A refrence vaiable is a reference to an exisiting vaiable and it is created with the & operator

    string food = "Pizza";
    string &meal = food;

    cout << food outputs pizza
    cout << meal outputs pizza

    Can also use & operator to adress the memory address 

    string food = "pizza';

    cout << &food; outputs 0x6dfed4


*/

/*
    Pointers

    A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

    string food = "Pizza";
    string* ptr = &food;

    outputs the value food
    cout << food

    outputs the memory address of food 0x6dfed4
    cout << &food 

    outputs the memory address of the food with the pointer 0x6dfed4
    cout << ptr

    Example explained

    Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr). Note that the type of the pointer has to match the type of the variable you're working with.

    Use the & operator to store the memory address of the variable called food, and assign it to the pointer.

    Now, ptr holds the value of food's memory address.

    string* mystring; // Preferred
    string *mystring;
    string * mystring;

    You can also change the pointer's value. But note that this will also change the value of the original variable:

    string food = "Pizza";
    string* ptr = &food;

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";
*/

/*
    Functions

    Syntax

    void myFunction() {
    // code to be executed
    }

    myFunction() is the name of the function
    void means that the function does not have a return value. You will learn more about return values later in the next chapter
    inside the function (the body), add code that defines what the function should do

    // Create a function
    void myFunction() {
        cout << "I just got executed!";
    }

    int main() {
        myFunction(); // call the function
        return 0;
    }

    // Outputs "I just got executed!"

    However, it is possible to separate the declaration and the definition of the function - for code optimization.

    You will often see C++ programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read:

    // Function declaration
    void myFunction();

    // The main method
    int main() {
        myFunction();  // call the function
        return 0;
    }

    // Function definition
    void myFunction() {
        cout << "I just got executed!";
    }

    The following example has a function that takes a string called fname as parameter. When the function is called, we pass along a first name, which is used inside the function to print the full name:

    void myFunction(string fname) {
        cout << fname << " Refsnes\n";
    }

    int main() {
        myFunction("Liam");
        myFunction("Jenny");
        myFunction("Anja");
        return 0;
    }

    // Liam Refsnes
    // Jenny Refsnes
    // Anja Refsnes

    You can also use a default parameter value, by using the equals sign (=).
    If we call the function without an argument, it uses the default value ("Norway"):

    void myFunction(string country = "Norway") {
        cout << country << "\n";
    }

    int main() {
        myFunction("Sweden");
        myFunction("India");
        myFunction();
        myFunction("USA");
        return 0;
    }

    // Sweden
    // India
    // Norway
    // USA        

    void myFunction(string fname, int age) {
        cout << fname << " Refsnes. " << age << " years old. \n";
    }

    int main() {
        myFunction("Liam", 3);
        myFunction("Jenny", 14);
        myFunction("Anja", 30);
        return 0;
    }

    // Liam Refsnes. 3 years old.
    // Jenny Refsnes. 14 years old.
    // Anja Refsnes. 30 years old

    The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function:

    int myFunction(int x) {
        return 5 + x;
    }

    int main() {
        cout << myFunction(3);
        return 0;
    }

    // Outputs 8 (5 + 3)

    This example returns the sum of a function with two parameters:

    int myFunction(int x, int y) {
        return x + y;
    }

    int main() {
        cout << myFunction(5, 3);
        return 0;
    }

    // Outputs 8 (5 + 3)

    You can also store the result in a variable:

    int myFunction(int x, int y) {
        return x + y;
    }

    int main() {
        int z = myFunction(5, 3);
        cout << z;
        return 0;
    }
    // Outputs 8 (5 + 3)

    In the examples from the previous page, we used normal variables when we passed parameters to a function. You can also pass a reference to the function. This can be useful when you need to change the value of the arguments:

    void swapNums(int &x, int &y) {
        int z = x;
        x = y;
        y = z;
    }

    int main() {
        int firstNum = 10;
        int secondNum = 20;

        cout << "Before swap: " << "\n";
        cout << firstNum << secondNum << "\n";

        // Call the function, which will change the values of firstNum and secondNum
        swapNums(firstNum, secondNum);

        cout << "After swap: " << "\n";
        cout << firstNum << secondNum << "\n";

        return 0;
    }

    Instead of defining two functions that should do the same thing, it is better to overload one.

    In the example below, we overload the plusFunc function to work for both int and double:

    int plusFunc(int x, int y) {
        return x + y;
    }

    double plusFunc(double x, double y) {
        return x + y;
    }

    int main() {
        int myNum1 = plusFunc(8, 5);
        double myNum2 = plusFunc(4.3, 6.26);
        cout << "Int: " << myNum1 << "\n";
        cout << "Double: " << myNum2;
        return 0;
    }

*/

/*
    Classes/Objects

    class MyClass {       // The class
      public:             // Access specifier
        int myNum;        // Attribute (int variable)
        string myString;  // Attribute (string variable)
    };


    The class keyword is used to create a class called MyClass.
    The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class. You will learn more about access specifiers later.
    Inside the class, there is an integer variable myNum and a string variable myString. When variables are declared within a class, they are called attributes.
    At last, end the class definition with a semicolon ;.


    int main() {
        MyClass myObj;  // Create an object of MyClass

        // Access attributes and set values
        myObj.myNum = 15;
        myObj.myString = "Some text";

        // Print attribute values
        cout << myObj.myNum << "\n";
        cout << myObj.myString;
        return 0;
    }

    You can also create mutiple classes

    Methods

    Methods are function that belong to the class

    class MyClass {        // The class
      public:              // Access specifier
        void myMethod() {  // Method/function defined inside the class
        cout << "Hello World!";
       }
    };

    int main() {
        MyClass myObj;     // Create an object of MyClass
        myObj.myMethod();  // Call the method
        return 0;
    }

    To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:

    class MyClass {        // The class
        public:              // Access specifier
         void myMethod();   // Method/function declaration
    };

    // Method/function definition outside the class
    void MyClass::myMethod() {
        cout << "Hello World!";
    }

    int main() {
        MyClass myObj;     // Create an object of MyClass
        myObj.myMethod();  // Call the method
        return 0;
    }

    You can also add parameters:

    #include <iostream>
    using namespace std;

    class Car {
      public:
         int speed(int maxSpeed);
    };

    int Car::speed(int maxSpeed) {
        return maxSpeed;
    }

    int main() {
        Car myObj; // Create an object of Car
        cout << myObj.speed(200); // Call the method with an argument
        return 0;
    }
*/

/*
    Constructors

    class MyClass {     // The class
      public:           // Access specifier
        MyClass() {     // Constructor
            cout << "Hello World!";
        }
    };

    int main() {
        MyClass myObj;    // Create an object of MyClass (this will call the constructor)
        return 0;
    }

    The following class have brand, model and year attributes, and a constructor with different parameters. Inside the constructor we set the attributes equal to the constructor parameters (brand=x, etc). When we call the constructor (by creating an object of the class), we pass parameters to the constructor, which will set the value of the corresponding attributes to the same:

    class Car {        // The class
     public:          // Access specifier
        string brand;  // Attribute
        string model;  // Attribute
        int year;      // Attribute
        Car(string x, string y, int z) { // Constructor with parameters
            brand = x;
            model = y;
            year = z;
        }
    };

    int main() {
        // Create Car objects and call the constructor with different values
        Car carObj1("BMW", "X5", 1999);
        Car carObj2("Ford", "Mustang", 1969);

        // Print values
        cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
        cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
        return 0;
    }

    Could also define the constructor outside of the class

    Car::Car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }
*/

/*
    Access Specifiers


    public - members are accessible from outside the class
    private - members cannot be accessed (or viewed) from outside the class
    protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

    Note: By default, all members of a class are private if you don't specify an access specifier:

    If you want others to read or modify the value of a private member, you can provide public get and set methods.


    class Employee {
     private:
        // Private attribute
        int salary;

    public:
        // Setter
        void setSalary(int s) {
            salary = s;
        }
        // Getter
        int getSalary() {
            return salary;
        }
    };

    int main() {
        Employee myObj;
        myObj.setSalary(50000);
        cout << myObj.getSalary();
        return 0;
    }

    The salary attribute is private, which have restricted access.

    The public setSalary() method takes a parameter (s) and assigns it to the salary attribute (salary = s).

    The public getSalary() method returns the value of the private salary attribute.

    Inside main(), we create an object of the Employee class. Now we can use the setSalary() method to set the value of the private attribute to 50000. Then we call the getSalary() method on the object to return the value.

*/

/*
    Inheritance

    derived class (child) The class taht inherits from another calss
    base class (parent) The class being inherited from

    To inherit from a class use the : symbol
    In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):

    // Base class
    class Vehicle {
      public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n" ;
        }
    };

    // Derived class
    class Car: public Vehicle {
      public:
        string model = "Mustang";
    };

    int main() {
        Car myCar;
        myCar.honk();
        cout << myCar.brand + " " + myCar.model;
        return 0;
    }

    - It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

    You can also create mutiple classes and run them off of each other.
    https://im.hurt.gg/tekoa/TiwiJ9.png

    A class can also be derived from more than one base class, using a comma-separated list:
    https://im.hurt.gg/tekoa/FaXEk8.png

    You learned from the Access Specifiers chapter that there are three specifiers available in C++. Until now, we have only used public (members of a class are accessible from outside the class) and private (members can only be accessed within the class). The third specifier, protected, is similar to private, but it can also be accessed in the inherited class:
    https://im.hurt.gg/tekoa/Fozoc1.png
    Can use the protected class salary because the derived calss is calling for the base calls employee.

    Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
    For example, think of a base class called Animal that has a method called animalSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own implementation of an animal sound (the pig oinks, and the cat meows, etc.):

    https://im.hurt.gg/tekoa/CoDum0.png

*/

/*
    Files

    To use the fstream library, include both the standard <iostream> AND the <fstream> header file:

    To write to the file, use the insertion operator (<<).

    #include <iostream>
    #include <fstream>
    using namespace std;

    int main() {
        // Create and open a text file
        ofstream MyFile("filename.txt");

        // Write to the file
        MyFile << "Files can be tricky, but it is fun enough!";
    
        // Close the file
        MyFile.close();
    } 

    You can use a while loop toeghter with getline() function to read the file line by line and print the content in the file

    int main () {
        // Create a text file
        ofstream MyWriteFile("filename.txt");

        // Write to the file
        MyWriteFile << "Files can be tricky, but it is fun enough!";

        // Close the file
        MyWriteFile.close();

        // Create a text string, which is used to output the text file
        string myText;

        // Read from the text file
        ifstream MyReadFile("filename.txt");

        // Use a while loop together with the getline() function to read the file line by line
        while (getline (MyReadFile, myText)) {
            // Output the text from the file
            cout << myText;
        }

        // Close the file
        MyReadFile.close();
    }
*/

/*
    Expectations

    Exception handling in C++ consist of three keywords: try, throw and catch:

    The try statement allows you to define a block of code to be tested for errors while it is being executed.

    The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

    The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.

    The try and catch keywords come in pairs:

    int main() {
        try {
            int age = 15;
            if (age >= 18) {
                cout << "Access granted - you are old enough.";
            } else {
                throw (age);
            }
        }
        catch (int myNum) {
            cout << "Access denied - You must be at least 18 years old.\n";
            cout << "Age is: " << myNum;
        }
        return 0;
    }

    If you do not know the throw type used in the try block, you can use the "three dots" syntax (...) inside the catch block, which will handle any type of exception:

    Can find length of string with stringname.length()

    use max to print highest value

    cmath for square root op

    string result = time < 18  "Good day."  "Good evening.";

    https://im.hurt.gg/tekoa/ZOcOq2.png
    https://im.hurt.gg/tekoa/KiBUk8.png

    How do you create a reference variable of an existing variable?

    &

    https://im.hurt.gg/tekoa/PalEb1.png

*/
