#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int count = 0;
    int arr[10]={17,62,23,34,25,65,75,83,945,140};
    for(int i = 0; i<10; i++){
        count=count+arr[i];
    }
    cout<<"среднее арифметическое элементов массива: "<<count/10<<endl;
    return 0;
}