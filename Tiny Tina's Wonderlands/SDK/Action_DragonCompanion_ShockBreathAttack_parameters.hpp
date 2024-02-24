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
// Function Action_DragonCompanion_ShockBreathAttack.Action_DragonCompanion_ShockBreathAttack_C.ExecuteUbergraph_Action_DragonCompanion_ShockBreathAttack
struct UAction_DragonCompanion_ShockBreathAttack_C_ExecuteUbergraph_Action_DragonCompanion_ShockBreathAttack_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1607[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_K2_GetActor_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_160D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ExternalDragonCompanionCreateShockBreath_Res; // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ExternalDragonCompanionStopShockBreath_Res; // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


