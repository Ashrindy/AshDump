typedef struct(string structName)
{
    //SetRandomBackColor();
    char signature[4]<name="Signature">;
    uint32 size <name="Size">;
    uint32 strTableOffset<format=hex, name="String Table Offset" >;
    uint32 strTableSize <name="String Table Size">;
    uint32 offTableSize <name="Offset Table Size">;
    uint16 relativeDataOffset <name="Relative Data Offset">;
    uint16 padding1 <name="Padding1">;

    byte padding2[relativeDataOffset] <name="Padding2">;

    dataPos = FTell();
    GetStruct (structName);
    FSeek(dataPos + strTableOffset);
    char strTable[strTableSize] <name="String Table">;
    byte offTable[offTableSize] <name="Offset Table">;
}
ResBinaryFileBlockHeader<optimize=false, name=Str("%s Block", signature)>;