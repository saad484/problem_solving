
#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
int i, j;
int *ret_arr = (int*)malloc(2 * sizeof(int));
  if( ret_arr == NULL|| nums == NULL || numsSize < 2) 
  {
      *returnSize = 0;
      return NULL; 
  }
  for(i = 0;i < numsSize;i++){
      for(j = i + 1;j<numsSize;j++){
          if(nums[i]+nums[j]==target){
              *returnSize = 2; 
          ret_arr[0] = i;
          ret_arr[1] = j;
          return ret_arr;
          }
      }
  }
*returnSize = 0;
free(ret_arr);
return NULL;

}

int main(){
int a[] = {2,7,11,15};
int rs, target = 9;
int *p = NULL;

p = twoSum(a,sizeof(a)/sizeof(a[0]), target, &rs);
if (rs == 0)
{
    printf("Target not found!");
    
}else{
    printf("Target found in indices %d and %d",p[0],p[1]);
free(p);
}

return 0;

}