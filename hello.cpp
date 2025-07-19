#include<iostream>
#include<map>
#include<math.h>
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


// int main(){
//     map<int, int> mpp;
//     mpp.insert({1,2});
//     mpp.insert({2,4});
//     mpp.insert({3,6});
//     for(auto it:mpp){
//         cout<<it.first<<" "<<it.second<<endl;
//     }
//     return 0;
// }

// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             v.push_back(i);
//             if((n/i)!=i){
//                 v.push_back(n/i);
//             }
//         }
//     }
//     sort(v.begin(),v.end());
//     for(auto it:v){
//         cout<<it<<endl;
//     }
//     return 0;
// }



// Recursion

// int cnt = 1;
// void nums(){
//     if(cnt>20){
//         return;
//     }
//     cout<<cnt<<endl;
//     cnt++;
//     nums();
// }

// int main(){
//     nums();
// }


// void name(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<"Ronit";
//     name(i+1,n);
// }

// int main(){
//     int n;
//     cout<<"Enter any NUmber";
//     cin>>n;
//     name(1,n);
// }


// void nums(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<n<<endl;
//     nums(i,n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter any NUmber";
//     cin>>n;
//     nums(1,n);
// }



// void nums(int i,int n){
//     if(i<1){
//         return;
//     }
//     nums(i-1,n);
//     cout<<i<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter any NUmber";
//     cin>>n;
//     nums(n,n);
// }



// void nums(int i,int n){
//     if(i>n){
//         return;
//     }
//     nums(i+1,n);
//     cout<<i<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter any NUmber";
//     cin>>n;
//     nums(1,n);
// }


// void add(int i,int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     add(i-1,sum+i);
// }

// int main(){
//     int n;
//     cout<<"Enter any number";
//     cin>>n;
//     add(n,0);
// }

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n + sum(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter any number";
//     cin>>n;
//     cout<<sum(n);
// }

int fact(int n){
    if(n==1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int n;
    cout<<"Enter any number";
    cin>>n;
    cout<<fact(n);
}