#include<iostream>
using namespace std;
inline int add(int num1, int num2){
    return num1 + num2;
}
inline  int sub(int num1, int num2){
    return num1 - num2;
}
inline int mul(int num1 , int num2){
    return  num1 *  num2;
}
inline int division(int num1, int num2){
    return num1 / num2;
}



int main(){
cout<<"add(30,40)  :"<<add(30,40)<<endl;
cout<<"sub(60,40)  :"<<sub(60,40)<<endl;
cout<<"multiply(60,40)  :" <<mul(60,40)<<endl;
cout<<"division(60,30)  :" <<division(60,30)<<endl;

cout<<"THIS PROGRAM IS RUNNING PROPERLY"<<endl;


    return 0;
}