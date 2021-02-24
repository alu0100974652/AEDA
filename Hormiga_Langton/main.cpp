#include <iostream>
#include "include/world.h"


int main(void)
{
	World_t mu(3,3);

    mu.reset_matrix();
    mu.change_color(2,2,'c');
    mu.change_color(1,1,'f');
    mu.write();
}