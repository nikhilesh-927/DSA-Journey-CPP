#include <iostream>

using namespace std;

int main(){

    //CONDITIONALS

    //if-else conditions

    int age = 18;

    if(age >= 18) cout << "You are eligible to vote\n";
    else cout << "You are not eligible to vote\n";

    //output

    //You are eligible to vote


    //if else if else ladder conditions

    int marks = 80;

    if(marks > 80) cout << "Grade A\n";
    else if(marks > 60) cout << "Grade B\n";
    else if(marks > 40) cout << "Grade C\n";
    else cout << "Grade D\n";

    //output

    //Grade B


    //nested if-else conditions

    int a = 10, b = 20, c = 30;

    if(a > b)
    {
        if(a > c) cout << "a is the largest number\n";
        else cout << "c is the largest number\n";
    }
    else
    {
        if(b > c) cout << "b is the largest number\n";
        else cout << "c is the largest number\n";
    }

    //output

    //c is the largest number


    //switch case conditions

    int day = 4;

    cout << "Day number : " << day << endl;

    switch(day){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3: 
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number" << endl;
            break;
    }

    //output

    // Day number : 4
    // Thursday


    //LOOPS

    //for loop

    //in for loop, the condition is checked first

    //Counting from 1 to 5

    cout << "For loop counting from 1 to 5: "; 
    
    for(int i = 1; i <= 5; i++) // i starts from 1 and continues till i <=5 and each time i is incremented by 1
    {
        cout << i << " ";
    }

    cout << endl;

    //output

    // For loop counting from 1 to 5: 1 2 3 4 5


    //while loop

    // in while loop, the condition is checked first and then the loop is executed

    //while loop counting from 5 to 1

    int count = 5; 

    cout << "While loop counting from 5 to 1: ";

    while(count > 0){                //the loop is executed till count > 0
        cout << count << " ";
        count--;                      // each time count is decremented by 1
    } 

    cout << endl;

    //output

    //While loop counting from 5 to 1: 5 4 3 2 1



    //Do-while loop

    //do-while loop is executed first and then the condition is checked

    int x = 0;

    cout << "Do while loop runs at least once even if the condition is false: ";

    do{
        cout << x << " ";
    }
    while(x < 0);

    cout << endl;

    //output

    //Do while loop runs at least once even if the condition is false: 0

    return 0;
}