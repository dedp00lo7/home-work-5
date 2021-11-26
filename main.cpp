
#include <iostream>
using namespace std;

//задание 1
void Arrprint(const double* Arr, const size_t SIZE)
{
    for (int i=0;i<SIZE;++i)
    {
        cout<<Arr[i]<<endl;
    }
}
//задание 2
void ArrZeroes(const int* Arr2, const size_t SIZE1)
{
    
    for (int i=0;i<SIZE1;++i)
    {
        cout<<Arr2[i]<<"   ";
        if(Arr2[i]==0)
        {
            cout<<"1"<<endl;
            
        }
        else{
            cout<<"0"<<endl;
        }
    }
    
}

//задание 3
void ArrNumbers( int* Arr3,int  SIZE2)
{
    
    for (int i=0,d=1;i<SIZE2;i++)
    {
        Arr3[i]=d;
        cout<<Arr3[i]<<endl;
        d+=3;
    }
 }

int main()
{
//задание 1
    double arr1[]={3.53,4.3423,6.424};
    Arrprint(arr1, 3);
//задание 2
    int arr2[]={0,1,0,1,1,0,0,0};
    ArrZeroes(arr2, sizeof(arr2)/sizeof(int));
//задание 3
   int arr3[8]={};
    ArrNumbers(arr3, sizeof(arr3)/sizeof(int));
    
    return 0;
}
