/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "Distance.h"
#include <iostream>
using namespace std;
int main()
{
    Distance dist1, dist3, dist4; //define distances
    cin>>dist1;
    Distance dist2(11, 6.25); //define, initialize dist2
    dist3 = dist1 + dist2; //single '+' operator
    dist4 = dist1 - dist2; //friend '-' operators
    //display all lengths
    cout << "dist1 = ";
    cout<< dist1 << endl;
    cout << "dist2 = ";
    cout<< dist2 << endl;
    cout << "dist3 = ";
    cout<< dist3 << endl;
    cout << "dist4 = ";
    cout<< dist4 << endl;
    return 0;
}
