#include<iostream>
using namespace std;

int factorial(int n){
if (n<=1){  //this condition wiil check whether the number is more than one or less than one    
        return 1;
    }
    return n* factorial(n-1);
}
int main(){
    // factorial of a nnumber
    // 6! = 6*5*4*3*2*1 = 720
    //n!  = n*(n-1)!
    int a;
    cout<<"enter the number"<< endl;
    cin >> a ;
    cout <<"the factorial of " << a<< " is  "<< factorial(a)<<endl;

    return 0;
}