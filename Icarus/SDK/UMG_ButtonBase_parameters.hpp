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
// Function UMG_ButtonBase.UMG_ButtonBase_C.GetImageButton
struct UUMG_ButtonBase_C_GetImageButton_Params
{
public:
	class UButton*                               ImageButton;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.GetButtonText
struct UUMG_ButtonBase_C_GetButtonText_Params
{
public:
	class UTextBlock*                            ButtonText;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.OnClicked
struct UUMG_ButtonBase_C_OnClicked_Params
{
public:
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.GetDisabledTextColour
struct UUMG_ButtonBase_C_GetDisabledTextColour_Params
{
public:
	struct FSlateColor                           Colour;                                            // 0x0(0x28)(Parm, OutParm)
};

// 0x28 (0x28 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.GetPressedTextColour
struct UUMG_ButtonBase_C_GetPressedTextColour_Params
{
public:
	struct FSlateColor                           Colour;                                            // 0x0(0x28)(Parm, OutParm)
};

// 0x28 (0x28 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.GetHoveredTextColour
struct UUMG_ButtonBase_C_GetHoveredTextColour_Params
{
public:
	struct FSlateColor                           Colour;                                            // 0x0(0x28)(Parm, OutParm)
};

// 0x28 (0x28 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.GetNormalTextColour
struct UUMG_ButtonBase_C_GetNormalTextColour_Params
{
public:
	struct FSlateColor                           Colour;                                            // 0x0(0x28)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.OnHover
struct UUMG_ButtonBase_C_OnHover_Params
{
public:
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.UpdateTextColour
struct UUMG_ButtonBase_C_UpdateTextColour_Params
{
public:
	struct FSlateColor                           TextColour;                                        // 0x0(0x28)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C14[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetHoveredTextColour_Colour;              // 0x30(0x28)(None)
	struct FSlateColor                           CallFunc_GetPressedTextColour_Colour;              // 0x58(0x28)(None)
	struct FSlateColor                           CallFunc_GetDisabledTextColour_Colour;             // 0x80(0x28)(None)
	struct FSlateColor                           CallFunc_GetNormalTextColour_Colour;               // 0xA8(0x28)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.SetTextColours
struct UUMG_ButtonBase_C_SetTextColours_Params
{
public:
	struct FSlateColor                           Normal;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                           Hover;                                             // 0x28(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                           Pressed;                                           // 0x50(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                           Disabled;                                          // 0x78(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3 (0x3 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.IsDisabled
struct UUMG_ButtonBase_C_IsDisabled_Params
{
public:
	bool                                         Disabled;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.SetDisabled
struct UUMG_ButtonBase_C_SetDisabled_Params
{
public:
	bool                                         Disabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.SetTextStyle
struct UUMG_ButtonBase_C_SetTextStyle_Params
{
public:
	bool                                         Bold;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Italic;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CA7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Font;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CAB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x18(0x58)(HasGetValueTypeHash)
};

// 0x710 (0x710 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.SetButtonImages
struct UUMG_ButtonBase_C_SetButtonImages_Params
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
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x250(0x88)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D07[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x2DC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D09[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x2E8(0x88)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_3;               // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x380(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x408(0x88)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D16[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x498(0x278)(None)
};

// 0x60 (0x60 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.SetTextSize
struct UUMG_ButtonBase_C_SetTextSize_Params
{
public:
	int32                                        TextSize;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D47[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x8(0x58)(HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.SetText
struct UUMG_ButtonBase_C_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x18(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.PreConstruct
struct UUMG_ButtonBase_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.ExecuteUbergraph_UMG_ButtonBase
struct UUMG_ButtonBase_C_ExecuteUbergraph_UMG_ButtonBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D92[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               CallFunc_GetImageButton_ImageButton;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D99[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x44(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x54(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_DAD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x68(0x28)(None)
	class UTextBlock*                            CallFunc_GetButtonText_ButtonText;                 // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ButtonBase.UMG_ButtonBase_C.Clicked__DelegateSignature
struct UUMG_ButtonBase_C_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


