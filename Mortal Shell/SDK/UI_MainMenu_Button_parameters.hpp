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

// 0xA8 (0xA8 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.GetDisabledColor
struct UUI_MainMenu_Button_C_GetDisabledColor_Params
{
public:
	struct FSlateColor                           OtherColor;                                        // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                           ReturnValue;                                       // 0x28(0x28)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x58(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default;                             // 0x80(0x28)(None)
};

// 0x58 (0x58 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_SetDisabled
struct UUI_MainMenu_Button_C_MMB_SetDisabled_Params
{
public:
	bool                                         IsDisabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FSlateColor                           CallFunc_GetDisabledColor_ReturnValue;             // 0x30(0x28)(None)
};

// 0x50 (0x50 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_SetFontSize
struct UUI_MainMenu_Button_C_MMB_SetFontSize_Params
{
public:
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x0(0x50)(HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_Unavailable
struct UUI_MainMenu_Button_C_MMB_Unavailable_Params
{
public:
	bool                                         IsUnavailable;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E55[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x58(0x28)(None)
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetDisabledColor_ReturnValue;             // 0x90(0x28)(None)
};

// 0x50 (0x50 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_Deselected
struct UUI_MainMenu_Button_C_MMB_Deselected_Params
{
public:
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x0(0x28)(None)
	struct FSlateColor                           CallFunc_GetDisabledColor_ReturnValue;             // 0x28(0x28)(None)
};

// 0x58 (0x58 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_Selected
struct UUI_MainMenu_Button_C_MMB_Selected_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FSlateColor                           CallFunc_GetDisabledColor_ReturnValue;             // 0x30(0x28)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_Blink_Stop
struct UUI_MainMenu_Button_C_MMB_Blink_Stop_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FSlateColor                           CallFunc_GetDisabledColor_ReturnValue;             // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x58(0x28)(None)
	struct FSlateColor                           CallFunc_GetDisabledColor_ReturnValue_1;           // 0x80(0x28)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_Blink_Start
struct UUI_MainMenu_Button_C_MMB_Blink_Start_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_SetTextValue
struct UUI_MainMenu_Button_C_MMB_SetTextValue_Params
{
public:
	class FText                                  CallFunc_TextToLower_ReturnValue;                  // 0x0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.PreConstruct
struct UUI_MainMenu_Button_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.ExecuteUbergraph_UI_MainMenu_Button
struct UUI_MainMenu_Button_C_ExecuteUbergraph_UI_MainMenu_Button_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_205D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_206B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.Unhovered__DelegateSignature
struct UUI_MainMenu_Button_C_Unhovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.Hovered__DelegateSignature
struct UUI_MainMenu_Button_C_Hovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_MainMenu_Button.UI_MainMenu_Button_C.Clicked__DelegateSignature
struct UUI_MainMenu_Button_C_Clicked__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


