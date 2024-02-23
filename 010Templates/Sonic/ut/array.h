//  u64 count
//	off64<T> offset
typedef struct (string structName){
	local uint64 pos;
	
	uint64 count;
	uint64 Offset<format=hex>;
	pos = FTell();
    FSeek(dataPos + Offset);
    GetArrayStruct (structName, count);
    FSeek(pos);
}List;

//  u64 count
//	off64<T> offset
typedef struct (string structName){
	local uint64 pos;
	
	uint64 count;
	uint64 Offset<format=hex>;
	pos = FTell();
    FSeek(dataPos + Offset);
    uint64 Offsets[count] <hidden=true>;
    FSeek(pos);
	
    local int i;

    for(i=0; i<count; i++)
    {  
        FSeek(dataPos + Offsets[i]);
        GetStruct (structName);
		FSeek(pos);
    }
    
}ReferenceList;

//  u64 count
//	off64<T> offset
typedef struct (string structName, uint64 count){
	local uint64 pos;
	
	uint64 Offset<format=hex>;
	pos = FTell();
    FSeek(dataPos + Offset);
    uint64 Offsets[count] <hidden=true>;
    FSeek(pos);
	
    local int i;

    for(i=0; i<count; i++)
    {  
        FSeek(dataPos + Offsets[i]);
        GetStruct (structName);
		FSeek(pos);
    }
    
}ReferenceList2;

//  u32 count
//	off64<T> offset
typedef struct (string structName){
	local uint64 pos;
	
	uint32 count <name="Count">;
	uint64 Offset <format=hex, name="Offset">;
	pos = FTell();
    FSeek(dataPos + Offset);
    GetArrayStruct (structName, count);
    FSeek(pos);
}List2;

//  List3 list("structname", offset, count)
typedef struct (string structName, uint64 offset, uint32 count){
	local uint64 pos;
	
	pos = FTell();
    FSeek(dataPos + offset);
    GetArrayStruct (structName, count);
    FSeek(pos);
}List3;

//	off64<T> offset
//  u32 count
typedef struct (string structName){
	local uint64 pos;
	
	uint64 Offset<format=hex, name="Offset">;
	uint32 count <name="Count">;;
	pos = FTell();
    FSeek(dataPos + Offset);
    GetArrayStruct (structName, count);
    FSeek(pos);
}List4;

//	off64<T> offset
//  u64 count
typedef struct (string structName){
	local uint64 pos;
	
	uint64 Offset<format=hex, name="Offset">;
	uint64 count <name="Count">;
	pos = FTell();
    FSeek(dataPos + Offset);
    GetArrayStruct (structName, count);
    FSeek(pos);
}List5;

//  u32 count
//	off64<T> offset
typedef struct (string structName, uint32 count){
	local uint64 pos;
	
	uint64 Offset<format=hex>;
	pos = FTell();
    FSeek(dataPos + Offset);
    GetArrayStruct (structName, count);
    FSeek(pos);
}List6;


//	off64<T> offset
//  u64 count
//  u64 capacity
typedef struct (string structName)
{
    SetRandomBackColor();

    local int64 pos;

    uint64 Offset <format=hex, name="Offset">;
    uint64 count <name="Count">;
    uint64 capacity <name="Capacity">;;
    
	local int localcount;
	if (count && !capacity)
		localcount = count;
	else if (!count && capacity)
		localcount = capacity;
	else if (count == capacity)
		localcount = count;
	
    pos = FTell();
    FSeek(dataPos + Offset);
    uint64 Offsets[localcount] <hidden=true>;
    FSeek(pos);
	
    local int i;

    for(i=0; i<localcount; i++)
    {  
        FSeek(dataPos + Offsets[i]);
        GetStruct (structName);
    }
    FSeek(pos);

}MoveArray<optimize=false>;

//	off64<T> offset
//  u32 count
//  u32 capacity
typedef struct (string structName)
{
    SetRandomBackColor();

    local int64 pos;

    uint64 Offset <format=hex, name="Offset">;
    uint32 count <name="Count">;; 
    uint32 capacity <name="Capacity">;
    
	local int localcount;
	if (count && !capacity)
		localcount = count;
	else if (!count && capacity)
		localcount = capacity;
	else if (count == capacity)
		localcount = count;
	
    pos = FTell();
    FSeek(dataPos + Offset);
    uint64 Offsets[localcount] <hidden=true>;
    FSeek(pos);
	
    local int i;

    for(i=0; i<localcount; i++)
    {  
        FSeek(dataPos + Offsets[i]);
        GetStruct (structName);
    }
    FSeek(pos);

}MoveArray2<optimize=false>;


typedef struct (string structName)
{
    SetRandomBackColor();

    local int64 pos;

    uint64 Offset <format=hex, name="Offset">;
    uint64 count <name="Count">;
    uint64 capacity <name="Capacity">;
    
	local int localcount;
	if (count && !capacity)
		localcount = count;
	else if (!count && capacity)
		localcount = capacity;
	else if (count == capacity)
		localcount = count;
	
    pos = FTell();
    FSeek(dataPos + Offset);
    GetArrayStruct(structName, localcount);
    FSeek(pos);

}MoveArray3<optimize=false>;

typedef struct (string structName)
{
    SetRandomBackColor();

    local int64 pos;

    uint64 count <name="Count">;
    uint64 capacity <name="Capacity">;
	uint64 Offset <format=hex, name="Offset">;
    
	local int localcount;
	if (count && !capacity)
		localcount = count;
	else if (!count && capacity)
		localcount = capacity;
	else if (count == capacity)
		localcount = count;
	
    pos = FTell();
    FSeek(dataPos + Offset);
    GetArrayStruct(structName, localcount);
    FSeek(pos);

}MoveArray4<optimize=false>;