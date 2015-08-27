#include "grid.h"
#include "square.h"
#include "point.h"
#include "triangle.h"
#include "circle.h"


int main()
{
  Grid grid;
  //Grid grid1;
  Square s(4, 0, 4);
  s.draw(grid);

   Point p(10,10, '?');
   p.draw(grid);

   Triangle t(5,6);
   t.draw(grid);
   
   Circle c(12, 14);
   c.draw(grid);
  //grid.set(0,0, '*');
  //grid.set(10,20, '*');

  //square.draw(grid1);

  grid.print();
}
