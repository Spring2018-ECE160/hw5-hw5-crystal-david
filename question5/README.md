## Question 5

(K&R Exercise 5-8) There is no error checking in <code>day_of_year</code> or <code>month_day</code>. Remedy this defect and verify that all of the cases are covered with examples.

Compile Steps:
gcc question5.c -o question5
Output:
enter the month:23
enter the day:34
enter the year34
enter the yearday34
 The day of the year will be -1Program ended with exit code: 0

enter the month:12
enter the day:5
enter the year1998
enter the yearday34
 The day of the year will be 339Program ended with exit code: 0

enter the month:1
enter the day:23
enter the year1555
enter the yearday23
 The day of the year will be -1Program ended with exit code: 0
