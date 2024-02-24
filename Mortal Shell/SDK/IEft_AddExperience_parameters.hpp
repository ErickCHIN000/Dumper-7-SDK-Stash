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

// 0x11 (0x11 - 0x0)
// Function IEft_AddExperience.IEft_AddExperience_C.OnAppliedBP
struct UIEft_AddExperience_C_OnAppliedBP_Params
{
public:
	class ABarbarous_C*                          Barbarous;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPC;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFamiliarityUnlocked;                              // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function IEft_AddExperience.IEft_AddExperience_C.ExecuteUbergraph_IEft_AddExperience
struct UIEft_AddExperience_C_ExecuteUbergraph_IEft_AddExperience_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1027[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABarbarous_C*                          K2Node_Event_Barbarous;                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         K2Node_Event_GameplayPC;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bFamiliarityUnlocked;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_GetShell_CurrentArmor;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_102E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


