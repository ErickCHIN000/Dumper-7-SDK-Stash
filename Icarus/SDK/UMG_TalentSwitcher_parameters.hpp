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
// Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.BndEvt__UMG_TalentSwitcher_PlayerTalents_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature
struct UUMG_TalentSwitcher_C_BndEvt__UMG_TalentSwitcher_PlayerTalents_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.BndEvt__UMG_TalentSwitcher_SoloTalents_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature
struct UUMG_TalentSwitcher_C_BndEvt__UMG_TalentSwitcher_SoloTalents_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.ExecuteUbergraph_UMG_TalentSwitcher
struct UUMG_TalentSwitcher_C_ExecuteUbergraph_UMG_TalentSwitcher_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3899[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ToggleButtonBase_C*               K2Node_ComponentBoundEvent_ToggleButton_1;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ToggleButtonBase_C*               K2Node_ComponentBoundEvent_ToggleButton;           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.SwitchTalents__DelegateSignature
struct UUMG_TalentSwitcher_C_SwitchTalents__DelegateSignature_Params
{
public:
	bool                                         Solo;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


