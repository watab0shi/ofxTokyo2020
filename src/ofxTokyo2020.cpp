
#include "ofxTokyo2020.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Block
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const ofColor Block::black  = ofColor(  55,  55,  55 );
const ofColor Block::red    = ofColor( 229,   0,  20 );
const ofColor Block::gold   = ofColor( 181, 145,  71 );
const ofColor Block::silver = ofColor( 180, 180, 180 );



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// charData
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct charData
{
    const int* tm;
    const int* rm;
    
    charData()
    {
    }
    
    charData( const int* _tm, const int* _rm )
    {
        tm = _tm;
        rm = _rm;
    }
};


// characterData ---------- A
const int tm_a[] =
{
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_RECT,   BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_RECT,       BLOCK_TYPE_NONE,   BLOCK_TYPE_RECT
};

const int rm_a[] =
{
    2,0,3,
    2,0,3,
    0,0,0
};

charData cd_a = charData( tm_a, rm_a );


// characterData ---------- B
const int tm_b[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE
};

const int rm_b[] =
{
    0,1,0,
    0,3,0,
    0,0,0
};

charData cd_b = charData( tm_b, rm_b );


// characterData ---------- C
const int tm_c[] =
{
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_RECT,       BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER
};

const int rm_c[] =
{
    0,0,1,
    0,0,0,
    1,0,0
};

charData cd_c = charData( tm_c, rm_c );


// characterData ---------- D
const int tm_d[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,       BLOCK_TYPE_RECT,
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_ARC_SILVER
};

const int rm_d[] =
{
    0,3,3,
    0,0,0,
    0,2,2
};

charData cd_d = charData( tm_d, rm_d );


// characterData ---------- E
const int tm_e[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE,     BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE
};

const int rm_e[] =
{
    0,1,0,
    0,0,0,
    0,0,0
};

charData cd_e = charData( tm_e, rm_e );


// characterData ---------- F
const int tm_f[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE,     BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,       BLOCK_TYPE_NONE
};

const int rm_f[] =
{
    0,3,0,
    0,0,0,
    0,0,0
};

charData cd_f = charData( tm_f, rm_f );


// characterData ---------- G
const int tm_g[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,     BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE,   BLOCK_TYPE_ARC_GOLD
};

const int rm_g[] =
{
    0,0,0,
    0,0,3,
    0,0,2
};

charData cd_g = charData( tm_g, rm_g );


// characterData ---------- H
const int tm_h[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,   BLOCK_TYPE_RECT,
    BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_RECT,
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,   BLOCK_TYPE_RECT
};

