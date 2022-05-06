#include<iostream.h>
using namespace std;

int main(){
    int k = 1;
    int m = k;
    for ( int i = 1; i <= 6; i++){
        for ( int j = 1; j <= 6; j++){
            cout << (i * j) << " ";
            }
            cout << endl;
        }
    return 0;
    }

/*
** 1 2 3 4 5 6
** 2 4 6 8 10 12
** 3 6 9 12 15 18
** 4 8 12 16 20 24
** 5 10 15 20 25 30
** 6 12 18 24 30 36
*/