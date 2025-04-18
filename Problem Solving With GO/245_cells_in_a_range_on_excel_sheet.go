package main

import "fmt"

// https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/description/?envType=problem-list-v2&envId=string
func cellsInRange(s string) []string {
    n := (s[3] - s[0] + 1) * (s[4] - s[1] + 1)
    ans := make([]string, n)

    i := 0
    for c := s[0]; c <= s[3]; c++ {
        for r := s[1]; r <= s[4]; r++ {
            ans[i] = string([]byte{c, r})
            i++
        }
    }

    return ans
}

func main () {
	fmt.Println("tahsin.ferdous3546@gmail.com")
}