#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int num, count, count_sum=0, count_proizv=1;
    cout<<"введите число: ";
    cin>>num;
    while(num>0){
        count=num%10;
        num=num/10;
        count_sum+=count;
        count_proizv*=count;
    }
    cout<<"сумма чисел "<<count_sum<<endl;
    cout<<"произведение чисел "<<count_proizv<<endl;
    return 0;
}