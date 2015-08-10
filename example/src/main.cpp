#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGLFWWindow.h"

//#define ENABLE_MULTIDISPLAY_FULLSCREEN


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// main
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
#ifdef ENABLE_MULTIDISPLAY_FULLSCREEN
    ofAppGLFWWindow window;
    
    // enable multi display fullscreen
    window.setMultiDisplayFullscreen( true );
    
    // setup the GL context
    ofSetupOpenGL( &window, 1152, 720, OF_WINDOW );
    
#else
    // setup the GL context
    ofSetupOpenGL( 1152, 720, OF_WINDOW );
#endif
    
    // this kicks off the running of my app
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    ofRunApp( new ofApp() );
}
