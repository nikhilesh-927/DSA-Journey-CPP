#include <iostream>
using namespace std;

//Classes ----> classes are one of the fundamental features of object-oriented programming in C++.
//They allow us to encapsulate data and function into single unit, facilitating data abstraction and code reuse.

class Car{

    public: //access specifier

    //member variables

    string brand;
    string model;
    int year;

    //member function

    void display(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;

    } 
};

//Constructor ----> constructor is a special member function that is called when an object is created.
//It is used to initialize the object of a class.

//Destructor ----> destructor is a special member function that is called when an object is destroyed.

class Book{

    public:

    string title;
    string author;
    int year;

    //default constructor

    Book(){
        title = "No title";
        author = "No author";
        year = 0;
    }

    //parameterized constructor

    Book(string t, string a, int y){
        title = t;
        author = a;
        year = y;
    }

    //destructor

    ~Book(){
        cout << "Book object destroyed" << endl;
    }

    void display(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }

};


//Object ----> an object is instance of a class.
//When a class is defined, no memory is allocated but when it is instantiated, memory is allocated.

int main(){

    //creating an object of the class

    Car oneCar;

    //setting values to the member variables

    oneCar.brand = "Toyota";
    oneCar.model = "Corolla";
    oneCar.year = 2021;

    //calling the member function

    oneCar.display();

    //output

    // Brand: Toyota
    // Model: Corolla
    // Year: 2021



    //default constructor

    Book noBook;

    noBook.display();

    //output

    // Title: No title
    // Author: No author
    // Year: 0


    //parameterized constructor

    Book oneBook("The Alchemist", "Paulo Coelho", 1988);

    oneBook.display();

    //output

    //Title: The Alchemist
    // Author: Paulo Coelho
    // Year: 1988

    //destructors are called when the object goes out of scope.
    //for example, when the main function ends, the objects created in it go out of scope and destructors are called.

    //output
    // Book object destroyed
    // Book object destroyed

    return 0;
}

