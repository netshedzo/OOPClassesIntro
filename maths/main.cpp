#include <iostream>
#include "maths.h"

using namespace std;

int main()
{
    //University of Johannesburg
    Maths ALesG01();
    Maths Eles401(50,32,"Mr Mazibuko",1,"Eles-401");
    Maths engi401(Eles401);
    engi401.setLecture("Colten");
    //ALesG01.printClass();
    Eles401.printClass();
    engi401.printClass();



    return 0;
}
