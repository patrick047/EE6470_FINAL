#ifndef FILTER_DEF_H_
#define FILTER_DEF_H_

#define CLOCK_PERIOD 10


#define MAX_IMAGE_BUFFER_LENTH 1024
#define THRESHOLD 90

// 3x3 mask parameters
//const int MASK_X = 3;
//const int MASK_Y = 3;
const int DNA_TRANS = 64;

// 5x5 mask parameters
const int MASK_X = 5;
const int MASK_Y = 5;

// Filter inner transport addresses
// Used between blocking_transport() & do_filter()
const int GaussianBlurFilter_R_ADDR = 0x00000000;
const int GaussianBlurFilter_RESULT_ADDR = 0x00000004;

const int GaussianBlurFilter_RS_R_ADDR   = 0x00000000;
const int GaussianBlurFilter_RS_W_WIDTH  = 0x00000004;
const int GaussianBlurFilter_RS_W_HEIGHT = 0x00000008;
const int GaussianBlurFilter_RS_W_DATA   = 0x0000000C;
const int GaussianBlurFilter_RS_RESULT_ADDR = 0x00800000;


union word {
  int sint;
  unsigned int uint;
  unsigned char uc[4];
};
/*
// filter mask
const int filter[MASK_X][MASK_Y] = {
    {1,2,1},
    {2,4,2},
    {1,2,1}
};
const int factor = 16;
*/
// 5x5 filter mask
const int filter[MASK_X][MASK_Y] ={
  {1,  4,  6,  4,  1},
  {4, 16, 24, 16,  4},
  {6, 24, 36, 24,  6},
  {4, 16, 24, 16,  4},
  {1,  4,  6,  4,  1}
};
const int factor = 256;

#endif
