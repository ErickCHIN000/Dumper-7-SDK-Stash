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

// 0x2 (0x2 - 0x0)
// Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetDisabled
struct UUMG_ButtonIcon_C_SetDisabled_Params
{
public:
	bool                                         Disabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B (0x2B - 0x0)
// Function UMG_ButtonIcon.UMG_ButtonIcon_C.Get_ButtonText_ColorAndOpacity_0
struct UUMG_ButtonIcon_C_Get_ButtonText_ColorAndOpacity_0_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetTextStyle
struct UUMG_ButtonIcon_C_SetTextStyle_Params
{
public:
	bool                                         Bold;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Italic;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1657[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Font;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6F8 (0x6F8 - 0x0)
// Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetButtonImages
struct UUMG_ButtonIcon_C_SetButtonImages_Params
{
public:
	class UMaterialInstance*                     Normal;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Hovered;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Pressed;                                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Disabled;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           DisabledBrush;                                     // 0x20(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           PressedBrush;                                      // 0xA8(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           NormalBrush;                                       // 0x130(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           HoveredBrush;                                      // 0x1B8(0x88)(Edit, BlueprintVisible)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_3;               // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x260(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x2E8(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x370(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x3F8(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x480(0x278)(None)
};

// 0x10 (0x10 - 0x0)
// Function UMG_ButtonIcon.UMG_ButtonIcon_C.UpdateTextColour
struct UUMG_ButtonIcon_C_UpdateTextColour_Params
{
public:
	struct FLinearColor                          Colour;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetTextSize
struct UUMG_ButtonIcon_C_SetTextSize_Params
{
public:
	int32                                        TextSize;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_ButtonIcon.UMG_ButtonIcon_C.SetText
struct UUMG_ButtonIcon_C_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ButtonIcon.UMG_ButtonIcon_C.PreConstruct
struct UUMG_ButtonIcon_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function UMG_ButtonIcon.UMG_ButtonIcon_C.ExecuteUbergraph_UMG_ButtonIcon
struct UUMG_ButtonIcon_C_ExecuteUbergraph_UMG_ButtonIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_171B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1720[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


