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

// 0x1C (0x1C - 0x0)
// Function WBP_DB_Progression.WBP_DB_Progression_C.BndEvt__WBP_DB_Performance_WBP_UIK_MenuTabs_1_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature
struct UWBP_DB_Progression_C_BndEvt__WBP_DB_Performance_WBP_UIK_MenuTabs_1_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature_Params
{
public:
	class FText                                  SelectedTabName;                                   // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        ActiveTab;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WBP_DB_Progression.WBP_DB_Progression_C.ExecuteUbergraph_WBP_DB_Progression
struct UWBP_DB_Progression_C_ExecuteUbergraph_WBP_DB_Progression_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_380[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_SelectedTabName;        // 0x8(0x18)(None)
	int32                                        K2Node_ComponentBoundEvent_ActiveTab;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


