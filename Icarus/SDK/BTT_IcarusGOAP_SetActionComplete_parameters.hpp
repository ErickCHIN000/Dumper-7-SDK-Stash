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

// 0x8 (0x8 - 0x0)
// Function BTT_IcarusGOAP_SetActionComplete.BTT_IcarusGOAP_SetActionComplete_C.ReceiveExecute
struct UBTT_IcarusGOAP_SetActionComplete_C_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BTT_IcarusGOAP_SetActionComplete.BTT_IcarusGOAP_SetActionComplete_C.ExecuteUbergraph_BTT_IcarusGOAP_SetActionComplete
struct UBTT_IcarusGOAP_SetActionComplete_C_ExecuteUbergraph_BTT_IcarusGOAP_SetActionComplete_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusNPCGOAPController*              K2Node_DynamicCast_AsIcarus_NPCGOAPController;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CompleteCurrentAction_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


