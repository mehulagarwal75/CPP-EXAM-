// Q1
#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Enter number of terms: ";
    cin >> n;

    int current = 1;  
    for (int i = 1; i <= n; i++) {
        cout << current << " ";
        current += i;
    }

    cout << endl;
   
}
