#pragma once

#include "ofMain.h"



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// baseParticle
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class baseParticle
{
protected:
    ofVec2f pos;
    ofVec2f t_pos;
    ofVec2f b_pos;
    
    float   rot;
    float   t_rot;
    
    float   radius;
    float   t_radius;
    float   b_radius;
    
    float   easing;
    
    bool    bMove;
    float   startTime;
    
    bool    dead;
    
    
public:
    ////////////////////////////////////////
    // baseParticle
    ////////////////////////////////////////
    baseParticle()
    {
        pos.set( 0.0, 0.0 );
        t_pos.set( 0.0, 0.0 );
        b_pos.set( 0.0, 0.0 );
        
        rot       = 0.0;
        t_rot     = 0.0;
        
        radius    = 1.0;
        t_radius  = 1.0;
        b_radius  = 1.0;
        
        bMove     = false;
        startTime = ofGetElapsedTimef();
        
        dead      = false;
    }
    
    ////////////////////////////////////////
    // ~baseParticle
    ////////////////////////////////////////
    ~baseParticle()
    {
    }
    
    
    ////////////////////////////////////////
    // setPosition
    ////////////////////////////////////////
    void setPosition( float _x, float _y )
    {
        pos.set( _x, _y );
        b_pos.set( _x, _y );
        setTargetPosition( _x, _y );
    }
    
    void setPosition( ofVec2f _pos )
    {
        setPosition( _pos.x, _pos.y );
    }
    
    
    ////////////////////////////////////////
    // setTargetPosition
    ////////////////////////////////////////
    void setTargetPosition( float _x, float _y )
    {
        t_pos.set( _x, _y );
    }
    
    void setTargetPosition( ofVec2f _pos )
    {
        setTargetPosition( _pos.x, _pos.y );
    }
    
    
    ////////////////////////////////////////
    // setRotation
    ////////////////////////////////////////
    void setRotation( float _rot )
    {
        rot = _rot;
        setTargetRotation( rot );
    }
    
    
    ////////////////////////////////////////
    // setTargetRotation
    ////////////////////////////////////////
    void setTargetRotation( float _rot )
    {
        t_rot = _rot;
    }
    
    
    ////////////////////////////////////////
    // setRadius
    ////////////////////////////////////////
    void setRadius( float _r )
    {
        radius   = _r;
        t_radius = _r;
        b_radius = _r;
    }
    
    
    ////////////////////////////////////////
    // setTargetRadius
    ////////////////////////////////////////
    void setTargetRadius( float _r )
    {
        t_radius = _r;
    }
    
    
    ////////////////////////////////////////
    // startAnimation
    ////////////////////////////////////////
    void startAnimation()
    {
        bMove  = true;
        pos    = b_pos;
        radius = b_radius;
        
        startTime = ofGetElapsedTimef();
    }
    
    
    ////////////////////////////////////////
    // stopAnimation
    ////////////////////////////////////////
    void stopAnimation()
    {
        bMove = false;
    }
    
    
    ////////////////////////////////////////
    // getPosition
    ////////////////////////////////////////
    ofVec3f getPosition()
    {
        return pos;
    }
    
    
    ////////////////////////////////////////
    // getRadius
    ////////////////////////////////////////
    float getRadius()
    {
        return radius;
    }
    
    
    ////////////////////////////////////////
    // isMoving
    ////////////////////////////////////////
    bool isMoving()
    {
        return bMove;
    }
    
    
    ////////////////////////////////////////
    // isDead
    ////////////////////////////////////////
    bool isDead()
    {
        return dead;
    }
    
    
    ////////////////////////////////////////
    // InOutQuint
    ////////////////////////////////////////
    double InOutQuint( double t, double totaltime, double max = 1.0, double min = 0.0 )
    {
        max -= min;
        t   /= totaltime / 2;
        
        if( t < 1 )
        {
            return ( max / 2 ) * ( t * t * t * t * t ) + min;
        }
        
        t -= 2;
        return ( max / 2 ) * ( ( t * t * t * t * t ) + 2 ) + min;
    }
    
    
    ////////////////////////////////////////
    // update
    ////////////////////////////////////////
    void update()
    {
        if( bMove )
        {
            float t = ( ofGetElapsedTimef() - startTime );
            float e = CLAMP( InOutQuint( t, 1.0 ), 0.0, 1.0 );
            
            pos    += ( t_pos - pos ) * e;
            rot    += ( t_rot - rot ) * e;
            radius += ( t_radius - radius ) * e;
            
            if( e >= 1.0 )
            {
                stopAnimation();
            }
        }
    }
};



