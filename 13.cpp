#include<iostream.h>
using namespace std;

int main(){
    int k = 1;
    int m = k;
    for ( int i = 1; i <= 6; i++){
        for ( int j = 1; j <= 6; j++){
            cout << i << " " << j << " ";
            }
            cout << endl;
        }
    return 0;
    }

/*
1 1 1 2 1 3 1 4 1 5 1 6
2 1 2 2 2 3 2 4 2 5 2 6
3 1 3 2 3 3 3 4 3 5 3 6
4 1 4 2 4 3 4 4 4 5 4 6
5 1 5 2 5 3 5 4 5 5 5 6
6 1 6 2 6 3 6 4 6 5 6 6
*/