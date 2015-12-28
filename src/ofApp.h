#pragma once

#include "ofMain.h"
#include "..\..\..\SpoutSDK\Spout.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void mousePressed(int x, int y, int button); // To bring up the spout selector
		
		void exit(); //to close up the shared texture

		SpoutReceiver *spoutreceiver;	// A receiver object
		bool bInitialized;				// Initialization result
		bool bMemoryShare;				// Texture share compatibility
		ofTexture myTexture;			// Texture used for texture share transfers
		unsigned int g_Width, g_Height;	// Global width and height
		char SenderName[256];			// Sender name used by a receiver			
};
