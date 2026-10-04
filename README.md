# CIS 165 Lab 3

**Course section:** CIS-165-W099

## Initial plans 

**diamond.cpp:** The diamond has 7 lines. I will use one cout line for each
row. The stars go 1, 3, 5, 7, 5, 3, 1, and each row has  spaces to
center it (3, 2, 1, 0, 1, 2, 3). No loops or input.

**game_time.cpp:** I need Level 1 = 78 minutes and Level 2 = 144 minutes. For
each level I'll divide by 60 to get hours and use % 60 to get the leftover
minutes. Then I'll subtract Level 1 from Level 2 to get the difference in
minutes and convert that the same way. I'll store every result in a variable
and print each one with a label.



## Test table

| Program/test | Values or pattern checked | Expected result before running | Actual output | Match or correction |
|---|---|---|---|---|
| diamond.cpp | Seven required lines | Stars 1, 3, 5, 7, 5, 3, 1 with 3, 2, 1, 0, 1, 2, 3 leading spaces | Stars 1, 3, 5, 7, 5, 3, 1 with 3, 2, 1, 0, 1, 2, 3 leading spaces | Match |
| game_time.cpp, assigned | 78 and 144 minutes | Level 1: 78 / 60 = 1 hr, 78 % 60 = 18 min. Level 2: 144 / 60 = 2 hr, 144 % 60 = 24 min. Difference: 144 - 78 = 66 min = 1 hr 6 min | Level 1 time: 1 hours 18 minutes / Level 2 time: 2 hours 24 minutes / Level 2 took longer by: 1 hours 6 minutes | Match |
| game_time.cpp, changed | 95 and 250 minutes | Level 1: 95 / 60 = 1 hr, 95 % 60 = 35 min. Level 2: 250 / 60 = 4 hr, 250 % 60 = 10 min. Difference: 250 - 95 = 155 min = 2 hr 35 min | Level 1 time: 1 hours 35 minutes / Level 2 time: 4 hours 10 minutes / Level 2 took longer by: 2 hours 35 minutes | Match |



After testing, I changed game_time.cpp back to the assigned values (78 and 144)
and re ran both programs. diamond.cpp printed the same seven lines, and
game_time.cpp printed 1 hour 18 minutes, 2 hours 24 minutes, and a difference
of 1 hour 6 minutes. The final source files use the assigned values.

## Code explanations

**diamond.cpp:** Each row of the diamond is its own cout line, and each line
is a string with the exact number of leading spaces and stars. The spaces are
part of the string, so " *****" prints one space and then five stars. The top
half goes 1, 3, 5, 7 stars and the bottom half goes back down 5, 3, 1.
Spaces are hard to see, so I counted the characters in each string and checked
that the stars lined up in a column in the output.


**game_time.cpp:** When you do Integer division it gets rid of the decimal part, so
78 / 60 gives me 1, which is the number of whole hours. The remainder operator %
gives what is left over, so 78 % 60 gives 18, which are the leftover minutes.
Using both together turns total minutes into hours and minutes.

For the assigned values: level_one_minutes is 78, so level_one_hours is 1 and
level_one_leftover is 18. level_two_minutes is 144, so level_two_hours is 2 and
level_two_leftover is 24. Then difference_minutes = 144 - 78 = 66, so
difference_hours is 1 and difference_leftover is 6. I subtracted in minutes
first and then converted. If I had subtracted hours and minutes separately it can go wrong.

The assignment wants calculations stored in variables before cout because it
keeps the math separate from the printing. That makes the code easier to read
and check.
