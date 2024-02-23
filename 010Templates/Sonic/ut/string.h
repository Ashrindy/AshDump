string StringOffsetRead(struct StringOffset& str)
{
    if (str.off) return ReadString(dataPos + str.off);
    else return "nullptr";
}

typedef struct{ uint64 off<format=hex, hidden=false>;} StringOffset <read=StringOffsetRead>;



typedef struct (string type, uint64 offset, uint64 textSize){  
	if (offset != 0) 
    {
        local int64 pos;

        pos = FTell();
        FSeek(dataPos + offset);

        switch (type)
        {
            case "string":
                char value[textSize];
                break;
            case "wstring":
                wchar_t value[textSize];
                break;
        };
        FSeek(pos);
    }
} StringOffset2<open=true, read=Str("%s",value)>;


typedef struct (string type){  
	uint64 Offset<format=hex, hidden=true>;
	if (Offset != 0) 
    {
        local int64 pos;

        pos = FTell();
        FSeek(dataPos + Offset);
		local char result[];
        switch (type)
        {
            case "string":
                string value;
				result = value;
                break;
            case "wstring":
                wstring value;
				result = WStringToString(value,20);
                break;
        };
        FSeek(pos);
    }
} StringOffset3 <open=true, read=Str("%s", result)>;