

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