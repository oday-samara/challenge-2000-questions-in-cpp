#include <iostream.h> 

using namespace std;

int main() 
{ 
  int n = 5; 

  int x = 2; 

  for(int i = 1; i <= n; i++) 
  { 
    for(int j = 1; j <= n; j++) 
    { 
      cout<<x<<" ";
      x += 2; 
    } 
    cout<<endl; 
  } 
  return 0; 
} 

    
    //this is the output
/*
** 2 4 6 8 10 
** 12 14 16 18 20 
** 22 24 26 28 30 
** 32 34 36 38 40 
** 42 44 46 48 50 
*/