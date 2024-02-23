#include "ut/ResBinaryFileHeader.h"
#include "ut/array.h"
#include "ut/math.h"
#include "ut/string.h"
#include "ut/010editor.h"
#include "ut/variables.h"
#include "ut/reference.h"

void GetStruct (string structName)
{
	switch (structName)
	{
		case "ResParticleLocation":
			struct ResParticleLocation resParticleLocation <name="ResParticleLocation">;
			break;
		
		
		default:
			break;
	}
}