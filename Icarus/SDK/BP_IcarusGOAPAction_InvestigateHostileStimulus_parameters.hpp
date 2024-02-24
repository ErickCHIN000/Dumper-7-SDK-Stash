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

// 0x3B (0x3B - 0x0)
// Function BP_IcarusGOAPAction_InvestigateHostileStimulus.BP_IcarusGOAPAction_InvestigateHostileStimulus_C.CheckContextualPreconditions
struct UBP_IcarusGOAPAction_InvestigateHostileStimulus_C_CheckContextualPreconditions_Params
{
public:
	class AIcarusNPCGOAPController*              Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_309C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGOAPProperty                         K2Node_MakeStruct_GOAPProperty;                    // 0xC(0x1C)(NoDestructor)
	struct FGOAPState                            CallFunc_GetGOAPState_ReturnValue;                 // 0x28(0x10)(None)
	bool                                         CallFunc_CheckContextualPreconditions_ReturnValue; // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


