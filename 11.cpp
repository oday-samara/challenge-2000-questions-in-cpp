#include<iostream.h>
using namespace std;

int main(){
    int k = 1;
    int m = k;
    for ( int i = 1; i <= 6; i++){
        for ( int j = 1; j <= 6; j++){
            cout << (i - j) << " ";
            }
            cout << endl;
        }
    return 0;
    }

/*
** 0 -1 -2 -3 -4 -5
** 1 0 -1 -2 -3 -4
** 2 1 0 -1 -2 -3
** 3 2 1 0 -1 -2
** 4 3 2 1 0 -1
** 5 4 3 2 1 0
*/