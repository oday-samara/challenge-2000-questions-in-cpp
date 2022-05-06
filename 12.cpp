#include<iostream.h>
using namespace std;

int main(){
    int k = 1;
    int m = k;
    for ( int i = 1; i <= 6; i++){
        for ( int j = 1; j <= 6; j++){
            cout << (i + j) << " ";
            }
            cout << endl;
        }
    return 0;
    }

/*
2 3 4 5 6 7
3 4 5 6 7 8
4 5 6 7 8 9
5 6 7 8 9 10
6 7 8 9 10 11
7 8 9 10 11 12
*/