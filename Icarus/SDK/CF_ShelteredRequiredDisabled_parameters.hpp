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
// Function CF_ShelteredRequiredDisabled.CF_ShelteredRequiredDisabled_C.GetCheckboxState
struct UCF_ShelteredRequiredDisabled_C_GetCheckboxState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsShelteredRequiredDisabled_ReturnValue;  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CF_ShelteredRequiredDisabled.CF_ShelteredRequiredDisabled_C.OnCheckboxStateChanged
struct UCF_ShelteredRequiredDisabled_C_OnCheckboxStateChanged_Params
{
public:
	bool                                         NewState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function CF_ShelteredRequiredDisabled.CF_ShelteredRequiredDisabled_C.ExecuteUbergraph_CF_ShelteredRequiredDisabled
struct UCF_ShelteredRequiredDisabled_C_ExecuteUbergraph_CF_ShelteredRequiredDisabled_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_NewState;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetCheatController_Paths;                 // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2458[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACheatController*                      CallFunc_GetCheatController_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


