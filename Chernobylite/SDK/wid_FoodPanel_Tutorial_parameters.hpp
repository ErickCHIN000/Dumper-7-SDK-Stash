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
// Function wid_FoodPanel_Tutorial.wid_FoodPanel_Tutorial_C.SetType
struct UWid_FoodPanel_Tutorial_C_SetType_Params
{
public:
	bool                                         IsMissionTutorial;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function wid_FoodPanel_Tutorial.wid_FoodPanel_Tutorial_C.UpdateTextBasedOnInput
struct UWid_FoodPanel_Tutorial_C_UpdateTextBasedOnInput_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LastInputWasFromGamepad_Gamepad;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_688[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x8(0x18)(ConstParm)
	bool                                         CallFunc_LastInputWasFromGamepad_Gamepad_1;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_68D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x28(0x18)(ConstParm)
	class FText                                  K2Node_Select_Default_2;                           // 0x40(0x18)(ConstParm)
	class FText                                  CallFunc_KeyToIcon_OutText;                        // 0x58(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function wid_FoodPanel_Tutorial.wid_FoodPanel_Tutorial_C.PreConstruct
struct UWid_FoodPanel_Tutorial_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_FoodPanel_Tutorial.wid_FoodPanel_Tutorial_C.InputDeviceChanged
struct UWid_FoodPanel_Tutorial_C_InputDeviceChanged_Params
{
public:
	bool                                         NewInputIsGamepad;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function wid_FoodPanel_Tutorial.wid_FoodPanel_Tutorial_C.ExecuteUbergraph_wid_FoodPanel_Tutorial
struct UWid_FoodPanel_Tutorial_C_ExecuteUbergraph_wid_FoodPanel_Tutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_718[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGGameModeBase*                       CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_727[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGGameModeBase*                       CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_NewInputIsGamepad;              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


