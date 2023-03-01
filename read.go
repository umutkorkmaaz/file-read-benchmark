package main

import (
    "fmt"
    "io/ioutil"
    "strings"
    "time"
	"os"
	"bufio"
)

func main() {
    start := time.Now()
    content, err := ioutil.ReadFile("./lists.csv")
    if err != nil {
        fmt.Println(err)
        return
    }

    if strings.Contains(string(content), "123.194.235.37") {
        // do something
    }

	elapsed := time.Since(start)
	fmt.Printf("[go] File check finished in %s\n", elapsed)
	
	second()
}


func second() {
	start := time.Now()
	f, err := os.Open("./lists.csv")
	if err != nil {
		return
	}
	defer f.Close()
	scanner := bufio.NewScanner(f)
	for scanner.Scan() {
		if strings.Contains(scanner.Text(), "123.194.235.37"){
			break
		}
	}
	elapsed := time.Since(start)
	fmt.Printf("[goAlt] File check finished in %s\n", elapsed)
}
