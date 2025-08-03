

// Binary Search----------------------------------------------------------

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int low = 0,high = n-1;
//         while(low<=high){
//             int mid = (low+high)/2;
//             if(nums[mid]==target) return mid;
//             else if(nums[mid]<target){
//                 low = mid+1;
//             }else{
//                 high = mid-1;
//             }
//         }
//         return -1;
//     }
// };



// LOWER BOUND or Search Insert Position------------------------------------

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int n = nums.size();
//         int ans = n;
//         int low = 0,high = n-1;
//         while(low<=high){
//             int mid = (low+high)/2;
//             if(nums[mid]>=target){
//                 ans = mid;
//                 high = mid-1;
//             }else low = mid+1;
//         }
//         return ans;
//     }
// };



// Find the first or last occurrence of a given number in a sorted array----------------------

// class Solution {
// public:
//     int startingIndex(vector<int>& nums, int target){
//         int n = nums.size();
//         int low = 0,high = n-1;
//         int ans = -1;
//         while(low<=high){
//             int mid = (low+high)/2;
//             if(nums[mid]==target){
//                 ans=mid;
//                 high = mid-1;
//             }
//             else if(nums[mid]>target) high = mid-1;
//             else low = mid+1;
//         }
//         return ans;
//     }

//     int endingIndex(vector<int>& nums, int target){
//         int n = nums.size();
//         int low = 0,high = n-1;
//         int ans = -1;
//         while(low<=high){
//             int mid = (low+high)/2;
//             if(nums[mid]==target){
//                 ans=mid;
//                 low = mid+1;
//             }
//             else if(nums[mid]>target) high = mid-1;
//             else low = mid+1;
//         }
//         return ans;
//     }

//     vector<int> searchRange(vector<int>& nums, int target) {
//         int starting = startingIndex(nums,target);
//         int ending = endingIndex(nums,target);
//         return {starting,ending};
//     }
// };


// OTHER APPROACH-----------------------------------------------------------

// class Solution {
// public:
//     int binarySearch(vector<int>& nums, int target,bool check){
//         int n = nums.size();
//         int low = 0,high = n-1;
//         int ans = -1;
//         while(low<=high){
//             int mid = (low+high)/2;
//             if(nums[mid]==target){
//                 ans=mid;
//                 if(check==true)
//                 high = mid-1;
//                 else
//                 low = mid+1;
//             }
//             else if(nums[mid]>target) high = mid-1;
//             else low = mid+1;
//         }
//         return ans;
//     }

   
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int starting = binarySearch(nums,target,true);
//         int ending = binarySearch(nums,target,false);
//         return {starting,ending};
//     }
// };



// Search in Rotated Sorted Array----------------------------------------------------

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int low=0,high=n-1;
//         while(low<=high){
//             int mid = (low + high)/2;
//             if(nums[mid]==target) return mid;
//             else if(nums[low]<=nums[mid]){
//                 if(nums[low]<=target && target<=nums[mid]){
//                     high = mid-1;
//                 }else{
//                     low = mid+1;
//                 }
//             }else{
//                 if(nums[mid]<=target && target<=nums[high]){
//                     low = mid+1;
//                 }else{
//                     high = mid-1;
//                 }
//             }
//         }
//         return -1;
//     }
// };



// Search in Rotated Sorted Array 2 [with duplicates]----------------------------------------------------

// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int low=0,high=n-1;
//         while(low<=high){
//             int mid = (low + high)/2;
//             if(nums[mid]==target) return true;
//             if(nums[low]==nums[mid] && nums[mid]==nums[high]){
//                 low = low+1;
//                 high = high-1;
//                 continue;
//             }
//             if(nums[low]<=nums[mid]){
//                 if(nums[low]<=target && target<=nums[mid]){
//                     high = mid-1;
//                 }else{
//                     low = mid+1;
//                 }
//             }else{
//                 if(nums[mid]<=target && target<=nums[high]){
//                     low = mid+1;
//                 }else{
//                     high = mid-1;
//                 }
//             }
//         }
//         return false;
//     }
// };



//  Find Minimum in Rotated Sorted Array---------------------------------------------


// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
//         int low = 0,high = n-1,mini = INT_MAX;
//         while(low<=high){
//             int mid = (low+high)/2;
//             if(nums[low]<=nums[mid]&&nums[mid]<=nums[high]){
//                 high = mid-1;
//             }
//             else if(nums[low]<=nums[mid]){
//                 low = mid+1;
//             }else{
//                 high = mid-1;
//             }
//             mini = min(mini,nums[mid]);
//         }
//         return mini;
//     }
// };


// Other Approach
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
//         int low = 0,high = n-1,mini = INT_MAX;
//         while(low<=high){
//             int mid = (low+high)/2;
//             if(nums[low]<=nums[high]){
//                 mini = min(mini,nums[low]);
//                 break;
//             }
//             if(nums[low]<=nums[mid]){
//                 mini = min(mini,nums[low]);
//                 low = mid+1;
//             }else{
//                 mini = min(mini,nums[mid]);
//                 high = mid-1;
//             }
//         }
//         return mini;
//     }
// };



