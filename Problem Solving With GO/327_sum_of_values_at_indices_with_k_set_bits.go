package main

import "fmt"

// https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/description/?envType=problem-list-v2&envId=array

func sumIndicesWithKSetBits(nums []int, k int) (result int) {
    if k == 0 {
        return nums[0]
    }

    if len(nums) == 1 {
        return 0
    }

    bits := make([]int, len(nums))
    for index := 1; index < len(nums); index++ {
        bits[index] = bits[index>>1] + (index & 1)
        if bits[index] == k {
            result += nums[index]
        }
    }

    return result
}

func main () {

}