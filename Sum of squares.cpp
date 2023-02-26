// This program will calculate the sum of squares of given input of numbers

#include <iostream>
using namespace std;


int main()
{
    int input, sum=0, count=0, num;
    cout << "Enter the number of inputs to sum" <<endl;
    cin >> num;
    while(count < num){
        cout << "Enter integer "<< count + 1<< endl;
    cin >> input;
    sum += input * input;
    count++;
    }
    cout << "The sum of the square of the inputs = " << sum << endl;
    
}
