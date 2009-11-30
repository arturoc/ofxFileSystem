#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"

#include "ofxFile.h"
#include "ofxDir.h"

class testApp : public ofBaseApp{

	public:

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased();


		ofxFile file;
		ofxDir  dir;
};

#endif

