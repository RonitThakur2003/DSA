
int largestElement(vector<int>& nums) {
    int n = nums.size(),maxEl=nums[0],smaxEl=-1;
    for(int i=1;i<n;i++){
        if(nums[i]>maxEl){
            smaxEl=maxEl;
            maxEl=nums[i];
        }
        if(nums[i]>smaxEl&&nums[i]<maxEl) smaxEl=nums[i];
    }
    return smaxEl;
}

int main(){
    int n;
    cout<<"Enter the Size of the array";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter an Array"; 
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<largestElement(nums);
    return 0;
}