/* It seems like the year of 2013 came only yesterday. Do you know a curious fact? 
The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, 
find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. 
It is guaranteed that the answer exists.
*/

#include <iostream>
#include <string>
#include <algorithm>
#include<sstream>

using namespace std;

int main()
{
    int next, i, j, numCheck, numCheck2;
    string year, check;
    cin >> year;

    for(i = 0; i < year.size(); i++){
        for(j = 0; j < i; j++){
            if(year[i] == year[j]){
                break;
            }
        }
        if(j == i){
            check = check + year[i];
        }
    }

    numCheck = stoi(year);
    numCheck2 = stoi(check);

    if(numCheck == numCheck2){
        check = "";
    }



    for(int k = 0; k < 9000; k++){
      
        if(check.size() < year.size() ){
            check = "";

            next = stoi(year);
            next = next + 1;

            stringstream ss;
            ss<<next;
            ss>>year;


            for(i = 0; i < year.size(); i++){
                for(j = 0; j < i; j++){
                    if(year[i] == year[j]){

                        break;
                    }
                }
                if(j == i){
                    check = check + year[i];

                }
            }
        }else{
            next = stoi(year);
        }
   }

   cout << next << endl;
   return 0;
}
