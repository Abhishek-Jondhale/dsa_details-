#include<stdio.h>
 
using namespace std;
  
int main() {
    char c;
 
    // Prints the ASCII value of all Uppercase Alphabet
    for(c = 'A'; c <= 'Z'; c++){
       cout << c << " = " << (int)c <<endl;
    }
      
    return 0;
}