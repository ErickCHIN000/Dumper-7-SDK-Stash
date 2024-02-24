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
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.IsButtonEnabled
struct UUI_StormMode_SeedButton_C_IsButtonEnabled_Params
{
public:
	bool                                         Enabled_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.HandleNumber
struct UUI_StormMode_SeedButton_C_HandleNumber_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_886[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.GetTextAsIntString
struct UUI_StormMode_SeedButton_C_GetTextAsIntString_Params
{
public:
	class FString                                Number;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.SetHighlighted
struct UUI_StormMode_SeedButton_C_SetHighlighted_Params
{
public:
	bool                                         Highlighted;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8BC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.HighlightButton
struct UUI_StormMode_SeedButton_C_HighlightButton_Params
{
public:
	bool                                         Highlight_;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.SelectButton
struct UUI_StormMode_SeedButton_C_SelectButton_Params
{
public:
	bool                                         Select_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.SetParentRef
struct UUI_StormMode_SeedButton_C_SetParentRef_Params
{
public:
	class UWidget*                               Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.UpdateSettingValues
struct UUI_StormMode_SeedButton_C_UpdateSettingValues_Params
{
public:
	TArray<class FText>                          Values;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.UpdateSettingName
struct UUI_StormMode_SeedButton_C_UpdateSettingName_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.ForceSelectButton
struct UUI_StormMode_SeedButton_C_ForceSelectButton_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.EnableOrDisableButton
struct UUI_StormMode_SeedButton_C_EnableOrDisableButton_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.NavVertical
struct UUI_StormMode_SeedButton_C_NavVertical_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.NavHorizontal
struct UUI_StormMode_SeedButton_C_NavHorizontal_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.OverrideCurrentValue
struct UUI_StormMode_SeedButton_C_OverrideCurrentValue_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.UpdateIndexes
struct UUI_StormMode_SeedButton_C_UpdateIndexes_Params
{
public:
	TArray<int32>                                Indexes;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.PreConstruct
struct UUI_StormMode_SeedButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function UI_StormMode_SeedButton.UI_StormMode_SeedButton_C.ExecuteUbergraph_UI_StormMode_SeedButton
struct UUI_StormMode_SeedButton_C_ExecuteUbergraph_UI_StormMode_SeedButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_Highlight_;                           // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_Select_;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ABE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Event_Parent;                               // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          K2Node_Event_Values;                               // 0x18(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Text;                                 // 0x28(0x18)(None)
	bool                                         K2Node_Event_Select;                               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_Enable;                               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AD0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Delta_1;                              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Delta;                                // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Index;                                // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                K2Node_Event_Indexes;                              // 0x50(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AF1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x68(0x18)(None)
};

}
}


