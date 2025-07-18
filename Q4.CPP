// Q4
#include<iostream>
using namespace std;

main()
{
    char start, end;
    cout<<"enter start character  :";
    cin>>start;
    cout<<"enter end character  :";
    cin>>end;
      cout<<" character from  "<<start<<" to "<<end<<" : ";
      char ch = start;
      do {
          cout<< ch <<" ";
          ch++;
      } while(ch <= end);
      
      cout<<endl;


}