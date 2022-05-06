#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    //your code goes here
    for (n;n>0;n--){
        cout << n<<endl;
        if(n % 5 ==0){
            cout <<"Beep"<<endl;
        }
    }
    
    
    return 0;
}