#include "grid.h"
#include "point.h"

int main()
{
  Grid grid();

  // Point p(10,10, '?');
  grid.set(0,0, '1');
  grid.set(10,20, '2');

  p.draw(grid);

  grid.print();
}
