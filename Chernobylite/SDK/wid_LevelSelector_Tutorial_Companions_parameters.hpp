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

// 0x80 (0x80 - 0x0)
// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.UpdateBasedOnType
struct UWid_LevelSelector_Tutorial_Companions_C_UpdateBasedOnType_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2220[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable;                          // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_1;                        // 0x30(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             K2Node_Select_Default;                             // 0x58(0x28)(UObjectWrapper, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.UpdateTextBasedOnInput
struct UWid_LevelSelector_Tutorial_Companions_C_UpdateTextBasedOnInput_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LastInputWasFromGamepad_Gamepad;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_226E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x8(0x18)(ConstParm)
	class FText                                  K2Node_Select_Default_1;                           // 0x20(0x18)(ConstParm)
	class FText                                  CallFunc_KeyToIcon_OutText;                        // 0x38(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.PreConstruct
struct UWid_LevelSelector_Tutorial_Companions_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.InputDeviceChanged
struct UWid_LevelSelector_Tutorial_Companions_C_InputDeviceChanged_Params
{
public:
	bool                                         NewInputIsGamepad;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.ExecuteUbergraph_wid_LevelSelector_Tutorial_Companions
struct UWid_LevelSelector_Tutorial_Companions_C_ExecuteUbergraph_wid_LevelSelector_Tutorial_Companions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_231E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGGameModeBase*                       CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_NewInputIsGamepad;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2331[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGGameModeBase*                       CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


