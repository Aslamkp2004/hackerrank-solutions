# Here is my HackerRank Solutions

> The repository contains the solutions to various HackerRank problems.Organize the solutions so they are easy to navigate and understand. Each solution includes a reference to the problem statement and is well-documented to explain the logic and approach.

---
## Solution Approach

>You can find the problem statements and descriptions for these solutions by following the provided commands within the c programs or by visiting the Hackerrank website [here](https://www.hackerrank.com/challenges). Simply search for the program name to access the detailed problem statement.

---
### Apple and orange

- [Solution](c/Apple and Orange.c)

### - Explanation:
    
    1 Input Processing:

     The code reads input data from the standard input, including the range [s, t], positions of apple and orange trees (a and b), and the counts and positions of apples and oranges.
     
      2Counting Apples and Oranges:

     The countApplesAndOranges function is responsible for counting apples and oranges that fall within the specified range [s, t].
     It uses for loops to iterate through the positions of both apples and oranges.
     If a fruit's position falls within the range [s, t], it increments the respective count variable (appleCount or orangeCount).

    3 Output Display:

     After counting the fruits, the code prints the counts of apples and oranges to the standard output.
     It uses printf to display the results.

     4 Dynamic Memory Allocation:

     The code allocates memory dynamically for arrays to store input data, such as positions of apples and oranges. This allows flexibility to handle varying input sizes.
     

---

### c/Birthday Cake Candles

- [Solution](c/Birthday Cake Candles.c)

### - Explanation:

    1 Birthday Cake Candles Function:

       The main function in this code is birthdayCakeCandles, which is designed to find the number of tallest candles on a birthday cake.
     It takes two parameters: candles_count (the number of candles on the cake) and candles (an array representing the heights of the candles).
     2 Identifying the Tallest Candles:

     The function initializes two variables, max_height and count, to keep track of the maximum height of candles and the count of candles with the maximum height, respectively.
     It iterates through the candles array, comparing each candle's height to the current maximum height (max_height).
     If a taller candle is found, max_height is updated, and count is reset to 1.
     If a candle of the same height as max_height is found, count is incremented.
     3 Returning the Count of Tallest Candles:

     After processing all the candles, the function returns the value of count, which represents the number of tallest candles on the cake.
     Input Processing and Output:

     The main function handles input and output.
     It reads the number of candles (candles_count) and their heights from the standard input.
     It calls the birthdayCakeCandles function to calculate the count of tallest candles and then prints the result to the standard output.
---

### c/CamelCase

- [Solution](c/CamelCase.c)

### - Explanation:
    1 CamelCase Function:

     The main function in this code is camelcase, which is designed to count the number of words in a CamelCase string.
     It takes one parameter: s (a string in CamelCase notation).
     
     2 Counting CamelCase Words:

     The function initializes a variable count to 1. This is because the first word in the CamelCase string is considered to be      uncapitalized, and there's always at least one word in the string.
     
     3 Iterating Through the String:

     The function iterates through the characters of the input string s using a for loop.
     For each character, it checks if the character is an uppercase letter (using isupper from <ctype.h>).
     If an uppercase letter is found, it implies the start of a new word, and count is incremented.
     
     4 Returning the Word Count:

     After processing the entire string, the function returns the final value of count, which represents the number of words in      the CamelCase string.
---

### c/Compare the Triplets

- [Solution](c/Compare the Triplets.c)

### - Explanation:

     1Comparing Triplets:

     The main function in this code is compareTriplets, which is designed to compare two sets of triplets and determine the scores of two individuals, Alice and Bob.
     It takes two parameters: a and b, which are arrays representing the triplets of Alice and Bob.
     
     2 Comparing Triplets Logic:

     The function initializes a dynamic integer array result to store the scores. It allocates space for two integers, where      result[0] represents Alice's score and result[1] represents Bob's score.
     It then iterates through each element of the arrays a and b, comparing the corresponding elements at the same index.
     If a[i] is greater than b[i], Alice gets one point, so result[0] is incremented.
     If b[i] is greater than a[i], Bob gets one point, so result[1] is incremented.
     
     3 Returning the Result:

     After comparing all elements of the triplets, the function stores the number 2 (indicating the size of the result array) in the result_count pointer.
     It returns the result array, which contains Alice's and Bob's scores.
      4 Input and Output Handling:

     The main function handles input and output.
     It reads two lines of input, each containing three integers separated by spaces. These integers represent the triplets for Alice and Bob.
     It calls the compareTriplets function, passing the triplets and a pointer to result_count to obtain the result.
     Finally, it prints the result to the standard output in the format "Alice's score Bob's score"
---

### c/Grading Students

- [Solution](c/Grading Students.c)

### - Explanation:
     1 Grading Students:

     The main function in this code is gradingStudents, which is designed to round grades based on specific rules.
     It takes two parameters: grades, an array of student grades, and grades_count, which is the number of grades in the array.
     
     2 Rounding Logic:

     The function allocates memory for an array called rounded_grades to store the rounded grades. It has the same size as the input grades array.
     It iterates through the grades array and checks each grade.
     If the grade is less than 38, it remains unchanged (not rounded).
     If the grade is greater than or equal to 38, the code calculates the next multiple of 5 greater than the grade. If the difference between the next multiple of 5 and the grade is less than 3, the grade is rounded up to the next multiple of 5. Otherwise, it remains unchanged.
     3 Returning the Result:

     The function stores the number of grades (equal to grades_count) in the result_count pointer.
     It returns the rounded_grades array, which contains the rounded grades.
     
     4 Input and Output Handling:

     The main function handles input and output. It reads the number of grades and the grades themselves from standard input.
     It calls the gradingStudents function to obtain the rounded grades and the result_count.
     Finally, it prints the rounded grades to the standard output, one per line.
---

### c/Mini-Max Sum

- [Solution](c/Mini-Max Sum.c)

### - Explanation:
     1 Mini-Max Sum Calculation:

     The main function in this code is miniMaxSum, which calculates and prints the minimum and maximum sums of an array of integers.
     It takes two parameters: arr, an array of integers, and arr_count, which is the number of elements in the array.
     
     2 Calculating Min, Max, and Total Sum:

     The function initializes minSum and maxSum with the first element of the array and totalSum with the same value.
     It then iterates through the array, updating totalSum by adding each element.
     While iterating, it checks if the current element is smaller than minSum or greater than maxSum. If so, it updates minSum or maxSum accordingly.
 
      3 Calculating Minimum and Maximum Sums:

     After the loop, the function calculates the minimum sum as totalSum - maxSum and the maximum sum as totalSum - minSum.
     These values represent the sum of all elements in the array except the largest and smallest elements, respectively.
     
     4 Printing the Results:

     Finally, the function prints the minimum and maximum sums as two space-separated integers.
     The main function reads an array of integers, calls the miniMaxSum function to calculate and print the results, and does not return any values.
---

### c/Number Line Jumps

- [Solution](c/Number Line Jumps.c)

### - Explanation:

      1 Kangaroo Meeting Calculation:

     The main function in this code is kangaroo, which determines if two kangaroos at different positions and with different velocities will ever meet at the same location.
     It takes four parameters: x1 (position of the first kangaroo), v1 (velocity of the first kangaroo), x2 (position of the second kangaroo), and v2 (velocity of the second kangaroo).
     The function returns a string "YES" if the kangaroos will meet, or "NO" if they will not meet.

     2 Meeting Conditions:

     The function checks several conditions to determine if the kangaroos will meet:
     If the velocities are equal (v1 == v2), it checks if the initial positions are the same. If they are, the kangaroos will meet at every point, so it returns "YES." If the initial positions are different, they will never meet, so it returns "NO."
     If the velocities are different, it calculates the number of jumps required for the kangaroos to meet. If the number of jumps is non-negative and the remainder of the position difference divided by the velocity difference is zero, the kangaroos will meet, and it returns "YES." Otherwise, they will not meet, and it returns "NO."
     3 Reading Input:

     The main function reads the input for the kangaroo positions and velocities, as well as the expected output, from the standard input.
     It then calls the kangaroo function with the provided input values.

     4 Printing the Result:

     The result from the kangaroo function (either "YES" or "NO") is printed to the standard output.


---

### c/Plus Minus

- [Solution](c/Plus Minus.c)

### - Explanation:

      1 Calculating Positive, Negative, and Zero Fractions:

     The main function in this code is plusMinus, which takes an array of integers arr and its count as input.
     The function calculates and prints the fractions of positive, negative, and zero elements in the array.
     It initializes three counters for positive, negative, and zero elements and iterates through the array, counting these elements.
     
     2 Fraction Calculation:

     After counting the elements, the function calculates the fractions of positive, negative, and zero elements by dividing the counts by the total number of elements in the array (arr_count).
     It prints these fractions with a precision of six decimal places using printf.
     
     3Reading Input and Storing in an Array:

     The main function first reads an integer n, which represents the number of elements in the array.
     It then reads the array elements from the standard input and stores them in a dynamically allocated integer array arr.
     
     4 Memory Management and Output:

     The memory allocated for the integer array and any dynamically allocated memory for reading input strings is properly managed, including reallocating memory as needed.
     The plusMinus function is called with the array and its count as arguments.
     The result of fraction calculations is printed to the standard output.

---

### c/Staircase

- [Solution](c/Staircase.c)

### - Explanation:

    1 Staircase Printing Function:

     The main function in this code is staircase, which takes an integer n as input.
     The function is designed to print a staircase pattern made of '#' characters with left-side alignment.
    
    2 Loop for Printing Staircase:

     Within the staircase function, there are two nested loops used to print the staircase:
     The outer loop (controlled by variable i) iterates from 1 to n, representing the height of the staircase.
     The first inner loop (controlled by variable j) prints spaces for the left-side padding before the '#' characters. The number of spaces decreases as i increases.
     The second inner loop (also controlled by variable j) prints the '#' characters to form the staircase steps.
      
      3 Input and Function Invocation:

     In the main function, an integer n is read from the standard input, representing the height of the staircase.
     The staircase function is then called with n as an argument, which prints the desired staircase pattern to the standard output.
     4 Input Handling and Memory Management:

     The code includes functions for reading input, trimming leading and trailing whitespace from strings, and parsing integers from strings.
     Proper memory management is implemented when reading and processing input to ensure the program runs smoothly and handles different input cases.

---

### c/Time Conversion

- [Solution](c/Time Conversion.c)

### - Explanation:

       1 Time Conversion Function:

     The main function in this code is timeConversion, which takes a string s representing a time in a 12-hour format (e.g., "07:05:45PM").
     The function is designed to convert this 12-hour time format into a 24-hour time format (e.g., "19:05:45").
     
     2 Parsing and Conversion Logic:

     The sscanf function is used to parse the input string s. It extracts the hours (hh), minutes (mm), seconds (ss), and meridian (either "AM" or "PM").
     Conditional statements are used to adjust the hour value (hh) based on the meridian:
     If it's "AM" and hh is 12, set hh to 0.
     If it's "PM" and hh is not 12, add 12 to hh to convert to 24-hour format.
     The snprintf function is then used to format the result as a string in the "HH:MM:SS" format, where hh, mm, and ss are zero-padded to two digits.
     
     3 Input and Output Handling:

     In the main function, the user inputs a string representing a time in 12-hour format, such as "07:05:45PM."
     The timeConversion function is called with this input, and the result is stored in the result variable.
     The converted time, stored in the result variable, is printed to the standard output.
     
     4 Memory Management:

     Memory for the result variable is dynamically allocated using malloc. The result is a string in the "HH:MM:SS" format.
     After printing the result, the code releases the allocated memory using free(result) to prevent memory leaks.
---
