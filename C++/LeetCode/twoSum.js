var twoSum = function(nums, target){

    var i,j;
    var n = nums.length;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(nums[i]+nums[j]==target){
                console.log(i);
            }
        }
    }
}

twoSum([2,7,11,15],1);