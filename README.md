# Day1-advent
This is the day1 advent of code problem..


### README.txt for Integer Comparison Program

---

#### **Program Overview**

This C program reads a list of integers from a text file (`data.txt`), compares consecutive integers, and counts how many times an integer is smaller than the next one in the list. The result (count of such comparisons) is printed to the console.

---

#### **How It Works**

1. **Input**: The program expects a text file (`data.txt`) containing a list of integers. Each integer should be separated by a whitespace (e.g., space, newline).
   
2. **File Reading**: 
   - The program opens the file `data.txt` in text mode (`"r"`).
   - It reads the integers one by one and stores them in an array (`measure[]`).

3. **Comparison Logic**: 
   - Once all integers are read, the program compares each integer with the next one in the list.
   - It counts how many times an integer is smaller than the next one.

4. **Output**: The final count of comparisons where an integer is smaller than the next is printed to the console.

---

#### **Input Format**

- **data.txt** should contain integers (one per line or space-separated) to be compared. Example:


