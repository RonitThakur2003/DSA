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


// SORT COLORS----------------------------------

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size();
//        int cnt0=0,cnt1=0,cnt2=0;
//        for(int i = 0;i<n;i++){
//         if(nums[i]==0) cnt0++;
//         else if(nums[i]==1) cnt1++;
//         else cnt2++;
//        }
//        for(int i=0;i<cnt0;i++){
//         nums[i]=0;
//        }
//        for(int i=cnt0;i<cnt0+cnt1;i++){
//         nums[i]=1;
//        }
//        for(int i=cnt0+cnt1;i<n;i++){
//         nums[i]=2;
//        }
//     }
// };


// MAJORITY ELEMENTS----------------------------------

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//        map<int,int> mpp;
//        int n = nums.size();
//        for(int i=0;i<n;i++){
//         mpp[nums[i]]++;
//        }
//        for(auto it:mpp){
//         if(it.second>n/2) return it.first;
//        }
//        return -1;
//     }
// };



// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int el=nums[0],cnt=1;
//         for(int i=1;i<nums.size();i++){
//             if(cnt==0){ 
//                 el=nums[i];
//                 cnt++;
//             }
//             else if(nums[i]==el) cnt++;
//             else cnt--;
//         }
//         return el;
//     }
// };


// maximum sum of subarray KADANE'S ALGORITHM----------------------

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxi=INT_MIN,sum=0;
//         for(int i=0;i<nums.size();i++){
//             sum += nums[i];
//             if(sum<0){
//                 sum=0;
//                 maxi = max(maxi,sum);
//             }else{
//                 maxi = max(maxi,sum);
//             }
//         }
//         return maxi;
//     }
// };


//  Best Time to Buy and Sell Stock

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int mini=INT_MAX,profit=0;
//         for(auto it:prices){
//             mini = min(it,mini);
//             profit = max(profit,it-mini);
//         }
//         return profit;
//     }
// };


// Rearrange Array Elements by Sign---------------------------------

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> arr(nums.size());
//         int cntOdd=0,cntEven=1;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>=0){
//                 arr[cntOdd]=nums[i];
//                 cntOdd += 2;
//             }
//             else{
//                 arr[cntEven]=nums[i];
//                 cntEven += 2;
//             }
//         }
//         return arr;
//     }
// };


// Next Permutation------------------------------------------------

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int ind=-1;
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 ind = i;
//                 break;
//             }
//         }
//         if(ind==-1){
//             reverse(nums.begin(),nums.end());
//             return;
//         }
//         for(int i=n-1;i>ind;i--){
//             if(nums[i]>nums[ind]){
//                 swap(nums[i],nums[ind]);
//                 break;
//             }
//         }
//         reverse(nums.begin()+ind+1,nums.end());
//         return;
//     }
// };



// Longest Consecutive Sequence-------------------------------------------

// BETTER APPROACH---------------

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int currCnt=0,longestCnt=0,lastSmall=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]-1==lastSmall){
//                 lastSmall=nums[i];
//                 currCnt++;
//             }else if(nums[i]!=lastSmall){
//                 lastSmall=nums[i];
//                 currCnt = 1;
//             }
//             longestCnt = max(longestCnt,currCnt);
//         }
//         return longestCnt;
//     }
// };


// OPTIMAL APPROACH---------------

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.size()==0) return 0;
//         unordered_set<int> st;
//         int longest=0;
//         for(int i=0;i<nums.size();i++){
//             st.insert(nums[i]);
//         }
//         for(auto it:st){
//             if(st.find(it-1)==st.end()){
//                 int cnt=1;
//                 int a=it;
//                 while(st.find(a+1)!=st.end()){
//                     cnt++;
//                     a++;
//                 }
//             longest = max(longest,cnt);
//             }
//         }
//         return longest;
//     }
// };



// Set Matrix Zeros---------------------------------------------------

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int m = matrix.size(), n = matrix[0].size();
//         int col0=1;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(matrix[i][j]==0){
//                     matrix[i][0]=0;
//                     if(j!=0){
//                     matrix[0][j]=0;
//                     }else{
//                         col0=0;
//                     }
//                 }
//             }
//         }
//         for(int i=1;i<m;i++){
//             for(int j=1;j<n;j++){
//                 if(matrix[i][j]!=0){
//                     if(matrix[i][0]==0||matrix[0][j]==0){
//                         matrix[i][j]=0;
//                     }
//                 }
//             }
//         }
//         if(matrix[0][0]==0){
//         for(int j=0;j<n;j++) matrix[0][j]=0;
//         }
//         if(col0==0){
//         for(int i=0;i<m;i++) matrix[i][0]=0;
//         }
//         return ;
//     }
// };


