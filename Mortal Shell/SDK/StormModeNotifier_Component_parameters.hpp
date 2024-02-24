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
// Function StormModeNotifier_Component.StormModeNotifier_Component_C.Get_VODialogueWidget
struct UStormModeNotifier_Component_C_Get_VODialogueWidget_Params
{
public:
	class UUI_Dialogue_VoiceOver_C*              Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StormModeNotifier_Component.StormModeNotifier_Component_C.Set_VODialogueWidget
struct UStormModeNotifier_Component_C_Set_VODialogueWidget_Params
{
public:
	class UUI_Dialogue_VoiceOver_C*              Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function StormModeNotifier_Component.StormModeNotifier_Component_C.GetCurrentValue_IsVoiceOverDialogue
struct UStormModeNotifier_Component_C_GetCurrentValue_IsVoiceOverDialogue_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function StormModeNotifier_Component.StormModeNotifier_Component_C.SetValue_IsVoiceOverDialogue
struct UStormModeNotifier_Component_C_SetValue_IsVoiceOverDialogue_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function StormModeNotifier_Component.StormModeNotifier_Component_C.GetCurrentValue_SelectWindow
struct UStormModeNotifier_Component_C_GetCurrentValue_SelectWindow_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function StormModeNotifier_Component.StormModeNotifier_Component_C.SetValue_SelectWindow
struct UStormModeNotifier_Component_C_SetValue_SelectWindow_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnSisterDialogue__DelegateSignature
struct UStormModeNotifier_Component_C_OnSisterDialogue__DelegateSignature_Params
{
public:
	bool                                         Start_;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnMilestoneProgress__DelegateSignature
struct UStormModeNotifier_Component_C_OnMilestoneProgress__DelegateSignature_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastUnlockedTier;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Progress;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnValueChanged_VoiceOverDialogue__DelegateSignature
struct UStormModeNotifier_Component_C_OnValueChanged_VoiceOverDialogue__DelegateSignature_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function StormModeNotifier_Component.StormModeNotifier_Component_C.OnValueChanged_SelectWindow__DelegateSignature
struct UStormModeNotifier_Component_C_OnValueChanged_SelectWindow__DelegateSignature_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


