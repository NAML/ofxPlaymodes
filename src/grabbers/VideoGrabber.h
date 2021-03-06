/*
 * AudioFrame.h
 *
 *  Created on: 09-oct-2008
 *      Author: arturo castro
 */


#ifndef VIDEOGRABBER_H_INCLUDED
#define VIDEOGRABBER_H_INCLUDED

#include "VideoSource.h"
#include "ofMain.h"


namespace ofxPm{
class VideoGrabber: public VideoSource, public ofVideoGrabber{
public:
    VideoGrabber();
    virtual ~VideoGrabber();

    bool initGrabber(int w, int h);

	VideoFrame * getNextVideoFrame();
    int getFps();

    void update();




private:
    void newFrame(ofPixels & frame);
};
}

#endif // VIDEOGRABBER_H_INCLUDED
