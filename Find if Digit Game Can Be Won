bool canAliceWin(int* nums, int numsSize) {
    int singlesum=0;
    int doublesum=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<=9)
        singlesum+=nums[i];
        else
        doublesum+=nums[i];
    }
if(singlesum==doublesum)
return false;
else
return true;
}
