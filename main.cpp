#include <iostream>
#include "przyjaciele.h"

using namespace std;

int main()
{
    Punkt pkt1;
    pkt1.wczytaj();

    Prostokat p1;
    p1.wczytaj();

    p1.sedzia(pkt1,p1);

    return 0;
}
