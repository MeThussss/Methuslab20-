#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a,Rect b){
	double width = (min((a.x)+a.w,(b.x)+b.w) - max(a.x,b.x));
	double hight = (min(a.y,b.y) - max((a.y)-a.h,(b.y)-b.h));
	if(width*hight > 0){
		return width*hight; 
	}else{
		return 0; 
	}
}
int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);
}
