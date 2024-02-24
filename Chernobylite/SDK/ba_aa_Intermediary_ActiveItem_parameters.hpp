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
// Function ba_aa_Intermediary_ActiveItem.ba_aa_Intermediary_ActiveItem_C.OnHideShowAdditional
struct Aba_aa_Intermediary_ActiveItem_C_OnHideShowAdditional_Params
{
public:
	enum class EState                            OutTargetState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ba_aa_Intermediary_ActiveItem.ba_aa_Intermediary_ActiveItem_C.ExecuteUbergraph_ba_aa_Intermediary_ActiveItem
struct Aba_aa_Intermediary_ActiveItem_C_ExecuteUbergraph_ba_aa_Intermediary_ActiveItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EState                            K2Node_Event_OutTargetState;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


