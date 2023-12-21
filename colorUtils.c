
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}

//min function

int min(int a,int b, int c)
{
if(a<=b && a<=c)
{
  return a;
}
else if(b<=a &&b<=c)
{
return b;
}
else
{
  return c;
}
}

// toGrayScaleLightness function

float toGrayScaleLightness(int red,int green , int blue)
{
  float greyScaleValue = (max(red, green, blue) + min(red, green, blue))/2;
  return greyScaleValue;
}

//toGrayScaleLuminosity

float toGrayScaleLuminosity(int red , int green , int blue)
{
float greyScaleValue= (0.21 * red)+ (0.72 * green) + (0.07 * blue);
return greyScaleValue;
}

//tosepiaRed function
float toSepiaRed(int red , int green , int blue)
{
  float sepiaRed= (0.393 *red)+ (0.769* green) +(0.189 * blue);
return sepiaRed;
}

//tosepiaGreen
float toSepiaGreen(int red , int green , int blue)
{
  float sepiaGreen= (0.349 *red)+ (0.686 * green) +(0.168 * blue);
return sepiaGreen;
}


