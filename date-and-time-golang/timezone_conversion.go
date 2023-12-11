package main

import (
	"fmt"
	"time"
)

func main() {
	indonesiaLocation, err := time.LoadLocation("Asia/Jakarta")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	currentTimeIndonesia := time.Now().In(indonesiaLocation)

	fmt.Println("Time in seconds since epoch:")
	fmt.Println(currentTimeIndonesia.Unix())

	fmt.Println("\nCurrent date and time:")
	fmt.Println(currentTimeIndonesia)

	fmt.Println("\nFormatting the current date and time using strftime():")
	fmt.Println(currentTimeIndonesia.Format("06-01-02-15-04"))

	fmt.Println("\nOr formatting it like this:")
	fmt.Println(currentTimeIndonesia.Format("02-01-06 and 15:04"))

	fmt.Println("\nCurrent Year:")
	fmt.Println(currentTimeIndonesia.Format("2006"))

	fmt.Println("\nCurrent Month of the year:")
	fmt.Println(currentTimeIndonesia.Format("January"))

	fmt.Println("\nWeek number of the year:")
	fmt.Println(currentTimeIndonesia.Format("02"))

	fmt.Println("\nWeekday of week:")
	fmt.Println(currentTimeIndonesia.Format("0"))

	fmt.Println("\nDay of the year:")
	fmt.Println(currentTimeIndonesia.Format("002"))

	fmt.Println("\nDay of the month:")
	fmt.Println(currentTimeIndonesia.Format("02"))

	fmt.Println("\nDay of the week:")
	fmt.Println(currentTimeIndonesia.Format("Monday"))

	fmt.Println("\nTime tuple for local time:")
	fmt.Println(currentTimeIndonesia)

	fmt.Println("\nFormatting it in readable form:")
	fmt.Println(currentTimeIndonesia.Format("Mon Jan 02 15:04:05 2006"))

	myDate := time.Date(1996, time.July, 19, 0, 0, 0, 0, time.UTC)
	fmt.Println("\nWeekday of a certain date:")
	fmt.Println(myDate.Format("Monday"))
}
