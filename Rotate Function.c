int maxRotateFunction(int* nums, int numsSize){
    int max,s=0,s1=0;
    if(numsSize<=1){
        return 0;
    }
    for(int i=0;i<numsSize;i++){
        s=s+nums[i];
        s1=s1+(i*nums[i]);
    }
    max=s1;
    for(int i=numsSize-1;i>=1;i--){
        s1=s1+s-(numsSize*nums[i]);
        if(max<s1){
            max=s1;
        }
    }
    return max;
}