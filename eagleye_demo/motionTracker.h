#ifndef MOTIONTRACKER_H_
#define MOTIONTRACKER_H_

#include <time.h>
#include <cv.h>
#include <highgui.h>

int motionTracker(IplImage* img, IplImage* dst);
void update_mhi(IplImage* img, IplImage* dst, int diff_threshold);

#endif /* MOTIONTRACKER_H_ */
