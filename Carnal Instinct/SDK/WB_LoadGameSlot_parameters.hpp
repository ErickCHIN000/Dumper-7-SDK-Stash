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

// 0x40 (0x40 - 0x0)
// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Get_OldSave_Text_0
struct UWB_LoadGameSlot_C_Get_OldSave_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BAE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_StringToFloat_ReturnValue;           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BB8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Get Quest Name
struct UWB_LoadGameSlot_C_Get_Quest_Name_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Set Border Color
struct UWB_LoadGameSlot_C_Set_Border_Color_Params
{
public:
	struct FLinearColor                          InBrushColor;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Get Save Type
struct UWB_LoadGameSlot_C_Get_Save_Type_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Get Date
struct UWB_LoadGameSlot_C_Get_Date_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue;  // 0x18(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WB_LoadGameSlot.WB_LoadGameSlot_C.OnAddedToFocusPath
struct UWB_LoadGameSlot_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WB_LoadGameSlot.WB_LoadGameSlot_C.ExecuteUbergraph_WB_LoadGameSlot
struct UWB_LoadGameSlot_C_ExecuteUbergraph_WB_LoadGameSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CA0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x8(0x8)(NoDestructor)
	class UTexture2D*                            CallFunc_ImportFileAsTexture2D_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


