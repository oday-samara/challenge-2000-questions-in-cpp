#include <iostream>
using namespace std;

int main(){

    int purchaseAmount = 0;
    int totalPrice;
    //your code goes here
    
    do{
        cin>>totalPrice ;
        purchaseAmount++ ;
        cout << totalPrice  *0.15<<endl;
    }while (purchaseAmount < 3);

    return 0;
}