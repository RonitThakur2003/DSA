#include<iostream>
using namespace std;

    void print(int n){
    int i,j;
    int start=1;
    for ( i = 0 ; i <n; i++)
    {
        if(i%2==0) start=1;
       for ( j = 0; j <= i; j++)
       {
        cout<<start;
        start=1-start;
       }
       
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number"; 
    cin>>n;
    print(n); 
}