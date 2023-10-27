#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int num, elem;
    cout<<"введите число: ";
    cin>>num;
    while(num>0){
        num=num/10;
        elem+=1;
    }
    cout<<"количество элементов "<<elem<<endl;
    return 0;
}