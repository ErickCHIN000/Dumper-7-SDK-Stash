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
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.Get_LoadGameButton_ToolTipWidget_0
struct UIngameMenuScreen_v3_C_Get_LoadGameButton_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.Get_SaveGameButton_ToolTipWidget_0
struct UIngameMenuScreen_v3_C_Get_SaveGameButton_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.Get_MainMenuTooltipWrapper_ToolTipWidget_0
struct UIngameMenuScreen_v3_C_Get_MainMenuTooltipWrapper_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.Get_GraphicsOptionsTooltipWrapper_ToolTipWidget_0
struct UIngameMenuScreen_v3_C_Get_GraphicsOptionsTooltipWrapper_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.Get_AdvancedTooltipWrapper_ToolTipWidget_0
struct UIngameMenuScreen_v3_C_Get_AdvancedTooltipWrapper_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.Get_AudioOptionsTooltipWrapper_ToolTipWidget_0
struct UIngameMenuScreen_v3_C_Get_AudioOptionsTooltipWrapper_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.Get_KeyBindingTooltipWrapper_ToolTipWidget_0
struct UIngameMenuScreen_v3_C_Get_KeyBindingTooltipWrapper_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.GetText_0
struct UIngameMenuScreen_v3_C_GetText_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetAppVersion_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)(None)
};

// 0x11 (0x11 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.FocusCurrentButton
struct UIngameMenuScreen_v3_C_FocusCurrentButton_Params
{
public:
	class USHGlobals*                            CallFunc_GetSHGlobals_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USHUserWidget*                         CallFunc_GetWidget_ReturnValue;                    // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B0 (0x1B0 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.OnFocusReceived
struct UIngameMenuScreen_v3_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
};

// 0x8 (0x8 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.Get_Quit_ToolTipWidget_0
struct UIngameMenuScreen_v3_C_Get_Quit_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.OnTooltip_Event_0
struct UIngameMenuScreen_v3_C_OnTooltip_Event_0_Params
{
public:
	class UWidget*                               Sender;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.CustomEvent
struct UIngameMenuScreen_v3_C_CustomEvent_Params
{
public:
	class UWidget*                               Sender;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.CustomEvent_1
struct UIngameMenuScreen_v3_C_CustomEvent_1_Params
{
public:
	int32                                        GroupIndex;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.OnWidgetSelectedEvent_Event_0
struct UIngameMenuScreen_v3_C_OnWidgetSelectedEvent_Event_0_Params
{
public:
	int32                                        GroupIndex;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.Tick
struct UIngameMenuScreen_v3_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x260 (0x260 - 0x0)
// Function IngameMenuScreen_v3.IngameMenuScreen_v3_C.ExecuteUbergraph_IngameMenuScreen_v3
struct UIngameMenuScreen_v3_C_ExecuteUbergraph_IngameMenuScreen_v3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_75C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x28(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x40(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x58(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x70(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x88(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_2;                // 0xA0(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0xB8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_3;                // 0xD0(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_4;            // 0xE8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_4;                // 0x100(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_5;            // 0x118(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_5;                // 0x130(0x18)(None)
	class UWidget*                               K2Node_CustomEvent_Sender_1;                       // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_6;            // 0x150(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_6;                // 0x168(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_7;            // 0x180(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_7;                // 0x198(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_8;            // 0x1B0(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_8;                // 0x1C8(0x18)(None)
	class USHUserWidget*                         CallFunc_GetSelectedWidget_ReturnValue;            // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_CustomEvent_Sender;                         // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_GroupIndex_1;                   // 0x1F0(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_77B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_GroupIndex;                     // 0x1F8(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x1FC(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USHUserWidget*                         CallFunc_GetSelectedWidget_ReturnValue_1;          // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x240(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x250(0x10)(ZeroConstructor, NoDestructor)
};

}
}


