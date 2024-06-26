#!/usr/bin/python3
from typing import List
import __main__


def longestCommonPrefix(strs: List[str]) -> str:
    if not strs:
        return ""
    shortest = min(strs, key = len)
    for i, char in enumerate(shortest):
        for other in strs:
            if other[i] != char:
                return shortest[:i]
    return shortest


if __name__ == '__main__':

    strs = ["flower","flow","flight"]
    print(longestCommonPrefix(strs))
