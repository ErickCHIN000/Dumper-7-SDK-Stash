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

// 0x1 (0x1 - 0x0)
// Function WBP_DungeonResetPopup.WBP_DungeonResetPopup_C.BndEvt__WBP_dungeonentrypopup_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
struct UWBP_DungeonResetPopup_C_BndEvt__WBP_dungeonentrypopup_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
{
public:
	bool                                         Response;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function WBP_DungeonResetPopup.WBP_DungeonResetPopup_C.ExecuteUbergraph_WBP_DungeonResetPopup
struct UWBP_DungeonResetPopup_C_ExecuteUbergraph_WBP_DungeonResetPopup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1196[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASophiaCharacter*                      K2Node_DynamicCast_AsSophia_Character;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_Response;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


