#include<iostream>
using namespace std ;

int main(){
    for(int i=0; i < 4; i++) {
        for(int j=1; j <= 4; j++) {
            cout << i + j << " " ;
        }
        cout << endl ;
    }
    return 0;
}

/*
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
*/