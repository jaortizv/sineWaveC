#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI (3.141592654)
#endif

int main(int argc, char** argv)
{
	
	int i, nsamps;
	double samp;
	double fourpi = 4.0 * M_PI;
	double angleincr;
	
	FILE *f;
	
	f = fopen("sine.txt", "w+");
	
	nsamps=50;
	
	angleincr = fourpi / nsamps;
	
	for(i=0; i< nsamps; i++){
		
		samp = sin(angleincr *i);
		fprintf(f, "%.8lf\n", samp);
			
	}
	
	fclose(f);
	return 0;
	
}
