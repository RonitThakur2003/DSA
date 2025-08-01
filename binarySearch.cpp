

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