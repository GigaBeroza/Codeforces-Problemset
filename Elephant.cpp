/* An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 
and his friend's house is located at point x(x > 0) of the coordinate line. 
In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. 
Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

Input
The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

Output
Print the minimum number of steps that elephant needs to make to get from point 0 to point x. */

#include <iostream>

using namespace std;

int main()
{
    int elMove;
    int out;
    cin >> elMove;

    while(elMove > 0){
        if(elMove - 5 >= 0){
            elMove = elMove - 5;
            out = out + 1;
        }else if(elMove - 4 >= 0){
            elMove = elMove - 4;
            out = out + 1;
        }else if(elMove - 3 >= 0){
            elMove = elMove - 3;
            out = out + 1;
        }else if(elMove - 2 >= 0){
            elMove = elMove - 2;
            out = out + 1;
        }else if(elMove - 1 >= 0){
            elMove = elMove - 1;
            out = out + 1;
        }
    }

    cout << out;
    return 0;
}
