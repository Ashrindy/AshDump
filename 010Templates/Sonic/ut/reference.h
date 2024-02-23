//  u64 count
//	off64<T> offset
typedef struct (string structName){
	local uint64 pos;
	
	uint64 Offset <format=hex, name="Offset">;
	if (!Offset) return;
	pos = FTell();
    FSeek(dataPos + Offset);
    GetStruct (structName);
    FSeek(pos);
}Reference;

typedef struct (string structName, uint64 offset){
	local uint64 pos;
	
	pos = FTell();
    FSeek(dataPos + offset);
    GetStruct (structName);
    FSeek(pos);
}Reference2;