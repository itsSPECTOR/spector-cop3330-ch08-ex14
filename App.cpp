/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Spector Reese
*/

/*upon running this program, console indicates 'const' variables are read only. 
 *In this example we can chance the constants because we're passing by value, in other 
 *circumstances, such as the declerations inside of add(); we cannot change the values
 *num1 and num2 because they're inside of the function where those variables are constants.
*/
#include <iostream>
using namespace std;

//example function
void add(const int num1, const int num2){
    num1 = 2;
    num2 = 5;
}

//main test function
int main(){
    
    add(4, 2);
    
return 0;
}