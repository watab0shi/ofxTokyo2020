#include "ofApp.h"


////////////////////////////////////////
// setup
////////////////////////////////////////
void ofApp::setup()
{
    //---------------------------------------- ofxTokyo2020
    fontSize = 60.0;
    
    // set font size
    ofxTokyo2020::setFontSize( fontSize );
    
    // set letter spacing
    ofxTokyo2020::setLetterSpacing( fontSize / 3 );
    
    // set line height
    ofxTokyo2020::setLineHeight( ( fontSize / 3 ) * 4 );
    
    str           = "ofxtokyo2020";
    bCell         = true;
    bWaitPrevious = false;
    
    font.setString( str, fontSize, ofGetHeight() * 0.5, ( bCell ) ? ANIMATION_TYPE_CELL: ANIMATION_TYPE_EASING, bWaitPrevious );
    
    
    //---------------------------------------- application settings
    ofSetVerticalSync( true );
    ofEnableAntiAliasing();
    ofSetCircleResolution( 48 );
    
    ofBackground( 255 );
}


////////////////////////////////////////
// update
////////////////////////////////////////
void ofApp::update()
{
    font.update();
}


////////////////////////////////////////
// draw
////////////////////////////////////////
void ofApp::draw()
{
    font.draw();
    
    stringstream ss;
    ss
    << "'r' ( restart animation )"
    << endl
    << "'t' ( animationMode )           : " << ofToString( bCell )
    << endl
    << "'w' ( wait previous character ) : " << ofToString( bWaitPrevious );
    
    ofSetColor( 0 );
    ofDrawBitmapString( ss.str(), 20, 20 );
}


////////////////////////////////////////
// keyPressed
////////////////////////////////////////
void ofApp::keyPressed( int key )
{
    //---------------------------------------- ofxTokyo2020
    if( key == 'r' )
    {
        font.reStartAnimation();
    }
    
    if( key == 't' )
    {
        bCell = !bCell;
        
        font.setString( str, fontSize, ofGetHeight() * 0.5, ( bCell ) ? ANIMATION_TYPE_CELL: ANIMATION_TYPE_EASING, bWaitPrevious );
    }
    
    if( key == 'w' )
    {
        bWaitPrevious = !bWaitPrevious;
        
        font.setString( str, fontSize, ofGetHeight() * 0.5, ( bCell ) ? ANIMATION_TYPE_CELL: ANIMATION_TYPE_EASING, bWaitPrevious );
    }
    
    
    //---------------------------------------- fullscreen
    if( key == 'f' )
    {
        ofToggleFullscreen();
    }
}


////////////////////////////////////////
// keyReleased
////////////////////////////////////////
void ofApp::keyReleased( int key )
{
    
}


////////////////////////////////////////
// mouseMoved
////////////////////////////////////////
void ofApp::mouseMoved( int x, int y )
{
    
}


////////////////////////////////////////
// mouseDragged
////////////////////////////////////////
void ofApp::mouseDragged( int x, int y, int button )
{
    
}


////////////////////////////////////////
// mousePressed
////////////////////////////////////////
void ofApp::mousePressed( int x, int y, int button )
{
    
}


////////////////////////////////////////
// mouseReleased
////////////////////////////////////////
void ofApp::mouseReleased( int x, int y, int button )
{
    
}


////////////////////////////////////////
// windowResized
////////////////////////////////////////
void ofApp::windowResized( int _w, int _h )
{
    
}


////////////////////////////////////////
// exit
////////////////////////////////////////
void ofApp::exit()
{
    
}


