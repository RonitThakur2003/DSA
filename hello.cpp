#include<iostream>
#include<map>
// #include<bits/stdc++.h>
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

// int main(){
//     pair<int,int> arr[] = {{1,3},{5,6}};
//     cout<<arr[1].first;
//     return 0;
// }


// int main(){
//     vector<int> v1(5,20);
//     v1.push_back(10);
//     vector<int> v2(v1);
//     // cout<<v2[5];
//     // vector<int>::iterator it = v1.begin();
//     // it++;
//     // cout<<*(it)<<" ";
//     for(auto it:v1){
//         cout<<it<<" ";
//     }
//     return 0;
// }


int main(){
    map<int, int> mpp;
    mpp.insert({1,2});
    mpp.insert({2,4});
    mpp.insert({3,6});
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}