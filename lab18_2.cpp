#include<iostream>
#include<cmath>
#include<algorithm> 
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *a, Rect *b){
    double x = min((a->x+a->w),(b->x+b->w))-max(a->x,b->x);
    double y = min(a->y,b->y)-max((a->y-a->h),(b->y-b->h)); 
    if(x<=0 || y<=0) return 0;
    return x*y;

}