//
//  main.cpp
//  LearningOpenCV
//
//  Created by YourtionGuo on 7/28/16.
//  Copyright © 2016 Yourtion. All rights reserved.
//

#include <iostream>
#include <highgui.h>

int main(int argc, const char * argv[]) {
    cvNamedWindow("Example2", CV_WINDOW_AUTOSIZE);
    CvCapture* capture = cvCreateFileCapture( argv[1] );
    IplImage* frame;
    while (1) {
        frame = cvQueryFrame( capture );
        if (!frame) break;
        cvShowImage( "Example2", frame );
        char c = cvWaitKey(33);
        if ( c == 27 ) break;
    }
    cvReleaseCapture( &capture );
    cvDestroyWindow( "Example2" );
}