/* For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line. */ 

#include <iostream>

using namespace std;

int main()
{
    long long number;
    cin >> number;

    if(number % 2 == 0){
        number = number / 2;
    }else{
        number = (number / 2 + 1) * (-1);
    }

    cout << number;

    return 0;
}
