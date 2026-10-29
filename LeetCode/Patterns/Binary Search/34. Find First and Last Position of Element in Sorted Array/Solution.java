class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] arr = new int[2];
        int s=0,e=nums.length-1;
        while(s<=e){
            int m = s+(e-s)/2;
            if(nums[m]<target)s=m+1;
            else if(nums[m]>target)e=m-1;
            else if(nums[m]==target){
                if(nums[s]!=target)s++;
                if(nums[e]!=target)e--;
                if(nums[s]==target&&nums[e]==target){
                    arr[0] = s;
                    arr[1] = e;
                    return arr;
                }
            }
        }arr[0] = -1;
        arr[1] = -1;
        return arr;
    }
}