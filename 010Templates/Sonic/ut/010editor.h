//---------------------------------------------
// Random color
// This code was taken from TGE template
//---------------------------------------------
local uint32 __RandomSeed = 0xDEADBABE;
local uint32 __RandomBit = 0;
local uint32 __RandomCount = 0;
 
uint32 MyRandom( uint32 to )
{
    ++__RandomCount;
    __RandomBit  = ( (__RandomSeed >> 0 ) ^ ( __RandomSeed >> 2 ) ^ ( __RandomSeed >> 3 ) ^ ( __RandomSeed >> 5 ) ) & 1;
    __RandomSeed = ( ( ( ( __RandomBit << 15 ) | ( __RandomSeed >> 1 ) ) + ( 0xBABE / __RandomCount ) ) % to );

    while( __RandomSeed < 0 )
        __RandomSeed += to;

    return __RandomSeed;
}

local uint32 __LastRandomColor = 0;
uint32 RandomColor()
{
    return __LastRandomColor = MyRandom( 0xFFFFFFFF );
}

uint32 SetRandomBackColor()
{
    local uint32 color = RandomColor();
    SetBackColor( color );
    return color;
}