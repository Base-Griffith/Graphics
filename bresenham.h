#ifndef bresenham_h
#define bresenham_h


///Draws a line based on Bresenhams line drawing algorithm.
///
///Draws a line from point (**x1**,**y1**) to point (**x2**,**y2**);
///
///@param x1 x coordinate of the first point.
///@param y1 y coordinate of the first point.
///@param x2 x coordinate of the second point.
///@param y2 x coordinate of the second point.
///
///Click here to go back to the page with the list of functions >> @ref Functions
void bres_line(int x1,int y1,int x2,int y2);//Line drawing with (x1,y1),(x2,y2)

///Draws a circle based on Bresenhams circle drawing algorithm.
///
///Draws 1/8th of the circle with centre (**x0**,**y0**) and radius **r**. The rest of it is
///drawn by circle_points().
///
///@param x0 x coordinate of the centre of the circle.
///@param y0 y coordinate of the centre of the circle.
///@param r The radius of the circle. 
///
///Click here to go back to the page with the list of functions >> @ref Functions
void bres_circle(int x0,int y0,int r);//circle drawing with (x0,y0,r)

///Illuminates the point (**x**,**y**) on the screen.
///
///@param x x coordinate of the point.
///@param y y coordinate of the point.
///
///Click here to go back to the page with the list of functions >> @ref Functions
void draw_pixel(int x, int y);
///Works in conjuction with bres_line() to draw a circle.
///
///Plots the other 7 points that are symmetric to the point (**x**,**y**) on the circle with centre at (**x0**,**y0**).
///@param x x coordinate of the point
///@param y y coordinate of the point
///@param x0 x coordinate of the centre of the circle.
///@param y0 y coordinate of the centre of the circle.
///
///Click here to go back to the page with the list of functions >> @ref Functions
void circle_points(int x,int y,int x0,int y0);




#endif
