#include <iostream>
using namespace std;

int main() {
    
    int vision;
    cin >> vision;
    
    int height;
    cin >> height;
    //your code goes here
    if (height >62&& height <75&& vision == 100){
        cout << "passed"<<endl;
    }else {
        cout << "failed"<<endl;
    }
    
    
	return 0;
}