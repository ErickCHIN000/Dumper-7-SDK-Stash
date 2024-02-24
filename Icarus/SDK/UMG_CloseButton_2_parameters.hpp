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
// Function UMG_CloseButton_2.UMG_CloseButton_2_C.SetDisabled
struct UUMG_CloseButton_2_C_SetDisabled_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B (0x2B - 0x0)
// Function UMG_CloseButton_2.UMG_CloseButton_2_C.Get_ButtonText_ColorAndOpacity_0
struct UUMG_CloseButton_2_C_Get_ButtonText_ColorAndOpacity_0_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UMG_CloseButton_2.UMG_CloseButton_2_C.SetTextStyle
struct UUMG_CloseButton_2_C_SetTextStyle_Params
{
public:
	bool                                         Bold;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Italic;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Font;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6F8 (0x6F8 - 0x0)
// Function UMG_CloseButton_2.UMG_CloseButton_2_C.SetButtonImages
struct UUMG_CloseButton_2_C_SetButtonImages_Params
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
// Function UMG_CloseButton_2.UMG_CloseButton_2_C.UpdateTextColour
struct UUMG_CloseButton_2_C_UpdateTextColour_Params
{
public:
	struct FLinearColor                          Colour;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UMG_CloseButton_2.UMG_CloseButton_2_C.SetTextSize
struct UUMG_CloseButton_2_C_SetTextSize_Params
{
public:
	int32                                        TextSize;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CloseButton_2.UMG_CloseButton_2_C.SetText
struct UUMG_CloseButton_2_C_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_CloseButton_2.UMG_CloseButton_2_C.PreConstruct
struct UUMG_CloseButton_2_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function UMG_CloseButton_2.UMG_CloseButton_2_C.ExecuteUbergraph_UMG_CloseButton_2
struct UUMG_CloseButton_2_C_ExecuteUbergraph_UMG_CloseButton_2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