// Single Element in a Sorted Array--------------------------------------------------

// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         if(n==1) return nums[0];
//         int low = 0,high = n-1;
//         while(low<=high){
//             int mid = (low+high)/2;
//             if(mid%2==0){
//                 if(nums[mid]==nums[mid+1]) low = mid+1;
//                 else high = mid-1;
//             }else{
//                 if(nums[mid]==nums[mid+1]) high = mid-1;
//                 else low = mid+1;
//             }
//         }
//         return nums[low];
//     }
// };



// Find Peak Element------------------------------------------------------------

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n = nums.size();
//         if(n==1) return 0;
//         if(nums[0]>nums[1]) return 0;
//         if(nums[n-1]>nums[n-2]) return n-1;
//         int low = 1,high = n-2;
//         while(low<=high){
//             int mid = (low+high)/2;
//             if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
//                 return mid;
//             }else if(nums[mid]>nums[mid-1]){
//                 low = mid+1;
//             }else{
//                 high = mid-1;
//             }
//         }
//         return -1;
//     }
// };



// Minimum Number of Days to Make m Bouquets-----------------------------------------

// class Solution {
// public:
//     bool isPossible(vector<int>& bloomDay, int m, int k,int mid){
//         int cnt = 0,bouquet=0;
//         for(auto it:bloomDay){
//             if(it<=mid){
//                 cnt++;
//             }else{
//                 bouquet += cnt/k;
//                 cnt = 0;
//             }
//         }
//         bouquet += cnt/k;
//         return (bouquet>=m)?true:false;
//     }

//     int minDays(vector<int>& bloomDay, int m, int k) {
//         int n = bloomDay.size();
//         if((double)m*k>n) return -1;
//         int low = INT_MAX,high=0;
//         for(auto it:bloomDay){
//             low = min(low,it);
//             high = max(high,it);
//         }
//         while(low<=high){
//             int mid = (low+high)/2;
//             bool isPosb = isPossible(bloomDay,m,k,mid);
//             if(isPosb==true){
//                 high = mid-1;
//             }
//             else low = mid+1;
//         }
//     return low;
//     }
// };



// Koko Eating Bananas-----------------------------------------------------

// class Solution {
// public:
//     long long eatingSpeed(vector<int>& piles,int mid,int n){
//         long long hours=0;
//         for(int i = 0;i<n;i++){
//             hours += ceil((double)piles[i]/mid);
//         }
//         return hours;
//     }

//     int minEatingSpeed(vector<int>& piles, int h) {
//         int n = piles.size();
//         int maxEl = INT_MIN;
//         for(int i=0;i<n;i++){
//             maxEl = max(maxEl,piles[i]);
//         }
//         int low = 1,high = maxEl;
//         while(low<=high){
//             int mid = (low+high)/2;
//             long long hours = eatingSpeed(piles,mid,n);
//             if(hours<=h){
//                 high = mid-1;
//             }else{
//                 low=mid+1;
//             }
//         }
//         return low;
//     }
// };


// Find the smallest Divisor------------------------------------------------------

// class Solution {
// public:
//     int divisorSum(vector<int>& nums,int mid){
//         double sum = 0;
//         for(auto it:nums){
//             sum += ceil((double)it/(double)mid); 
//         }
//         return sum;
//     }

//     int smallestDivisor(vector<int>& nums, int k) {
//         int low = 1,high = 0;
//         for(auto it:nums){
//             high = max(high,it);
//         }
//         while(low<=high){
//             int mid = (low+high)/2;
//             int sum = divisorSum(nums,mid);
//             if(sum<=k){
//                 high = mid-1;
//             }
//             else low=mid+1;
//         }
//         return low;
//     }
// };


// Capacity to Ship Packages within D Days-----------------------------------------------

// class Solution {
// public:
//     int minDays(vector<int>& weights, int cap){
//         int days = 1,load = 0;
//         int n = weights.size();
//         for(int i=0;i<n;i++){
//             if (load + weights[i] > cap) {
//             days += 1; 
//             load = weights[i]; 
//             }else {
//                 load += weights[i];
//             }
//         }
//         return days;
//     }

//     int shipWithinDays(vector<int>& weights, int days) {
//         int low = *max_element(weights.begin(),weights.end());
//         int high = accumulate(weights.begin(), weights.end(), 0);
//         while(low<=high){
//             int mid = (low+high)/2;
//             int reqDays = minDays(weights,mid);
//             if(reqDays <= days){
//                 high = mid-1;
//             }else{
//                 low = mid+1;
//             }
//         }
//         return low;
//     }
// };


// Kth Missing Positive Number----------------------------------------------------

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int n = arr.size();
//         int low = 0,high = n-1;
//         while(low<=high){
//             int mid = (high+low)/2;
//             int missing = arr[mid]-(mid+1);
//             if(missing<k) low = mid+1;
//             else high = mid-1;
//         }     
//         return low+k;
//     }
// };