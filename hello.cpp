#include<iostream>
using namespace std;

//     void print(int n){
//     int i,j;
//     int start=1;
//     for ( i = 0 ; i <n; i++)
//     {
//         if(i%2==0) start=1;
//        for ( j = 0; j <= i; j++)
//        {
//         cout<<start;
//         start=1-start;
//        }
       
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number"; 
//     cin>>n;
//     print(n); 
// }

// int main(){
//     int age;
//     cout<<"Enter your age";
//     cin>>age;

//     if(age<18){
//         cout<<"You are under age";
//     }else{
//         cout<<"You are eligible for voting"; 
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"Enter any number";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// void pattern(int n){
// for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<j;
//         }
//         cout<<"\n";
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter any number";
//     cin>>n;
//     pattern(n);
//     return 0;
// }


// void pattern(int n){
// for(int i=1;i<=n;i++){
//         for(int j=1;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n*2-i*2+1;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<i;j++){
//             cout<<" ";
//         }
//         cout<<"\n";
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter any number";
//     cin>>n;
//     pattern(n);
//     return 0;
// }



// STL => standard template library

// int main(){
//     pair<int,int> p = {1,3};
//     cout<<p.first<<p.second;
//     return 0;
// }

int main(){
    pair<int,int> arr[] = {{1,3},{5,6}};
    cout<<arr[1].first;
    return 0;
}