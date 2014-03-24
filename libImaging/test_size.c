#include "Imaging.h"

int main()
{
	//ImagingNew("L", 800, 600);
	Imaging img = ImagingOpenPPM("/Users/daniel/Downloads/MARBLES.PPM");
	Imaging img2 = ImagingNew("RGB", img->xsize * 2.2, img->ysize * 2.2);
	ImagingResize(img2, img, 0);
	ImagingSavePPM(img2, "/Users/daniel/Downloads/MARBLES_1.PPM");
	return 0;
}