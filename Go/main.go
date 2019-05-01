package main

import (
	"fmt"
	"strconv"
)

func main() {
	for i := 1; i <= 150; i++ {
		switch {
		case i%3 == 0 || i%10 == 3:
			fmt.Println(strconv.Itoa(i) + "!")
		default:
			fmt.Println(i)
		}
	}
}
