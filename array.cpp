/*#include<iostream>
using namespace std;
//THIS IS FOR ACCESSING THE ARRAY ELEMENTS FROM TWO DIMENSIONAL ARRAY
int main(){
    int i;
    int a[5][2]={{0,0},{1,2},{2,4},{3,6},{4,8}};

    for(int i = 0;i<5;i++){
      for(int j =0;j<2;j++){
        cout<<"a["<<i<<"]["<<j<<"]:";
        cout<<a[i][j]<<endl;
    }
}
    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter how many elements you wants to insert in array"<<endl;
    cin>>size;

    int num[size];
    cout<<"Enter array elements"<<endl;
    for(int i=0; i<size;i++)
    {
        cin>>num[i];

    }
    cout<<"elements in array are : "<<endl;
    
    
    for(int i=0;i<size;i++)
    {
        cout<<num[i]<<endl;
    }
  return 0;
}*/


#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter how many elements you want to insert in array :";
    cin>>size;
    int arr[size];
    int c,searchelement;
    int flag=0;
    cout<<"enter array element : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to search  : "<<endl;
    cin>>searchelement;
    for(c=0;c<size;c++)
    {
        if(arr[c]==searchelement)
        {
            cout<<"Element is present at location : "<<c+1;
            flag=1;
            break;
        }
    }
    if(!flag)
    cout<<"Element is not present in array";
    return 0;
}