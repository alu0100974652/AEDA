#include "../include/world.h"

World_t::World_t(int m, int n)
{
    m_ = m;
    n_ = n;
    v_.resize(m_ * n_);    
}

World_t::~World_t()
{}

void World_t::resize(int m, int n)
{
  assert(m > 0 && n > 0);
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}

int World_t::get_m() 
{
  return m_;
}

int World_t::get_n() 
{
  return n_;
}

int World_t::pos(int i, int j)
{
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return (i - 1) * get_n() + (j - 1);
}

char World_t::at(int i, int j)
{
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}

void World_t::reset_matrix()
{
  for (int i = 1; i <= get_m(); ++i) {
    for (int j = 1; j <= get_n(); ++j)
      v_.at(pos(i,j)) = '#';
  }
}

void World_t::change_color(int i, int j, char c)
{
  v_.at(pos(i,j)) = c;
}

void World_t::write(ostream& os)
{
  os << get_m() << "x" << get_n() << endl;
  for (int i = 1; i <= get_m(); ++i) {
    for (int j = 1; j <= get_n(); ++j)
      os << at(i, j) << " ";
    os << endl;
  }
  os << endl;
}
