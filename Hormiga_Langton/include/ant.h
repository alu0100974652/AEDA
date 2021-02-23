#include <iostream>
//#include "world.h"

enum moves {UP, DOWN, LEFT, RIGHT};

class Ant_t
{
	private:

		moves movement;
		int x_, y_; 
		

	public:
		
		Ant_t();
		Ant_t(int x, int y);
		/*Ant_t(int x, int y);
		/*Ant_t(const ant_t &ant);
		/*~Ant_t();
		/**/
		int get_x(void);
		int get_y(void);
		/*char get_way(void);
		/*/
		void set_x(int x);
		void set_y(int y);
		/*void set_orientation(char way);
		/*
		/*
		/*void drch(void);
		/*void izq(void);
		/*void arrb(void);
		/*void abj(void); */

		void datos_hormiga();
	
};