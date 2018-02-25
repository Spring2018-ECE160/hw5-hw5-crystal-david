## Question 4

(K&R Exercise 5-5) Write a version of the library function <code>strncpy</code>, which operate on at most the first n characters of their argument strings. For example, <code>strncpy(s,t,n)</code> copies at most n characters of t to s. **Be sure to use pointers**. Verify that your function works with at least 3 examples.

Compile Steps:
gcc question4.c -o question4
Output:
Enter your s1:asd
Original s1: asd
Enter your s2:sdf
Original s2: sdf
New s1: asd
New s2: asd
Program ended with exit code: 0

Enter your s1:aaaa
Original s1: aaaa
Enter your s2:bbbb
Original s2: bbbb
New s1: aaaa
New s2: aaaa
Program ended with exit code: 0

Enter your s1:eeffff
Original s1: eeffff
Enter your s2:sssfffdf
Original s2: sssfffdf
New s1: eeffff
New s2: eeffffdf
Program ended with exit code: 0
