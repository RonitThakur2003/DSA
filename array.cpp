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