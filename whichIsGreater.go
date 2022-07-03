package main
import "fmt"

func whichIsGreater(a int, b int) {
   if(a > b) {
      fmt.Println("1")
      return
   } else {
      fmt.Println("0")
      return
   }
}

func main() { 
   var a, b int
   fmt.Scanln(&a, &b)
   whichIsGreater(a, b)
}