#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x88 - 0x0)
// Function BP_FootstepComponent.BP_FootstepComponent_C.GetSoundForSurface
struct UBP_FootstepComponent_C_GetSoundForSurface_Params
{
public:
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSurfaceSounds                        Sounds;                                            // 0x8(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class USoundBase*                            ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  Temp_byte_Variable;                                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


