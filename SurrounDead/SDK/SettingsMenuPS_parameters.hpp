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

// 0x10 (0x10 - 0x0)
// Function SettingsMenuPS.SettingsMenuPS_C.CategoryChanged
struct USettingsMenuPS_C_CategoryChanged_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function SettingsMenuPS.SettingsMenuPS_C.ExecuteUbergraph_SettingsMenuPS
struct USettingsMenuPS_C_ExecuteUbergraph_SettingsMenuPS_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Value;                          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolCVar_ReturnValue;                  // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSettingOption                        K2Node_MakeStruct_SettingOption;                   // 0x40(0x28)(None)
	struct FSettingOption                        K2Node_MakeStruct_SettingOption_1;                 // 0x68(0x28)(None)
	struct FSettingOption                        K2Node_MakeStruct_SettingOption_2;                 // 0x90(0x28)(None)
	struct FSettingOption                        K2Node_MakeStruct_SettingOption_3;                 // 0xB8(0x28)(None)
	TArray<struct FSettingOption>                K2Node_MakeArray_Array;                            // 0xE0(0x10)(ReferenceParm)
	class AHUD_Game_C*                           CallFunc_GetGameHUD_HUD;                           // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


