#include <iostream>
#include "../include/ant.h"

using std::cout;
using std::cin;
using std::endl;

Ant_t::Ant_t():
	x_(0),
	y_(0)
{}

Ant_t::Ant_t(int x, int y)
{
	x_ = x;
	y_ = y;
}

int Ant_t::get_x(void)
{
	return x_;
}

int Ant_t::get_y(void) 
{
	return y_;
}

void Ant_t::set_x(int x)
{
	x_ = x;
}


void Ant_t::set_y(int y)
{
	y_ = y;
}

void Ant_t::datos_hormiga()
{
	cout << "La posicion x es " << x_ << " la posicion y es " << y_ << endl;
}

moves Ant_t::nextDirection(moves, char state)
{
	moves nextDirection = UP;

	if (state == 'x')
	{
		switch (movement)
		{
		case UP:
		nextDirection = 
			/* code */
			break;
		
		default:
			break;
		}
	}
}