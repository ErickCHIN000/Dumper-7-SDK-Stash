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
// Function wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C.UpdateLayout
struct UWid_MainMenu_Controls_Controller_C_UpdateLayout_Params
{
public:
	bool                                         IsPS4;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BA4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable;                          // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_1;                        // 0x30(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             K2Node_Select_Default;                             // 0x58(0x28)(UObjectWrapper, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C.UpdateControllerType
struct UWid_MainMenu_Controls_Controller_C_UpdateControllerType_Params
{
public:
	bool                                         CallFunc_IsPS4GamepadConnected_ReturnValue;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C.PreConstruct
struct UWid_MainMenu_Controls_Controller_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C.ExecuteUbergraph_wid_MainMenu_Controls_Controller
struct UWid_MainMenu_Controls_Controller_C_ExecuteUbergraph_wid_MainMenu_Controls_Controller_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_FormatText_Output;                        // 0x8(0x18)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor)
};

}
}


