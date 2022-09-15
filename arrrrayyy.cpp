/*#include<iostream>
using namespace std;

int main()
{
int a[] = {2,3,15,15,3,2};
int read = 1;
int i,j =  5;

for(i=0;i<6/2;i++)
{
     if(a[i]!=a[j])
     {
         read =  0;
         break;
     }
     else
          j--;
}
cout<<read<<endl;

    return 0;
}*/



#include<iostream>
using namespace std;

int main(){
    int size,elements;

    cout<<"Enter the array size "<<endl;
    cin>>size;
    int a[size] = {};
    int largest = a[0];
    int smallest = a[0];
    cout<<"Enter the array elements"<<endl;
    for( int i=0;i<size;i++){
        cin>>a[size];
    }

   // int largest = a[0];
    //int smallest = a[0];

    for(int i=0;i<size;i++)
    {
        if(a[size]>largest)
        largest = a[size];
        if(a[size]<smallest)
        smallest = a[size];
    }
    cout<<"Largest "<<largest <<endl<<"Smallest "<<smallest<<endl;
    return 0;
}

/*#include<iostream>
using namespace std;

int main()
{
   int i, inputarray[10],no,pos;
   cout<<"Enter 10 data elements in array "<<endl;
   for(i =0; i<10; i++)
   {
       cin>>inputarray[i];
   }
   cout<<"Enter position of element to delete "<<endl;
   cin>>pos;
   if(pos>10){
       cout<<"Positionvalue is not in range :";
   }
   else{
       --pos;
       for(i = pos;i<=9;i++)
       {
           inputarray[i] = inputarray[i+1];
       }
       cout<<"New data in array ";
       for(i = 0; i<9; i++)
       {
           cout<<inputarray[i]<<endl;
           cout<<"";
           /* code */
 //      }
       
 //  }

  //  return  0;

//}
