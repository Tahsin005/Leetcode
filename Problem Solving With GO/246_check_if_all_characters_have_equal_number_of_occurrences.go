package main

import "fmt"

// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/?envType=problem-list-v2&envId=string

func areOccurrencesEqual(s string) bool {
    runes := make([]rune, 26)

    for _, c := range s {
        runes[c - 'a'] += 1
    }

    check := runes[s[0] - 'a']
    for i := 1; i < len(s); i++ {
        if runes[s[i] - 'a'] != check {
            return false
        }
    }
    return true
}


func main () {
	fmt.Println("tahsin.ferdous3546@gmail.com")
}