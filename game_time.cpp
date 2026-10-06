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
//The results were... 
//Level 1 time: 1 hour(s) and 18 minute(s)
//Level 2 time: 2 hour(s) and 24 minute(s)
