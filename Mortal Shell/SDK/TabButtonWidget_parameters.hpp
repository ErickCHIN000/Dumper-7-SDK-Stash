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

// 0xD8 (0xD8 - 0x0)
// Function TabButtonWidget.TabButtonWidget_C.Get_ButtonText_ColorAndOpacity_0
struct UTabButtonWidget_C_Get_ButtonText_ColorAndOpacity_0_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	enum class ECheckBoxState                    Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D66[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Temp_struct_Variable;                              // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x58(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x80(0x28)(None)
	enum class ECheckBoxState                    CallFunc_GetCheckedState_ReturnValue;              // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D76[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0xB0(0x28)(None)
};

// 0x1 (0x1 - 0x0)
// Function TabButtonWidget.TabButtonWidget_C.PreConstruct
struct UTabButtonWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function TabButtonWidget.TabButtonWidget_C.ExecuteUbergraph_TabButtonWidget
struct UTabButtonWidget_C_ExecuteUbergraph_TabButtonWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TabButtonWidget.TabButtonWidget_C.OnTabClicked__DelegateSignature
struct UTabButtonWidget_C_OnTabClicked__DelegateSignature_Params
{
public:
	int32                                        TabIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


