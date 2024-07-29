#include <X11/Xlib.h>
#include <cstdio>

int main(){
	Display *d=XOpenDisplay(NULL);
	if(d==NULL)
	{
		printf("Display Error");
		return -1;
	}
	
	return 0;
}
