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
// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.SetDisabled
struct UUMG_ExternalTitleButton_C_SetDisabled_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B (0x2B - 0x0)
// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.Get_ButtonText_ColorAndOpacity_0
struct UUMG_ExternalTitleButton_C_Get_ButtonText_ColorAndOpacity_0_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.SetTextStyle
struct UUMG_ExternalTitleButton_C_SetTextStyle_Params
{
public:
	bool                                         Bold;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Italic;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B9B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Font;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x10(0x58)(HasGetValueTypeHash)
};

// 0x6F0 (0x6F0 - 0x0)
// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.SetButtonImages
struct UUMG_ExternalTitleButton_C_SetButtonImages_Params
{
public:
	class UTexture*                              Normal;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Hovered;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Pressed;                                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Disabled;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           DisabledBrush;                                     // 0x20(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           PressedBrush;                                      // 0xA8(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           NormalBrush;                                       // 0x130(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           HoveredBrush;                                      // 0x1B8(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x240(0x88)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x2D8(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x360(0x88)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x3F0(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x478(0x278)(None)
};

// 0x38 (0x38 - 0x0)
// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.UpdateTextColour
struct UUMG_ExternalTitleButton_C_UpdateTextColour_Params
{
public:
	struct FLinearColor                          Colour;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x10(0x28)(None)
};

// 0x60 (0x60 - 0x0)
// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.SetTextSize
struct UUMG_ExternalTitleButton_C_SetTextSize_Params
{
public:
	int32                                        TextSize;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x8(0x58)(HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.SetText
struct UUMG_ExternalTitleButton_C_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x18(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.PreConstruct
struct UUMG_ExternalTitleButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UMG_ExternalTitleButton.UMG_ExternalTitleButton_C.ExecuteUbergraph_UMG_ExternalTitleButton
struct UUMG_ExternalTitleButton_C_ExecuteUbergraph_UMG_ExternalTitleButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EB8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


