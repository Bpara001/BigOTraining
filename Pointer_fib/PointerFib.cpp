//
// Created by Jesse on 4/20/2019.
//
#include <iostream>
//#include <string.h>

using namespace std;
void initializer(int *FixArr,int values){
    for(unsigned i=0;i<values;++i)
        *(FixArr+i)=0;
    return;
}
int FibHelper(int n, int *arr){

    if(n <=0)
        return 0;
    else if(n == 1)
        return 1;
    else if( *(arr+n) >0){
        return *(arr+n);
    }

    *(arr+n) = FibHelper(n-1, arr) + FibHelper(n-2,arr);

    return *(arr+n);
}
void FibSpace(int fib_value){
    int *hold =  new int [fib_value+1];
    initializer(hold,fib_value+1);
    for(int i=0;i<=fib_value;i++)
    {
        cout<<i<<": "<< FibHelper(i,hold)<<endl;
    }
    return ;
}

int main() {
    int fib_seq;
    cout<<"Enter Fib Value (int):\0";
    cin>>fib_seq;

    FibSpace(fib_seq);


    return 0;
}
