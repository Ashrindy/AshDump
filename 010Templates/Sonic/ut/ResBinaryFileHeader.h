#include "../ut/ResBinaryFileBlockHeader.h"
enum<byte> ResBinaryFileEndian 
{
    BIG_ENDIAN = 'B',
    LITTLE_ENDIAN = 'L'
};

typedef struct (string structName)
{
    //SetRandomBackColor();
    char signature[4]<name="Signature">;
    char version[3]<name="Version">;
    ResBinaryFileEndian endianess<name="Endianess">;

    switch (endianess)
    {
        case BIG_ENDIAN:
            BigEndian();
            break;
        case LITTLE_ENDIAN:
            LittleEndian();
            break;
        default:
            LittleEndian();
            break;
    };

    uint32 fileSize <name="File Size">;
    uint16 blockCount <name="Block Count">;
    uint16 padding1 <name="Padding">;

    struct ResBinaryFileBlockHeader blocks(structName)[blockCount];
}
ResBinaryFileHeader<read=Str("%s, Version: %s.%s.%s (%s) ", signature, version[0], version[1], version[2], EnumToString(endianess))>;

typedef ResBinaryFileHeader ResBinaryFile;