#define NUM_BLOCKS     9


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// blockType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum blockType
{
    BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT,
    BLOCK_TYPE_CIRCLE,
    BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_ARC_SILVER,
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Block
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Block : public baseParticle
{
private:
    static const ofColor black;
    static const ofColor red;
    static const ofColor gold;
    static const ofColor silver;
    
    blockType type;
    blockType t_type;
    
    
public:
    ////////////////////////////////////////
    // Block
    ////////////////////////////////////////
    Block()
    {
        type = BLOCK_TYPE_NONE;
    }
    
    ////////////////////////////////////////
    // ~Block
    ////////////////////////////////////////
    ~Block()
    {
    }
    
    
    ////////////////////////////////////////
    // setType
    ////////////////////////////////////////
    void setType( blockType _type )
    {
        type   = _type;
        t_type = _type;
    }
    
    
    ////////////////////////////////////////
    // setTargetType
    ////////////////////////////////////////
    void setTargetType( blockType _type )
    {
        t_type = _type;
    }
    
    
    ////////////////////////////////////////
    // next
    ////////////////////////////////////////
    void nextType()
    {
        type = ( blockType )( int( type + 1 ) % 5 );
        rot  = int( ofRandom( 4 ) ) * 90;
    }
    
    
    ////////////////////////////////////////
    // isArribed
    ////////////////////////////////////////
    bool isArrivedType()
    {
        return ( t_type == type ) ? true: false;
    }
    
    
    ////////////////////////////////////////
    // nextRotation
    ////////////////////////////////////////
    void nextRotation()
    {
        rot = ( ( int )rot + 90 ) % 360;
    }
    
    
    ////////////////////////////////////////
    // isArribed
    ////////////////////////////////////////
    bool isArrivedRotation()
    {
        return ( t_rot == rot ) ? true: false;
    }
    
    
    ////////////////////////////////////////
    // updateCell
    ////////////////////////////////////////
    void updateCell()
    {
        if( bMove )
        {
            if( ( ofGetFrameNum() % 5 ) == 0 )
            {
                if( !isArrivedType() )
                {
                    nextType();
                }
                else
                {
                    if( !isArrivedRotation() )
                    {
                        nextRotation();
                    }
                    else
                    {
                        stopAnimation();
                    }
                }
            }
        }
    }
    
    
    
    ////////////////////////////////////////
    // draw
    ////////////////////////////////////////
    void draw()
    {
        ofPushMatrix();
        {
            ofTranslate( pos );
            ofRotate( rot );
            
            ofFill();
            
            if( type == BLOCK_TYPE_NONE )
            {
                
            }
            else if( type == BLOCK_TYPE_RECT )
            {
                ofSetColor( black );
                ofSetRectMode( OF_RECTMODE_CENTER );
                ofRect( 0, 0, ( radius * 2 ), ( radius * 2 ) );
                ofSetRectMode( OF_RECTMODE_CORNER );
            }
            else if( type == BLOCK_TYPE_CIRCLE )
            {
                ofSetColor( red );
                ofCircle( 0, 0, radius );
                
            }
            else if( type == BLOCK_TYPE_ARC_GOLD )
            {
                ofSetColor( gold );
                
                drawArc( radius );
            }
            else if( type == BLOCK_TYPE_ARC_SILVER )
            {
                ofSetColor( silver );
                
                ofPushMatrix();
                {
                    ofRotate( 180 );
                    drawArc( radius );
                }
                ofPopMatrix();
            }
        }
        ofPopMatrix();
    }
    
    
    ////////////////////////////////////////
    // drawArc
    ////////////////////////////////////////
    void drawArc( float _r )
    {
        ofVec2f topLeft    = ofVec2f( -_r, -_r );
        ofVec2f topRight   = ofVec2f(  _r, -_r );
        ofVec2f bottomLeft = ofVec2f( -_r,  _r );
        ofVec2f center     = ofVec2f( _r, _r ) * 2;
        
        ofVec2f diff1 = ( bottomLeft - center );
        ofVec2f diff2 = ( topRight   - center );
        
        float arcR = diff1.length();
        float a1   = atan2( diff1.y, diff1.x );
        float a2   = atan2( diff2.y, diff2.x );
        
        
        int   res   = 32;
        float a     = ( a2 - a1 ) / res;
        float aOfst = ( ( HALF_PI - ( a2 - a1 ) ) / 2 ) + PI;
        
        ofBeginShape();
        {
            ofVertex( -_r, -_r );
            
            for( int i = 0; i <= res; ++i )
            {
                float rad = aOfst + ( i * a );
                float x   = center.x + ( cos( rad ) * arcR );
                float y   = center.y + ( sin( rad ) * arcR );
                
                ofVertex( x, y );
            }
        }
        ofEndShape( true );
    }
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// animationType
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
enum animationType
{
    ANIMATION_TYPE_EASING,
    ANIMATION_TYPE_CELL,
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// BlockMatrix
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class BlockMatrix
{
private:
    char          letter;
    Block         blocks[ NUM_BLOCKS ];
    animationType aType;
    
    
public:
    BlockMatrix();
    BlockMatrix( char _c, float _x, float _y, float _size, animationType _aType );
    
    ~BlockMatrix();
    
    void randomizeType();
    void randomizeRotation();
    void startAnimation();
    
    bool isMoving();
    
    void update();
    void draw();
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ofxTokyo2020
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class ofxTokyo2020
{
private:
    static float fontSize;
    static float letterSpacing;
    static float lineHeight;
    static void  setupCharacterMap();
    
    
    vector< BlockMatrix > bms;
    vector< bool >        lastMovingStates;
    bool                  bWaitPrevious;
    
    
public:
    static map< char, int > charMap;
    
    ofxTokyo2020();
    ~ofxTokyo2020();
    
    static void setFontSize( float _fontSize );
    static void setLetterSpacing( float _letterSpacing );
    static void setLineHeight( float _lineHeight );
    
    void setCharacter( char _c, float _x, float _y, animationType _aType );
    void setString( string _s, float _x, float _y, animationType _aType, bool _bWaitPreviousChar = false );
    
    bool isMoving();
    void reStartAnimation();
    
    void update();
    void draw();
};

