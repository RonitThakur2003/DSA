#include<iostream>
#include<map>
#include<math.h>
// #include<bits/stdc++.h>
using namespace std;

// Finf the largest element in an array-------------------

// int largestElement(vector<int>& nums) {
//     int n = nums.size(),maxEl=nums[0];
//     for(int i=1;i<n;i++){
//         if(nums[i]>maxEl) maxEl=nums[i];
//     }
//     return maxEl;
// }

// int main(){
//     int n;
//     cout<<"Enter the Size of the array";
//     cin>>n;
//     vector<int> nums(n);
//     cout<<"Enter an Array"; 
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     cout<<largestElement(nums);
//     return 0;
// }


// Finf the Second largest element in an array-------------------

// int largestElement(vector<int>& nums) {
//     int n = nums.size(),maxEl=nums[0],smaxEl=-1;
//     for(int i=1;i<n;i++){
//         if(nums[i]>maxEl){
//             smaxEl=maxEl;
//             maxEl=nums[i];
//         }
//         if(nums[i]>smaxEl&&nums[i]<maxEl) smaxEl=nums[i];
//     }
//     return smaxEl;
// }

// int main(){
//     int n;
//     cout<<"Enter the Size of the array";
//     cin>>n;
//     vector<int> nums(n);
//     cout<<"Enter an Array"; 
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     cout<<largestElement(nums);
//     return 0;
// }


// Check if the array is sorted or not--------------------

// string isSorted(vector<int>& nums){
//     int n = nums.size();
//     for(int i=1;i<n;i++){
//         if(nums[i]<nums[i-1]) return "Not Sorted";
//     }
//     return "Sorted";
// }

// int main(){
//     int n;
//     cout<<"Enter the Size of the array";
//     cin>>n;
//     vector<int> nums(n);
//     cout<<"Enter an Array"; 
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     cout<<isSorted(nums);
//     return 0;
// }


// Remove Duplicates from Sorted Array-----------------

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int n = nums.size();
//         int j=1;
//         for(int i=0;i<n-1;i++){
//             if(nums[i]!=nums[i+1]){
//                 nums[j]=nums[i+1];
//                 j++;
//             }
//         }
//         return j;
//     }
// };


// Left Rotate an array by one place------------

// void rotate(vector<int>& nums,int n){
//     int left = nums[0];
//     for(int i=0;i<n-1;i++){
//         nums[i]=nums[i+1];
//     }
//     nums[n-1]=left;
//     for(auto it:nums){
//         cout<<it;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the Size of the array";
//     cin>>n;
//     vector<int> nums(n);
//     cout<<"Enter an Array"; 
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     rotate(nums,n);
//     return 0;
// }


// Right rotate an array by D places--------------------

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k=k%n;
//         if(k==0) return;
//         reverse(nums.begin(),nums.end());
//         reverse(nums.begin(),nums.begin()+k);
//         reverse(nums.begin()+k,nums.end());
//     }
// };


// Move Zeros to end--------------------------

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         int j = 0;
//         for(int i=0;i<n-1;i++){
//             if(nums[i]==0 && nums[i+1]!=0){
//                 swap(nums[j],nums[i+1]);
//                 j++;
//                 continue;
//             }
//             if(nums[i]!=0){
//                 j++;
//             }
//         }
//         return;
//     }
// };



// LINEAR SEARCH--------------------------------

// int linearSearch(vector<int>& nums,int n,int k){
//     for(int i=0;i<n;i++){
//         if(nums[i]==k){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n,k;
//     cout<<"Enter the Size of the array";
//     cin>>n;
//     vector<int> nums(n);
//     cout<<"Enter an Array"; 
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     cout<<"Enter the number to search in array";
//     cin>>k;
//     cout<<linearSearch(nums,n,k);
//     return 0;
// }

// Union of two sorted array---------------------------

