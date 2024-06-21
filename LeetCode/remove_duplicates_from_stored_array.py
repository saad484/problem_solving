 #!/usr/bin/python3
 
 
import __main__
from typing import List


def removeDuplicates(nums: List[int]) -> int:
    uniq_nums = sorted(set(nums))
    length = len(uniq_nums) 
    for i in range(length):
        nums[i] = uniq_nums[i]
        
    return length


if __name__ == "__main__":
    nums = [1, 1, 2]
    print(removeDuplicates(nums))
    