// Rotate Image------------------------------------------

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         for(int i =0;i<n;i++){
//             reverse(matrix[i].begin(),matrix[i].end());
//         }
//     }
// };


// Spiral Matrix-----------------------------------------------

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& mat) {
//         vector<int> ans;
//         int m = mat.size();
//         int n = mat[0].size();
//         int left=0,top=0,right=n-1,bottom=m-1;
        
//         while(top<=bottom && left<=right){
//         for(int i=left;i<=right;i++){
//             ans.push_back(mat[top][i]);
//         }
//         top++;
//         for(int i=top;i<=bottom;i++){
//             ans.push_back(mat[i][right]);
//         }
//         right--;
//         if(top<=bottom){
//         for(int i=right;i>=left;i--){
//             ans.push_back(mat[bottom][i]);
//         }
//         bottom--;
//         }
//         if(left<=right){
//         for(int i=bottom;i>=top;i--){
//             ans.push_back(mat[i][left]);
//         }
//         left++;
//         }}
//         return ans;
//     }
// };


// PASCAL TRIANGLE-----------------------------------------------

// class Solution {
//  public:
//   vector<vector<int>> generate(int numRows) {
//     vector<vector<int>> triangle;
//     for (int i = 0; i < numRows; i++) {
//         vector<int> row(i + 1, 1);
//         for (int j = 1; j < i; j++) {
//             row[j] = triangle[i - 1][j - 1] + triangle[i-1][j];
//         }
//         triangle.push_back(row);
//     }
//     return triangle;
//     }
// };


// MAJORITY ELEMENTS--------------------------------------------------------

// Better Approach

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int> ans;
//         map<int ,int> mpp;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             mpp[nums[i]]++;
//             if(mpp[nums[i]]==n/3+1){
//                 ans.push_back(nums[i]);
//             }
//         }
//         return ans;
//     }
// };


// Optimal Approach

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int cnt1=0,cnt2=0;
//         int el1=INT_MIN,el2=INT_MIN;
//         for(int i=0;i<n;i++){
//             if(cnt1==0 && nums[i]!=el2){
//                 el1=nums[i];
//                 cnt1++;
//             }else if(cnt2==0 && nums[i]!=el1){
//                 el2=nums[i];
//                 cnt2++;
//             }else if(nums[i]==el1) cnt1++;
//             else if(nums[i]==el2) cnt2++;
//             else{
//                 cnt1--,cnt2--;
//             }
//         }
//         vector<int> ans;
//         cnt1=0,cnt2=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==el1) cnt1++;
//             else if(nums[i]==el2) cnt2++;
//         }
//         if(cnt1>n/3) ans.push_back(el1);
//         if(cnt2>n/3) ans.push_back(el2);
//         return ans;
//     }
// };


// 3SUM----------------------------------------------------------

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n;i++){
//             if(i>0 && nums[i]==nums[i-1]) continue;
//             int j=i+1,k=n-1;
//             while(j<k){
//                 int sum = nums[i]+nums[j]+nums[k];
//                 if(sum==0){
//                     ans.push_back({nums[i],nums[j],nums[k]});
//                     j++;
//                     k--;
//                     while(j<k && nums[j]==nums[j-1]) j++;
//                     while(j<k && nums[k]==nums[k+1]) k--; 
//                 }else if(sum<0){
//                     j++;
//                 }else{
//                     k--;                  
//                 }
//             }
//         }
//        return ans; 
//     }
// };


// 4SUM----------------------------------------------------------

// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> ans;
//         for(int i=0;i<n;i++){
//             if(i>0 && nums[i]==nums[i-1]) continue;
//             for(int j=i+1 ;j<n;j++){
//                 if(j>i+1 && nums[j]==nums[j-1]) continue;
//                 int k=j+1;
//                 int l=n-1;
//                 while(k<l){
//                     long long sum = nums[i] + nums[j];
//                     sum += nums[k] +nums[l];
//                     if(sum==target){
//             ans.push_back({nums[i],nums[j],nums[k],nums[l]});
//                         k++;
//                         l--; 
//                         while(k<l && nums[k]==nums[k-1]) k++;
//                         while(k<l && nums[l]==nums[l+1]) l--;
//                     }else if(sum<target){
//                         k++;
//                     }else{
//                         l--;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };


// Merge Overlapping Subintervals--------------------------------------------

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& nums) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> ans;
//         for(int i=0;i<n;i++){
//            if(ans.empty() || nums[i][0]>ans.back()[1]){
//             ans.push_back(nums[i]);
//            }else{
//             ans.back()[1] = max(nums[i][1],ans.back()[1]);
//            }
//         }
//         return ans;
//     }
// };



//  Merge Sorted Array--------------------------------------------------------

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=m-1,j=n-1,k=m+n-1;
//         while(j>=0){
//             if(i>=0 && nums1[i]>nums2[j]){
//                 nums1[k]=nums1[i];
//                 i--,k--;
//             }else{
//                 nums1[k]=nums2[j];
//                 j--,k--;
//             }
//         }
//     }
// };