#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    
    int Maxindex, index, Minindex;
    double largest, total, average, smallest;
    double integers[10];
    
    
    cout << "Enter 10 numbers" << endl;
    for (index = 0; index < 10; index++)
        integers[index]=0.0;
        
    
    for (index = 0; index < 10; index++)
        cin >> integers[index];
        
    
    for (index = 0; index < 10; index++)
        cout << integers[index] << " ";
    
    total = 0;
    
    for (index = 0; index < 10; index++)
        total = total + integers[index];
        
    
    average = total / 10;
    
    
    cout << " \n" ;
    cout << "Total = \t" << total << endl;
    cout << "Average = \t" << average << endl;
    
    Maxindex = 0;
    
    for (index = 1; index < 10; index++)
        if (integers[Maxindex] < integers[index])
            Maxindex = index;
    largest = integers[Maxindex];
    
    cout << "Largest integer = \t" << largest << endl;
    
    Minindex = 0;
    
    for(index = 1; index < 10; index++)
        if (integers[Minindex] > integers[index])
            Minindex = index;
    smallest = integers[Minindex];
    
    cout << "Smallest integer = \t" << smallest << endl;
    
    
    _getch();
    return 0;
}
