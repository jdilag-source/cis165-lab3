This lab I did use AI. I just couldn't figure out how to convert the minutes into hours the correct way. 
What I was getting wasn't the hours it took I was getting just the division part of the time.
below here is what I had worked on

#include <iostream>
//This assignment is to show the time it took to complete a level
int main()
{
    std::cout<<"Timing of level completion\n";
    int level1= 78;
    int level2= 144;
    std::cout<<"Time difference between levels...\n";
    int sub= level2-level1;
    int remaining= level1%level2;
    std::cout<<"Level 2 took this many minutes longer: "<<sub<<"\n";
    std::cout<<"The remainder of the calculation is "<<remaining<<"\n";
    
    
    return 0;
}

and below here is what I changed it to using AI's help

int main()
{
const int MINUTES_PER_HOUR = 60;

int level1 = 78;
int level1Hours = level1 / MINUTES_PER_HOUR;      // integer division gives whole hours
int level1Minutes = level1 % MINUTES_PER_HOUR;    // remainder gives leftover minutes

std::cout << "Level 1 time: " << level1Hours << " hour(s) and "
          << level1Minutes << " minute(s)\n";

int level2 = 144;
int level2Hours = level2 / MINUTES_PER_HOUR;      // integer division gives whole hours
int level2Minutes = level2 % MINUTES_PER_HOUR;    // remainder gives leftover minutes

std::cout << "Level 2 time: " << level2Hours << " hour(s) and "
          << level2Minutes << " minute(s)\n";
    
    return 0;
}

This was way different from what I was doing. 
What I learned from this was...
how to get hours which was to divide and to get the minutes I had to use the modulos. I knew I had to use modulos for this assignment but I was using it wrong.
I also learned that for printing it out I could do it the way AI did it. It was not just in one line.
Maybe they did it just to see it better? IDK, but I will play around with that. 
