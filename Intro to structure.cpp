#include<bits/stdc++.h>
using namespace std;
    int *arr;

int main()
{

    int size;

    while(cin>>size)
    {
        arr = new int(size);


    for(int i=0;i<size;i++)
    {
        arr[i]=i+7;
    }

     for(int i=0;i<size;i++)
    {
        cout<<"========"<<arr[i];
    }
    }



    /*

    struct stu{
        char name[33];
        int age;
        double weight;
    };


    stu Mahesh;
    cin>>Mahesh.age;
    cin>>Mahesh.weight;
    cin>>Mahesh.name;

    cout<<Mahesh.age<<endl;
    cout<<Mahesh.weight<<endl;
    cout<<Mahesh.name;

   int n,mini =21636,v1,v2;
   v1=10,v2=15,v3=20;
   int *p1,*p2,*p4,**p3;
   p1=&v1;
   p2=&v2;



   cout<<"Adrs p1: "<<p1<<endl;
   cout<<"Adrs p2: "<<p2<<endl;
   cout<<"Stored value of p1: "<<*p1<<endl;
   cout<<"Stored value of p2: "<<*p2<<endl;
   cout<<"===================================="<<endl;

   *p2=*p1;


   cout<<"Adrs p1: "<<p1<<endl;
   cout<<"Adrs p2: "<<p2<<endl;
   cout<<"Stored value of p1: "<<*p1<<endl;
   cout<<"Stored & value of p1: "<<&p1<<endl;
   cout<<"Stored value of p2: "<<*p2<<endl;

   cout<<"Double p3: "<<**p3<<endl;
   return 0;
   */
}
