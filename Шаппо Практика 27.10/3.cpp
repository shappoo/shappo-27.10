#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int count = 0;
    int arr[10]={1,62,3,49,5,16,7,82,9,10};
    for(int i = 0; i<10; i++){
        count=count+arr[i];
    }
    cout<<"сумма элементов массива "<<count<<endl;
    return 0;
}