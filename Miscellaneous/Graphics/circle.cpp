#include "msoftcon.h"
#include "msoftcon.cpp"

struct circle {
	int x, y, radius ;
	color fillColor ;
	fstyle fillStyle ;
};

void circ_draw( circle c ){
	set_color(c.fillColor) ;
	set_fill_style(c.fillStyle) ;
	draw_circle(c.x, c.y, c.radius) ;
}

int main(){
	init_graphics() ;
	circle c1 = {15, 7, 5, cBLUE, X_FILL } ;
	circ_draw(c1) ;
	set_cursor_pos(1, 25) ;
	return 0 ;
}
