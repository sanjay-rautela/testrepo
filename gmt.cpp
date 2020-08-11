#include <ctime>
#include <iostream>

int main(void)
{
    time_t rawtime;
    struct tm * ptm;
    time ( &rawtime );
    ptm = gmtime ( &rawtime );

    //const char *tm_zone; /*Timezone abbreviation*/
    std::cout << ptm->tm_zone;
    //output: "GMT" in my machine.

    return 0;
}