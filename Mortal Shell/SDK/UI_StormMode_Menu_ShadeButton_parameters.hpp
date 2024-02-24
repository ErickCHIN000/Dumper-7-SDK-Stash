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

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.IsButtonEnabled
struct UUI_StormMode_Menu_ShadeButton_C_IsButtonEnabled_Params
{
public:
	bool                                         Enabled_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x139 (0x139 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.UpdateShadeAbility
struct UUI_StormMode_Menu_ShadeButton_C_UpdateShadeAbility_Params
{
public:
	enum class EArmorTypes                       Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_850[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_2;                            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_3;                            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_4;                            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_5;                            // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetShadeAbilityText_ReturnValue;          // 0x68(0x18)(None)
	TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu;          // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_GetSelectedCharacter_Character;           // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_862[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(None)
	int32                                        CallFunc_Array_Get_Item;                           // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_ShadeAbility                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x100(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_876[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.GetShadeAbilityText
struct UUI_StormMode_Menu_ShadeButton_C_GetShadeAbilityText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x2 (0x2 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.ArrowVisibility
struct UUI_StormMode_Menu_ShadeButton_C_ArrowVisibility_Params
{
public:
	bool                                         Custom;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  ArrowsVisibility;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.SetCurrentSettingValue
struct UUI_StormMode_Menu_ShadeButton_C_SetCurrentSettingValue_Params
{
public:
	class FText                                  CallFunc_Array_Get_Item;                           // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.UpdateValue
struct UUI_StormMode_Menu_ShadeButton_C_UpdateValue_Params
{
public:
	class FText                                  CallFunc_Array_Get_Item;                           // 0x0(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.SetHighlighted
struct UUI_StormMode_Menu_ShadeButton_C_SetHighlighted_Params
{
public:
	bool                                         Highlighted;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8E7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8EB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    K2Node_Select_Default_1;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.ForceSelectButton
struct UUI_StormMode_Menu_ShadeButton_C_ForceSelectButton_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.EnableOrDisableButton
struct UUI_StormMode_Menu_ShadeButton_C_EnableOrDisableButton_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.NavVertical
struct UUI_StormMode_Menu_ShadeButton_C_NavVertical_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.NavHorizontal
struct UUI_StormMode_Menu_ShadeButton_C_NavHorizontal_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.OverrideCurrentValue
struct UUI_StormMode_Menu_ShadeButton_C_OverrideCurrentValue_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.PreConstruct
struct UUI_StormMode_Menu_ShadeButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.SelectButton
struct UUI_StormMode_Menu_ShadeButton_C_SelectButton_Params
{
public:
	bool                                         Select_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.HighlightButton
struct UUI_StormMode_Menu_ShadeButton_C_HighlightButton_Params
{
public:
	bool                                         Highlight_;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.SetParentRef
struct UUI_StormMode_Menu_ShadeButton_C_SetParentRef_Params
{
public:
	class UWidget*                               Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.UpdateSettingValues
struct UUI_StormMode_Menu_ShadeButton_C_UpdateSettingValues_Params
{
public:
	TArray<class FText>                          Values;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.UpdateSettingName
struct UUI_StormMode_Menu_ShadeButton_C_UpdateSettingName_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3C (0x3C - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.Tick
struct UUI_StormMode_Menu_ShadeButton_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.UpdateIndexes
struct UUI_StormMode_Menu_ShadeButton_C_UpdateIndexes_Params
{
public:
	TArray<int32>                                Indexes;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x10C (0x10C - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.ExecuteUbergraph_UI_StormMode_Menu_ShadeButton
struct UUI_StormMode_Menu_ShadeButton_C_ExecuteUbergraph_UI_StormMode_Menu_ShadeButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A99[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_Event_Indexes;                              // 0x8(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AA1[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AA6[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_Select;                               // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_Enable;                               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AB6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Delta_1;                              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Delta;                                // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Index;                                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AC0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Select_;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_Highlight_;                           // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AC6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Event_Parent;                               // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          K2Node_Event_Values;                               // 0x78(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_1;            // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_1;                      // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AD5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue_2;            // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Text;                                 // 0xA0(0x18)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xB8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScrollOffset_ReturnValue;              // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AEA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C.OnSettingConfirmed__DelegateSignature
struct UUI_StormMode_Menu_ShadeButton_C_OnSettingConfirmed__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


