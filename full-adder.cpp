#include <iostream>
using namespace std;
// Function to print sum and C-Out
void full_adder(int a,int b,int c_in)
{
    int sum , c_out;
    // Calculating value of sum
    sum = c_in ^ (a ^ b);
   
    //Calculating value of C-Out
    c_out = (a& b) | (b & c_in) | (a & c_in);
  
   // printing the values
    cout<<"sum = "<< sum <<endl;
    cout<<"c-out = "<< c_out <<endl;
  }
  
// Driver code
 
int main() {
    int a = 1;
    int b = 0;
    int c_in = 0;
    // passing three inputs of fulladder as arguments to get result function
     full_adder(a, b, c_in);
    return 0;
}
