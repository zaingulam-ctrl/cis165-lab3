# AI Reflection

**Tools used:** I used ChatGPT to help me check my plan for game_time.cpp and to
explain how % works with integer division.

**One decision:** I asked, "How do I convert 144 minutes to hours and minutes
using only integer division and the remainder operator?" It suggested dividing
by 60 for hours and using % 60 for leftover minutes. I did that. For the
difference, I decided to subtract the total minutes first and then convert,
instead of subtracting hours and minutes separately, because that avoids having
to borrow an hour when the leftover minutes don't line up.

**Verification:** I compiled both programs and got no warnings. I calculated the answers by hand before running them (1 hr 18 min,
2 hr 24 min, and 1 hr 6 min for the assigned values and the outputs matched. For the
diamond, I ran it  to see the end of each line, which showed
there were no extra  spaces.

**Learning:** I can now explain how  % work together to split minutes into
hours and leftover minutes, and how to build the diamond using only cout lines.
I still need to practice getting the spacing right on the first try and
choosing good variable names without second-guessing.
