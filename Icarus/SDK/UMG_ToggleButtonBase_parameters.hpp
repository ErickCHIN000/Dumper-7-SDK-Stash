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

// 0x728 (0x728 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.VisuallyToggleButton
struct UUMG_ToggleButtonBase_C_VisuallyToggleButton_Params
{
public:
	bool                                         VisualToggledState;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B36[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               CallFunc_GetImageButton_ImageButton;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromMaterial_ReturnValue;        // 0x18(0x88)(None)
	struct FSlateBrush                           CallFunc_MakeBrushFromMaterial_ReturnValue_1;      // 0xA0(0x88)(None)
	struct FSlateBrush                           CallFunc_MakeBrushFromMaterial_ReturnValue_2;      // 0x128(0x88)(None)
	struct FSlateBrush                           CallFunc_MakeBrushFromMaterial_ReturnValue_3;      // 0x1B0(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x238(0x278)(None)
	struct FButtonStyle                          K2Node_Select_Default;                             // 0x4B0(0x278)(None)
};

// 0x80 (0x80 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetDisabledTextColour
struct UUMG_ToggleButtonBase_C_GetDisabledTextColour_Params
{
public:
	struct FSlateColor                           Colour;                                            // 0x0(0x28)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetDisabledTextColour_Colour;             // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default;                             // 0x58(0x28)(None)
};

// 0x80 (0x80 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetPressedTextColour
struct UUMG_ToggleButtonBase_C_GetPressedTextColour_Params
{
public:
	struct FSlateColor                           Colour;                                            // 0x0(0x28)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetPressedTextColour_Colour;              // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default;                             // 0x58(0x28)(None)
};

// 0x80 (0x80 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetHoveredTextColour
struct UUMG_ToggleButtonBase_C_GetHoveredTextColour_Params
{
public:
	struct FSlateColor                           Colour;                                            // 0x0(0x28)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetHoveredTextColour_Colour;              // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default;                             // 0x58(0x28)(None)
};

// 0x80 (0x80 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetNormalTextColour
struct UUMG_ToggleButtonBase_C_GetNormalTextColour_Params
{
public:
	struct FSlateColor                           Colour;                                            // 0x0(0x28)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetNormalTextColour_Colour;               // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default;                             // 0x58(0x28)(None)
};

// 0x49 (0x49 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.UntoggleOthers
struct UUMG_ToggleButtonBase_C_UntoggleOthers_Params
{
public:
	class UPanelWidget*                          InRadioParent;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StopSearching;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ToggleButtonBase_C*               K2Node_DynamicCast_AsUMG_Toggle_Button_Base;       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.SetToggled
struct UUMG_ToggleButtonBase_C_SetToggled_Params
{
public:
	bool                                         Toggled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D7B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D86[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.OnClickEvent
struct UUMG_ToggleButtonBase_C_OnClickEvent_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.ExecuteUbergraph_UMG_ToggleButtonBase
struct UUMG_ToggleButtonBase_C_ExecuteUbergraph_UMG_ToggleButtonBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2E18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_CustomEvent_Button;                         // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E2A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               CallFunc_GetImageButton_ImageButton;               // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.Untoggled__DelegateSignature
struct UUMG_ToggleButtonBase_C_Untoggled__DelegateSignature_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.Toggled__DelegateSignature
struct UUMG_ToggleButtonBase_C_Toggled__DelegateSignature_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


