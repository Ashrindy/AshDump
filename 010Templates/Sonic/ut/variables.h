enum<byte> bool8 { False = 0, True = 1 };
enum<short> bool16 { False_ = 0, True_ = 1 };
enum<int> bool32 { False__ = 0, True__ = 1 };

string ValueOffsetRead(struct ValueOffset& vle)
{
    if (vle.Offset == 0) return "nullptr";
    else 
    {
        local string result;
        SPrintf(result, "%d", vle.value);
        return result;
    }
}

typedef struct (string type)
{
    uint64 Offset<format=hex, hidden=true>;
    if (Offset != 0) 
    {
        local int64 pos;

        pos = FTell();
        FSeek(dataPos + Offset);

        switch (type)
        {
            case "bool":
                bool8 value;
                break;
            case "byte":
                byte value;
                break;
            case "int":
                int32 value;
                break;
            case "uint":
                uint32 value;
                break;
            case "int64":
                int64 value;
                break;
            case "uint64":
                uint64 value;
                break;
            case "float":
                float value;
                break;
            case "int16":
                int16 value;
                break;
            case "uint16":
                uint16 value;
                break;
        };
        FSeek(pos);
    }
}ValueOffset<optimize=false, read=ValueOffsetRead>;