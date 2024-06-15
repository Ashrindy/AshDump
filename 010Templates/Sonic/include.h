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
		
		case "ResDensitySetting":
			struct ResDensitySetting resDensitySetting <name="ResDensitySetting">;
			break;
		
		case "ResTerrainMaterial":
			struct ResTerrainMaterial resTerrainMaterial <name="ResTerrainMaterial">;
			break;
			
		case "ResMasterLevel":
			struct ResMasterLevel resMasterLevel <name="ResMasterLevel">;
			break;

		case "ResShaderList":
			struct ResShaderList resShaderList <name="ResShaderList">;
			break;

		case "ResAnimationPxd":
			struct ResAnimationPxd resAnimationPxd <name="ResAnimationPxd">;
			break;

		case "ResOcclusionCapsule":
			struct ResOcclusionCapsule resOcclusionCapsule <name="ResOcclusionCapsule">;
			break;

		case "ResProbe":
			struct ResProbe resProbe <name="ResProbe">;
			break;
			
		case "ResPointcloud":
			struct ResPointcloud resPointcloud <name="ResPointcloud">;
			break;

		case "ResDensityPointCloud":
			struct ResDensityPointCloud resDensityPointCloud <name="ResDensityPointCloud">;
			break;
			
		case "ResBulletMesh":
			struct ResBulletMesh resBulletMesh <name="ResBulletMesh">;
			break;
		
		default:
			break;
	}
}