const int rm_h[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_h = charData( tm_h, rm_h );


// characterData ---------- I
const int tm_i[] =
{
    BLOCK_TYPE_NONE, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_RECT,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_RECT,   BLOCK_TYPE_NONE
};

const int rm_i[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_i = charData( tm_i, rm_i );


// characterData ---------- J
const int tm_j[] =
{
    BLOCK_TYPE_NONE,       BLOCK_TYPE_NONE,   BLOCK_TYPE_RECT,
    BLOCK_TYPE_NONE,       BLOCK_TYPE_NONE,   BLOCK_TYPE_RECT,
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_ARC_GOLD
};

const int rm_j[] =
{
    0,0,0,
    0,0,0,
    3,0,2
};

charData cd_j = charData( tm_j, rm_j );


// characterData ---------- K
const int tm_k[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,   BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,   BLOCK_TYPE_ARC_SILVER
};

const int rm_k[] =
{
    0,0,0,
    0,0,0,
    0,0,1
};

charData cd_k = charData( tm_k, rm_k );


// characterData ---------- L
const int tm_l[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_ARC_GOLD
};

const int rm_l[] =
{
    0,0,0,
    0,0,0,
    0,0,2
};

charData cd_l = charData( tm_l, rm_l );


// characterData ---------- M
const int tm_m[] =
{
    BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_NONE,   BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_RECT,     BLOCK_TYPE_CIRCLE, BLOCK_TYPE_RECT,
    BLOCK_TYPE_RECT,     BLOCK_TYPE_NONE,   BLOCK_TYPE_RECT
};

const int rm_m[] =
{
    3,0,0,
    0,0,0,
    0,0,0
};

charData cd_m = charData( tm_m, rm_m );


// characterData ---------- N
const int tm_n[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_RECT,
    BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE,     BLOCK_TYPE_RECT,
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT
};

const int rm_n[] =
{
    0,3,0,
    0,0,0,
    0,3,0
};

charData cd_n = charData( tm_n, rm_n );


// characterData ---------- O
const int tm_o[] =
{
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_RECT,       BLOCK_TYPE_NONE, BLOCK_TYPE_RECT,
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER
};

const int rm_o[] =
{
    0,0,3,
    0,0,0,
    1,0,2
};

charData cd_o = charData( tm_o, rm_o );


// characterData ---------- P
const int tm_p[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE,     BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,       BLOCK_TYPE_NONE
};

const int rm_p[] =
{
    0,0,1,
    0,1,0,
    0,0,0
};

charData cd_p = charData( tm_p, rm_p );


// characterData ---------- Q
const int tm_q[] =
{
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_RECT,       BLOCK_TYPE_NONE, BLOCK_TYPE_RECT,
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE
};

const int rm_q[] =
{
    0,0,3,
    0,0,0,
    1,0,0
};

charData cd_q = charData( tm_q, rm_q );


// characterData ---------- R
const int tm_r[] =
{
    BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_RECT, BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE, BLOCK_TYPE_ARC_GOLD
};

const int rm_r[] =
{
    0,0,3,
    0,0,0,
    0,0,3
};

charData cd_r = charData( tm_r, rm_r );


// characterData ---------- S
const int tm_s[] =
{
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE
};

const int rm_s[] =
{
    2,0,3,
    3,0,0,
    3,0,0
};

charData cd_s = charData( tm_s, rm_s );


// characterData ---------- T
const int tm_t[] =
{
    BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_RECT, BLOCK_TYPE_CIRCLE,
    BLOCK_TYPE_NONE,     BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE,     BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER
};

const int rm_t[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_t = charData( tm_t, rm_t );


// characterData ---------- U
const int tm_u[] =
{
    BLOCK_TYPE_RECT,     BLOCK_TYPE_NONE, BLOCK_TYPE_CIRCLE,
    BLOCK_TYPE_RECT,     BLOCK_TYPE_NONE, BLOCK_TYPE_RECT,
    BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER
};

const int rm_u[] =
{
    0,0,0,
    0,0,0,
    1,0,2
};

charData cd_u = charData( tm_u, rm_u );


// characterData ---------- V
const int tm_v[] =
{
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE, BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_NONE, BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_NONE,       BLOCK_TYPE_RECT, BLOCK_TYPE_NONE
};

const int rm_v[] =
{
    1,0,0,
    1,0,0,
    0,0,0
};

charData cd_v = charData( tm_v, rm_v );


// characterData ---------- W
const int tm_w[] =
{
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE, BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_NONE, BLOCK_TYPE_ARC_SILVER
};

const int rm_w[] =
{
    1,0,2,
    1,0,2,
    1,0,2
};

charData cd_w = charData( tm_w, rm_w );


// characterData ---------- X
const int tm_x[] =
{
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_NONE, BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_NONE,       BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE, BLOCK_TYPE_ARC_GOLD
};

const int rm_x[] =
{
    1,0,2,
    0,0,0,
    0,0,3
};

charData cd_x = charData( tm_x, rm_x );


// characterData ---------- Y
const int tm_y[] =
{
    BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_NONE,   BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_NONE,     BLOCK_TYPE_CIRCLE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE,     BLOCK_TYPE_RECT,   BLOCK_TYPE_NONE
};

const int rm_y[] =
{
    3,0,0,
    0,0,0,
    0,0,0
};

charData cd_y = charData( tm_y, rm_y );


// characterData ---------- Z
const int tm_z[] =
{
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_RECT,   BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_NONE,       BLOCK_TYPE_CIRCLE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT,   BLOCK_TYPE_ARC_GOLD
};

const int rm_z[] =
{
    0,0,2,
    0,0,0,
    0,0,2
};

charData cd_z = charData( tm_z, rm_z );


// characterData ---------- 1
const int tm_1[] =
{
    BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE,     BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE,     BLOCK_TYPE_RECT, BLOCK_TYPE_NONE
};

const int rm_1[] =
{
    2,0,0,
    0,0,0,
    0,0,0
};

charData cd_1 = charData( tm_1, rm_1 );


// characterData ---------- 2
const int tm_2[] =
{
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_NONE,       BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_CIRCLE,     BLOCK_TYPE_RECT, BLOCK_TYPE_ARC_GOLD
};

const int rm_2[] =
{
    2,0,3,
    0,0,2,
    0,0,2
};

charData cd_2 = charData( tm_2, rm_2 );


// characterData ---------- 3
const int tm_3[] =
{
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_RECT,   BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_NONE,       BLOCK_TYPE_CIRCLE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT,   BLOCK_TYPE_ARC_SILVER
};

const int rm_3[] =
{
    0,0,3,
    0,0,0,
    1,0,2
};

charData cd_3 = charData( tm_3, rm_3 );


// characterData ---------- 4
const int tm_4[] =
{
    BLOCK_TYPE_NONE,     BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE,
    BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_CIRCLE,     BLOCK_TYPE_RECT,
    BLOCK_TYPE_NONE,     BLOCK_TYPE_RECT,       BLOCK_TYPE_NONE
};

const int rm_4[] =
{
    0,0,0,
    2,0,0,
    0,0,0
};

charData cd_4 = charData( tm_4, rm_4 );


// characterData ---------- 5
const int tm_5[] =
{
    BLOCK_TYPE_RECT,     BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE,
    BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_RECT,       BLOCK_TYPE_NONE,
    BLOCK_TYPE_CIRCLE,   BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE
};

const int rm_5[] =
{
    0,2,0,
    1,0,0,
    0,0,0
};

charData cd_5 = charData( tm_5, rm_5 );


// characterData ---------- 6
const int tm_6[] =
{
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE,       BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT,       BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT,       BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_NONE
};

const int rm_6[] =
{
    2,0,0,
    0,1,0,
    0,0,0
};

charData cd_6 = charData( tm_6, rm_6 );


// characterData ---------- 7
const int tm_7[] =
{
    BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_RECT,
    BLOCK_TYPE_NONE,     BLOCK_TYPE_NONE,   BLOCK_TYPE_RECT,
    BLOCK_TYPE_NONE,     BLOCK_TYPE_NONE,   BLOCK_TYPE_RECT
};

const int rm_7[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_7 = charData( tm_7, rm_7 );


// characterData ---------- 8
const int tm_8[] =
{
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_ARC_SILVER,
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_NONE,   BLOCK_TYPE_ARC_GOLD,
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT,   BLOCK_TYPE_ARC_SILVER
};

const int rm_8[] =
{
    2,0,3,
    0,0,1,
    1,0,0
};

charData cd_8 = charData( tm_8, rm_8 );


// characterData ---------- 9
const int tm_9[] =
{
    BLOCK_TYPE_ARC_GOLD,   BLOCK_TYPE_RECT,     BLOCK_TYPE_NONE,
    BLOCK_TYPE_ARC_SILVER, BLOCK_TYPE_RECT,     BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE,       BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_NONE
};

const int rm_9[] =
{
    0,0,0,
    1,0,0,
    0,2,0
};

charData cd_9 = charData( tm_9, rm_9 );


// characterData ---------- 0
const int tm_0[] =
{
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,   BLOCK_TYPE_NONE
};

const int rm_0[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_0 = charData( tm_0, rm_0 );


// characterData ---------- !
const int tm_ex[] =
{
    BLOCK_TYPE_NONE, BLOCK_TYPE_RECT,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_RECT,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_NONE
};

const int rm_ex[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_ex = charData( tm_ex, rm_ex );


// characterData ---------- .
const int tm_pe[] =
{
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_NONE, BLOCK_TYPE_NONE
};

const int rm_pe[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_pe = charData( tm_pe, rm_pe );


// characterData ---------- '
const int tm_qu[] =
{
    BLOCK_TYPE_RECT,     BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_ARC_GOLD, BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE,     BLOCK_TYPE_NONE, BLOCK_TYPE_NONE
};

const int rm_qu[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_qu = charData( tm_qu, rm_qu );


// characterData ---------- :
const int tm_co[] =
{
    BLOCK_TYPE_NONE, BLOCK_TYPE_RECT, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_RECT, BLOCK_TYPE_NONE
};

const int rm_co[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_co = charData( tm_co, rm_co );


// characterData ---------- ;
const int tm_sc[] =
{
    BLOCK_TYPE_NONE, BLOCK_TYPE_RECT,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,   BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_CIRCLE, BLOCK_TYPE_NONE
};

const int rm_sc[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_sc = charData( tm_sc, rm_sc );


// characterData ---------- _
const int tm__[] =
{
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_RECT, BLOCK_TYPE_RECT, BLOCK_TYPE_NONE
};

const int rm__[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd__ = charData( tm__, rm__ );


// characterData ---------- space
const int tm_sp[] =
{
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE, BLOCK_TYPE_NONE,
    BLOCK_TYPE_NONE, BLOCK_TYPE_NONE, BLOCK_TYPE_NONE
};

const int rm_sp[] =
{
    0,0,0,
    0,0,0,
    0,0,0
};

charData cd_sp = charData( tm_sp, rm_sp );



// all character data
const charData data[] =
{
     cd_a, cd_b,  cd_c,  cd_d,  cd_e,  cd_f,  cd_g,  cd_h,
     cd_i, cd_j,  cd_k,  cd_l,  cd_m,  cd_n,  cd_o,  cd_p,
     cd_q, cd_r,  cd_s,  cd_t,  cd_u,  cd_v,  cd_w,  cd_x,
     cd_y, cd_z,  cd_1,  cd_2,  cd_3,  cd_4,  cd_5,  cd_6,
     cd_7, cd_8,  cd_9,  cd_0, cd_ex, cd_pe, cd_qu, cd_co,
    cd_sc, cd__, cd_sp
};

#define NUM_CHARACTERS 44

const char characters[] =
{
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
    'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
    'y', 'z', '1', '2', '3', '4', '5', '6',
    '7', '8', '9', '0', '!', '.',  39, ':',
    ';', '_', ' ',  10
};

const char lcharacters[] =
{
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
    'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
    'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
    'Y', 'Z'
};



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// BlockMatrix
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BlockMatrix::BlockMatrix()
{
    aType = ANIMATION_TYPE_CELL;
}

BlockMatrix::BlockMatrix( char _c, float _x, float _y, float _size, animationType _aType )
{
    letter = _c;
    aType  = _aType;
    
    int dataIdx = ofxTokyo2020::charMap[ _c ];
    
    bool bZero  = ( _c == '0' ) ? true: false;
    _size      /= ( bZero ) ? 2: 6;
    
    ofVec2f pOfst = ofVec2f( _x, _y ) - ofVec2f( _size * 2, _size * 2 );
    
    for( int y = 0; y < 3; ++y )
    {
        for( int x = 0; x < 3; ++x )
        {
            int idx = ( y * 3 ) + x;
            
            ofVec2f center = ofVec2f( _x, _y );
            ofVec2f t_pos  = pOfst + ( ofVec2f( x, y ) * ( _size * 2 ) );
            
            if( aType == ANIMATION_TYPE_EASING )
            {
                blocks[ idx ].setPosition( center );
                blocks[ idx ].setTargetPosition( t_pos );
                blocks[ idx ].setRotation( 0 );
                blocks[ idx ].setType( ( blockType )data[ dataIdx ].tm[ idx ] );
                
                if( bZero )
                {
                    blocks[ idx ].setRadius( _size / 3 );
                    blocks[ idx ].setTargetRadius( _size );
                }
                else
                {
                    blocks[ idx ].setRadius( _size );
                }
            }
            else if( aType == ANIMATION_TYPE_CELL )
            {
                if( bZero )
                {
                    blocks[ idx ].setType( ( idx == 4 ) ? ( blockType )int( ofRandom( 5 ) ): BLOCK_TYPE_NONE );
                }
                else
                {
                    blocks[ idx ].setType( ( blockType )int( ofRandom( 5 ) ) );
                }
                
                blocks[ idx ].setTargetType( ( blockType )data[ dataIdx ].tm[ idx ] );
                blocks[ idx ].setRotation( int( ofRandom( 4 ) ) * 90 );
                blocks[ idx ].setPosition( t_pos );
                blocks[ idx ].setRadius( _size );
            }
            
            blocks[ idx ].setTargetRotation( data[ dataIdx ].rm[ idx ] * 90 );
            blocks[ idx ].startAnimation();
        }
    }
}


////////////////////////////////////////
// ~BlockMatrix
////////////////////////////////////////
BlockMatrix::~BlockMatrix()
{
}


////////////////////////////////////////
// randomizeType
////////////////////////////////////////
void BlockMatrix::randomizeType()
{
    for( int i = 0; i < NUM_BLOCKS; ++i )
    {
        if( letter == '0' )
        {
            if( i == 4 )
            {
                blocks[ i ].setType( ( blockType )int( ofRandom( 5 ) ) );
            }
            else
            {
                blocks[ i ].setType( BLOCK_TYPE_NONE );
            }
        }
        else
        {
            blocks[ i ].setType( ( blockType )int( ofRandom( 5 ) ) );
        }
    }
}


////////////////////////////////////////
// randomizeRotation
////////////////////////////////////////
void BlockMatrix::randomizeRotation()
{
    for( int i = 0; i < NUM_BLOCKS; ++i )
    {
        blocks[ i ].setRotation( int( ofRandom( 4 ) ) * 90 );
    }
}


////////////////////////////////////////
// startAnimation
////////////////////////////////////////
void BlockMatrix::startAnimation()
{
    int lIdx = ofxTokyo2020::charMap[ letter ];
    
    if( aType == ANIMATION_TYPE_EASING )
    {
        for( int i = 0; i < NUM_BLOCKS; ++i )
        {
            blocks[ i ].setRotation( int( ofRandom( 4 ) ) * 90 );
            blocks[ i ].setTargetRotation( data[ lIdx ].rm[ i ] * 90 );
            blocks[ i ].startAnimation();
        }
    }
    else if( aType == ANIMATION_TYPE_CELL )
    {
        for( int i = 0; i < NUM_BLOCKS; ++i )
        {
            if( letter == '0' )
            {
                if( i == 4 )
                {
                    blocks[ i ].setType( ( blockType )int( ofRandom( 5 ) ) );
                    blocks[ i ].setTargetType( ( blockType )data[ lIdx ].tm[ i ] );
                }
                else
                {
                    blocks[ i ].setType( BLOCK_TYPE_NONE );
                }
            }
            else
            {
                blocks[ i ].setType( ( blockType )int( ofRandom( 5 ) ) );
                blocks[ i ].setTargetType( ( blockType )data[ lIdx ].tm[ i ] );
            }
            
            blocks[ i ].setRotation( int( ofRandom( 4 ) ) * 90 );
            blocks[ i ].setTargetRotation( data[ lIdx ].rm[ i ] * 90 );
            blocks[ i ].startAnimation();
        }
    }
}


////////////////////////////////////////
// isMoving
////////////////////////////////////////
bool BlockMatrix::isMoving()
{
    for( int i = 0; i < NUM_BLOCKS; ++i )
    {
        if( blocks[ i ].isMoving() )
        {
            return true;
        }
    }
    
    return false;
}


////////////////////////////////////////
// update
////////////////////////////////////////
void BlockMatrix::update()
{
    if( aType == ANIMATION_TYPE_EASING )
    {
        for( int i = 0; i < NUM_BLOCKS; ++i )
        {
            blocks[ i ].update();
        }
    }
    else if( aType == ANIMATION_TYPE_CELL )
    {
        for( int i = 0; i < NUM_BLOCKS; ++i )
        {
            blocks[ i ].updateCell();
        }
    }
}


////////////////////////////////////////
// draw
////////////////////////////////////////
void BlockMatrix::draw()
{
    for( int i = 0; i < NUM_BLOCKS; ++i )
    {
        blocks[ i ].draw();
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ofxTokyo2020
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
map< char, int > ofxTokyo2020::charMap;

float ofxTokyo2020::fontSize      = 100;
float ofxTokyo2020::letterSpacing = ofxTokyo2020::fontSize / 3;
float ofxTokyo2020::lineHeight    = ( ofxTokyo2020::fontSize / 3 ) * 4;


ofxTokyo2020::ofxTokyo2020()
{
    setupCharacterMap();
}


////////////////////////////////////////
// ~ofxTokyo2020
////////////////////////////////////////
ofxTokyo2020::~ofxTokyo2020()
{
    
}


////////////////////////////////////////
// setupCharacterMap
////////////////////////////////////////
void ofxTokyo2020::setFontSize( float _fontSize )
{
    fontSize = _fontSize;
}


////////////////////////////////////////
// setupCharacterMap
////////////////////////////////////////
void ofxTokyo2020::setLetterSpacing( float _letterSpacing )
{
    letterSpacing = _letterSpacing;
}


////////////////////////////////////////
// setLineHeight
////////////////////////////////////////
void ofxTokyo2020::setLineHeight( float _lineHeight )
{
    lineHeight = _lineHeight;
}


////////////////////////////////////////
// setupCharacterMap
////////////////////////////////////////
void ofxTokyo2020::setupCharacterMap()
{
    for( int i = 0; i < NUM_CHARACTERS; ++i )
    {
        charMap.insert( pair< char, int >( characters[ i ], i ) );
    }
    
    // large character
    for( int i = 0; i < 26; ++i )
    {
        charMap.insert( pair< char, int >( lcharacters[ i ], i ) );
    }
}


////////////////////////////////////////
// drawCharacter
////////////////////////////////////////
void ofxTokyo2020::setCharacter( char _c, float _x, float _y, animationType _aType )
{
    // if _c is unavailable character
    if( charMap.find( _c ) == charMap.end() )
    {
        return;
    }
    
    bms.clear();
    lastMovingStates.clear();
    
    bms.push_back( BlockMatrix( _c, _x, _y, fontSize, _aType ) );
    lastMovingStates.push_back( true );
}


////////////////////////////////////////
// drawString
////////////////////////////////////////
void ofxTokyo2020::setString( string _s, float _x, float _y, animationType _aType, bool _bWaitPrevious )
{
    bWaitPrevious = _bWaitPrevious;
    
    // erase unavailable characters
    for( string::iterator itr = _s.begin(); itr != _s.end(); )
    {
        if( charMap.find( ( *itr ) ) == charMap.end() )
        {
            itr = _s.erase( itr );
        }
        else
        {
            ++itr;
        }
    }
    
    // clear blockMatrices
    bms.clear();
    
    // clear lastMoving states
    lastMovingStates.clear();
    
    // string position
    float strX = _x;
    float strY = _y;
    
    for( int i = 0; i < _s.length(); ++i )
    {
        // if character is ¥n
        if( _s.at( i ) == 10 )
        {
            strX  = _x;
            strY += lineHeight;
        }
        else
        {
            // add BlockMatrix
            bms.push_back( BlockMatrix( _s.at( i ), strX, strY, fontSize, _aType ) );
            lastMovingStates.push_back( true );
            
            strX += ( fontSize + letterSpacing );
        }
        
    }
}


////////////////////////////////////////
// reStartAnimation
////////////////////////////////////////
void ofxTokyo2020::reStartAnimation()
{
    for( int i = 0; i < bms.size(); ++i )
    {
        bms.at( i ).startAnimation();
    }
}


////////////////////////////////////////
// update
////////////////////////////////////////
bool ofxTokyo2020::isMoving()
{
    for( int i = 0; i < bms.size(); ++i )
    {
        if( bms.at( i ).isMoving() )
        {
            return true;
        }
    }
    
    return false;
}


////////////////////////////////////////
// update
////////////////////////////////////////
void ofxTokyo2020::update()
{
    for( int i = 0; i < bms.size(); ++i )
    {
        lastMovingStates.at( i ) = bms.at( i ).isMoving();
        
        if( bWaitPrevious && ( i > 0 ) )
        {
            if( !bms.at( i - 1 ).isMoving() )
            {
                bms.at( i ).update();
            }
            
            // trigger
            if( lastMovingStates.at( i - 1 ) && !bms.at( i - 1 ).isMoving() )
            {
                bms.at( i ).startAnimation();
            }
        }
        else
        {
            bms.at( i ).update();
        }
    }
}


////////////////////////////////////////
// draw
////////////////////////////////////////
void ofxTokyo2020::draw()
{
    for( int i = 0; i < bms.size(); ++i )
    {
        bms.at( i ).draw();
    }
}
