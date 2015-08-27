#include <iostream>
using namespace std;

void print_bits(const char *str, unsigned int num)
{
    cout << str << " = " << num << "\t= ";

    for (int i = sizeof(unsigned int) * 8 -1; i >= 0; i--)
        cout << ((num & (1 << i)) ? 1 : 0);
    cout << endl;


}

// assign powers of 2 so that each element has only one bit set
// for example:   MONDAY = 00001, TUESDAY == 00010, WEDNESDAY == 00100, etc
enum Days {MONDAY = 1,
           TUESDAY = 2,
           WEDNESDAY = 4,
           THURSDAY = 8,
           FRIDAY = 16,
           SATURDAY = 32,
           SUNDAY = 64
          };

int main()
{


    print_bits("MONDAY   ", MONDAY);
    print_bits("TUESDAY  ", TUESDAY);
    print_bits("WEDNESDAY", WEDNESDAY);
    print_bits("THURSDAY ", THURSDAY);
    print_bits("FRIDAY   ", FRIDAY);
    print_bits("SATURDAY ", SATURDAY);
    print_bits("SUNDAY   ", SUNDAY);

    Days my_330 = Days(TUESDAY | THURSDAY);
    Days my_340 = Days(MONDAY | WEDNESDAY | FRIDAY);
    Days my_630 = Days(TUESDAY);
    Days my_640 = Days(TUESDAY | THURSDAY);
    Days my_work = Days(my_330 | my_340 | my_630 | my_640);

    print_bits("my_330", my_330);
    print_bits("my_340", my_340);
    print_bits("my_630", my_630);
    print_bits("my_640", my_640);
    print_bits("my_work", my_work);
}
