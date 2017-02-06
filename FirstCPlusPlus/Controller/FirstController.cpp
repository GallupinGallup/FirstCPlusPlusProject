#include <iostream>
#include "FirstController.h"
using namespace std;

void FirstController:: usePointerToChange(int * pointedTo)
{
    *pointedTo = 2 * (1230985);
}

void FirstController :: start()
{
    cout << "What number do you want to work with?" << endl;
    int myNumber;
    cin >> myNumber;
    int * numberPointer = &myNumber;
    //ARRAYS YAYAYAYAYAYAYAYYAYAyAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAYAY
    int numbers [9] = {1,2,3,4,5,6,7,8,9};
    int morNumbers [3] = {3,2,1};
    
    double pi [1] = {3.14159265358979323846263383};
    
    cout << "Starting with: " << myNumber << endl;
    useNumbers(myNumber);
    cout << "Look no change XD: " << myNumber << endl;
    
    cout << "Changing a value" << endl;
    myNumber = impactNumber();
    cout << "See - impacted " << myNumber << endl;
    
    cout << "Changing with a pointer" << endl;
    usePointerToChange(numberPointer);
    cout << "See how the number has changed: " << myNumber << endl;
    
}

void FirstController:: useNumbers(int suppliedNumber)
{
    cout << "I was given: " << suppliedNumber << endl;
    suppliedNumber = (suppliedNumber * 3 + 32214) / 42;
    cout << "It is now: " << suppliedNumber << endl;
}

int FirstController:: impactNumber()
{
    return 8765432;
}
