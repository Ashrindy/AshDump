#include "../ut/ResBinaryFileHeader.h"
#include "../ut/array.h"
#include "../ut/math.h"
#include "../ut/string.h"
#include "../ut/010editor.h"
#include "../ut/variables.h"
#include "../ut/reference.h"

void GetStruct (string structName)
{
	switch (structName)
	{
		case "ResParticleLocation":
			struct ResParticleLocation resParticleLocation <name="ResParticleLocation">;
			break;
		
		case "ResPhysicalSkeleton":
			struct ResPhysicalSkeleton resPhysicalSkeleton <name="ResPhysicalSkeleton">;
			break;

		case "ResAIStateMachine":
			struct ResAIStateMachine resAIStateMachine <name="ResAIStateMachine">;
			break;
		
		default:
			break;
	}
}