// vector<int> unionArr(vector<int>& a,vector<int>& b,int n1,int n2){
//     vector<int> u;
//     int i=0,j=0;
//     while(i<n1 &&j<n2){
//         if(a[i]<=b[j]){
//             if(u.size()==0 || u.back()!=a[i]){
//                 u.push_back(a[i]);
//             }
//             i++;
//         }else{
//             if(u.size()==0 || u.back()!=b[j]){
//                 u.push_back(b[j]);
//             }
//             j++;
//         }
//     }
//     while(i<n1){
//         if(u.size()==0 || u.back()!=a[i]){
//             u.push_back(a[i]);
//         }
//         i++;
//     }
//     while(j<n2){
//         if(u.size()==0 || u.back()!=b[j]){
//             u.push_back(b[j]);
//         }
//         j++;
//     }
//     return u;
// }


// int main(){
//     int n1,n2;
//     cout<<"Enter the Size of the first array";
//     cin>>n1;
//     vector<int> a(n1);
//     cout<<"Enter an Array"; 
//     for(int i=0;i<n1;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter the Size of the second array";
//     cin>>n2;
//     vector<int> b(n2);
//     cout<<"Enter an Array"; 
//     for(int i=0;i<n2;i++){
//         cin>>b[i];
//     }
//     vector<int> u = unionArr(a,b,n1,n2);
//     for(auto it:u){
//         cout<<it;
//     }
//     return 0;
// }


// Intersection ---------------------------------


// vector<int> intersectionArr(vector<int>& a,vector<int>& b,int n1,int n2){
//     vector<int> inter;
//     int i=0,j=0;
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]) i++;
//         else if(a[i]>b[j]) j++;
//         else{
//             inter.push_back(a[i]);
//             i++;
//             j++;
//         }
//     }
//     return inter;
// }

// int main(){
//     int n1,n2;
//     cout<<"Enter the Size of the first array";
//     cin>>n1;
//     vector<int> a(n1);
//     cout<<"Enter an Array"; 
//     for(int i=0;i<n1;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter the Size of the second array";
//     cin>>n2;
//     vector<int> b(n2);
//     cout<<"Enter an Array"; 
//     for(int i=0;i<n2;i++){
//         cin>>b[i];
//     }
//     vector<int> inter = intersectionArr(a,b,n1,n2);
//     for(auto it:inter){
//         cout<<it;
//     }
//     return 0;
// }

// Missing Numbers-----------------------------------

// int missingNumber(vector<int>& nums) {
//        int n = nums.size();
//        int s1=0,s2=0;
//        for(int i=1;i<=n;i++){
//         s1 += nums[i-1];
//         s2 += i;
//    }
//     return s2-s1;
// }


// Maximum Consecutive Ones----------------------

//  int findMaxConsecutiveOnes(vector<int>& nums) {
//         int cnt = 0,maxCnt = 0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==1){
//                 cnt++;
//                 maxCnt = max(cnt,maxCnt);
//             }
//             else{
//                 cnt=0;
//             }
            
//         }
//         return maxCnt;
//     }



// Find the number that appears once, and other numbers twice.---------------------


//  int singleNumber(vector<int>& nums) {
//         int n = nums.size();
//         int el=0;
//         for(int i=0;i<n;i++){
//             el = el^nums[i];
//         }
//         return el;
//     }


// Longest subarray with given sum K(positives)------------------------------------

// int largestSubarraySum(vector<int>& nums,int n,int k){
//     int sum=0,len=0,maxLen=0,j=0;
//     for(int i=0;i<n;i++){
//         sum += nums[i];
//         if(sum==k){
//             len=i-j+1;
//             maxLen = max(maxLen,len);
//         }else if(sum>k){
//             sum -= nums[j];
//             j++;
//             if(sum==k){
//             len=i-j+1;
//             maxLen = max(maxLen,len);
//             }
//         }
//     }
//     return maxLen;
// }


// int main(){
//     int n,k;
//     cout<<"Enter the Size of the array";
//     cin>>n;
//     vector<int> nums(n);
//     cout<<"Enter an Array"; 
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     cout<<"Enter the Sum of the subarray";
//     cin>>k;
//     cout<<largestSubarraySum(nums,n,k);
//     return 0;
// }