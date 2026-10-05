/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int MINUTES_PER_HOUR = 60;

    int level_one_minutes = 78;
    int level_two_minutes = 144;

    int level_one_hours = level_one_minutes / MINUTES_PER_HOUR;
    int level_one_leftover = level_one_minutes % MINUTES_PER_HOUR;

    int level_two_hours = level_two_minutes / MINUTES_PER_HOUR;
    int level_two_leftover = level_two_minutes % MINUTES_PER_HOUR;

    int difference_minutes = level_two_minutes - level_one_minutes;
    int difference_hours = difference_minutes / MINUTES_PER_HOUR;
    int difference_leftover = difference_minutes % MINUTES_PER_HOUR;

    cout << "Level 1 time: " << level_one_hours << " hours "
         << level_one_leftover << " minutes" << endl;
    cout << "Level 2 time: " << level_two_hours << " hours "
         << level_two_leftover << " minutes" << endl;
    cout << "Level 2 took longer by: " << difference_hours << " hours "
         << difference_leftover << " minutes" << endl;

    return 0;
}