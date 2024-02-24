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

// 0x37B (0x37B - 0x0)
// Function UMG_BooleanOption.UMG_BooleanOption_C.OnPreviewKeyDown
struct UUMG_BooleanOption_C_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_911[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x138(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x1F0(0xB8)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x2A8(0xB8)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsKeyEventFromAction_ReturnValue;         // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_91D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsKeyEventFromAction_ReturnValue_1;       // 0x379(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x37A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x268 (0x268 - 0x0)
// Function UMG_BooleanOption.UMG_BooleanOption_C.OnFocusReceived
struct UUMG_BooleanOption_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1B0(0xB8)(None)
};

// 0x29 (0x29 - 0x0)
// Function UMG_BooleanOption.UMG_BooleanOption_C.Get Off Text
struct UUMG_BooleanOption_C_Get_Off_Text_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	TArray<struct FGGSettingOption>              CallFunc_GetAvailableOptions_ReturnValue;          // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function UMG_BooleanOption.UMG_BooleanOption_C.Get On Text
struct UUMG_BooleanOption_C_Get_On_Text_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	TArray<struct FGGSettingOption>              CallFunc_GetAvailableOptions_ReturnValue;          // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UMG_BooleanOption.UMG_BooleanOption_C.ToggleOption
struct UUMG_BooleanOption_C_ToggleOption_Params
{
public:
	bool                                         CallFunc_GetSettingValueAsBool_ReturnValue;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_BooleanOption.UMG_BooleanOption_C.GetInitialWidgetFocus
struct UUMG_BooleanOption_C_GetInitialWidgetFocus_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function UMG_BooleanOption.UMG_BooleanOption_C.UpdateState
struct UUMG_BooleanOption_C_UpdateState_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSettingValueAsBool_ReturnValue;        // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A08[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Get_Off_Text_Text;                        // 0x8(0x18)(None)
	class FText                                  CallFunc_Get_On_Text_Text;                         // 0x20(0x18)(None)
	bool                                         Temp_bool_Variable_2;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A09[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A0B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x4C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A13[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x60(0x28)(None)
	class UTexture2D*                            K2Node_Select_Default_2;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_3;                           // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0xA0(0x28)(None)
};

// 0x8 (0x8 - 0x0)
// Function UMG_BooleanOption.UMG_BooleanOption_C.EnableOption
struct UUMG_BooleanOption_C_EnableOption_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A38[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_BooleanOption.UMG_BooleanOption_C.PreConstruct
struct UUMG_BooleanOption_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function UMG_BooleanOption.UMG_BooleanOption_C.ExecuteUbergraph_UMG_BooleanOption
struct UUMG_BooleanOption_C_ExecuteUbergraph_UMG_BooleanOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_ADB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSettingValueAsBool_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided; // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


