// Q3
#include<iostream>
using namespace std;

main()
{
    int num; 
    cout<<"enter any number :";
    cin>>num;

    while (num >= 10)
    {
        int sum = 0 ; 
        while (num > 0)
        {
            sum += num %10; 
            num /= 10;
        }
        num = sum ;
    }
    cout<<"final : "<<num<<endl;
    
}