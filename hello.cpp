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



// STL => standard template library----------------

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



// RECURSION----------

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

// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter any number";
//     cin>>n;
//     cout<<fact(n);
// }

// void rev(int i,int arr[],int n){
//     if(i>=n/2) return ;
//     swap(arr[i],arr[n-i-1]);
//     rev(i+1,arr,n);
// }

// int main(){
//     int n;
//     cout<<"Enter any number";
//     cin>>n;
//     cout<<"Enter numbers to reverse";
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Original arrray";
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     cout<<endl;
//     rev(0,arr,n);
//     cout<<"Reversed arrray";
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
// }


// string palindrome(int i,string str,int n){
//     if(i>=n/2) return "String is Palindrome";
//     if(str[i]!=str[n-i-1]) return "String is not Palindrome";
//     return palindrome(i+1,str,n);
// }

// int main(){
//     string str;
//     cout<<"Enter String to Check";
//     cin>>str;
//     int n = str.size();
//     cout<<palindrome(0,str,n);
// }


// HASHING----------

// int main(){
//     int n;
//     cout<<"Enter the size of the array";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int hash[10]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] += 1;
//     }

//     cout<<"Enter the number";
//     int m;
//     cin>>m;
//     cout<<m<<" is "<<hash[m]<<" times";
// }

// int main(){
// int arr[]={1,2,3,4,5,6,7,8,9};
// for(auto it : arr){
//     cout<<it<<endl;
// }
// }

// int main(){
//     int arr[]={6,6,6,3,1,3};
//     int n = 6,maxi=0,mini=INT_MAX,maxValue,minVAlue;
//     unordered_map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         if(it.second>maxi) {
//             maxi=it.second;
//             maxValue = it.first;
//         }
//         if(it.second<mini) {
//             mini=it.second;
//             minVAlue = it.first;
//         }
//     }
//     cout<<maxValue<<endl<<minVAlue;
//     return 0;
// }


// SORTING--------

// SELECTION SORT--------------

// int main(){
//     int arr[]={37,45,32,65,24,13};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         int min = i;
//         for(int j=i;j<n;j++){
//             if(arr[j]<arr[min]) min = j;
//         }
//         swap(arr[i],arr[min]);
//     }
//     for(auto it:arr){
//         cout<<it<<"  ";
//     }
//     return 0;
// }


// BUBBLE SORT------------

// int main(){
//     int arr[]={37,45,32,65,24,13};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=n-1;i>=0;i--){
//         int didSwap = 0;
//         for(int j=0;j<i;j++){
//             if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
//             didSwap++;
//         }
//         if(didSwap==0) break;
//     }
//     for(auto it:arr){
//     cout<<it;
//     }
//     return 0;
// }

// INSERTION SORT-------------


// int main(){
//     int arr[]={37,45,32,65,24,13};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             swap(arr[j-1],arr[j]);
//             j--;
//         }
//     }
//     for(auto it:arr){
//     cout<<it;
//     }
//     return 0;
// }



// MERGE SORT-----------------

// void merge(vector<int> &arr,int low,int mid,int high){
//     vector<int> temp;
//     int left = low;
//     int right = mid+1;
//     while(left<=mid && right<=high){
//         if(arr[left]<arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
    
// }

// void ms(vector<int> &arr,int low,int high){
//     if(low==high) return;
//     int mid=(low+high)/2;
//     ms(arr,low,mid);
//     ms(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }

// int main(){
//     vector<int> arr={4,2,6,8,3,9,7,1};
//     int n= arr.size();
//     ms(arr,0,n-1);
//     for(auto it:arr){
//         cout<<it;
//     }
//     return 0;
// }

