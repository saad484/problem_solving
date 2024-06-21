#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#if defined(BRUTE_FORCE)     
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
int i, j;
int *ret_arr = (int*)malloc(2 * sizeof(int));
  if( ret_arr == NULL)
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
#else
#define HASH_SIZE 10000
static int hash_arr[HASH_SIZE];
#if 0
void print_hash(char *msg){
    int i;
    printf("%s ",msg);
    for (i  = 0; i < HASH_SIZE; i++)
    {
        printf("[%d] %2d , ", i, hash_arr[i]);
    }
   printf("\n"); 
}
#endif
void hash_init(){
    memset(hash_arr, -1, sizeof(hash_arr));
}

int hash_insert(int n, int idx){
    if(hash_arr[(n + HASH_SIZE/2) % HASH_SIZE] == -1){
       hash_arr[(n + HASH_SIZE/2) % HASH_SIZE] = idx;
    //print_hash("INS");
    return 0;
    }else{
        return -1;
    }

}
int hash_find(int n){
      //print_hash("FIN"); 
    if(hash_arr[(n + HASH_SIZE/2) % HASH_SIZE] != -1)
    {
    return    hash_arr[(n + HASH_SIZE/2) % HASH_SIZE];
    }else{
        return -1;
    }
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i, idx;
    int *ret_arr = (int*)malloc(2 * sizeof(int));
  if( ret_arr == NULL || nums == NULL || numsSize < 2) 
  {
      *returnSize = 0;
      return NULL;
  }
  hash_init();
 for (i = 0;i < numsSize; i++){
     if(idx = hash_find(target - nums[i]) == -1){
         hash_insert(nums[i], i);
     }else{
         ret_arr[0] = i;
         ret_arr[1] = idx;
         *returnSize = 2;
         return ret_arr;
     }
 } 
 free(ret_arr);
 *returnSize = 0;
 return NULL;
}
#endif
int main(){
int a[] = {0,4,3,0};
int rs, target = 0;
int *p = NULL;

p = twoSum(a,sizeof(a)/sizeof(a[0]), target, &rs);
if (rs=0)
{
    printf("Target dosen't found!");

}else{
    printf("Target found in indices %d and %d",p[0],p[1]);
free(p);
}

return 0;

}
