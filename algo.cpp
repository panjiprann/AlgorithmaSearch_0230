#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input (){
    
}

void LinearShort()
{
    char ch;
    int ctr;
    int item;

do
{
   cout << "\nEnter the element you want to search: "; //step 1
   cin >> item;                                      
   
   ctr = 0;
   i = 0; // step 2
}
 while (i < n); //step 3
{
    ctr++;
    if (arr[i] == item)
    {
        cout << "\n " << item << "found at position" << (i+1) << endl; //step 6
        break;
    }
    i++;// step 4 
}
if (i == n) //step 5
{
    cout << "\n" << item << "not found in the array\n"; 
    cout << "nNumber of comparison: " << ctr << endl;

    cout << "\nContinue Search (y/n) : ";
    cin >> ch;
}

int main();
{
    return 0;
}
}