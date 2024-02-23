typedef struct
{
    ubyte r, g, b, a;
    
}ColorRGBA<optimize=false, read=Str("#%.2X%.2X%.2X%.2X", r, g, b, a)>;