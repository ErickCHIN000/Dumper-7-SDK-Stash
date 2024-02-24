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
// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.StopInsightsTrace
struct UWBP_DB_Performance_General_C_StopInsightsTrace_Params
{
public:
	bool                                         Succeeded;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StopTracing_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.StartInsightsTrace
struct UWBP_DB_Performance_General_C_StartInsightsTrace_Params
{
public:
	bool                                         Succeeded;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTracing_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetNWXPlayerController_ReturnValue;       // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9C (0x9C - 0x0)
// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.UpdateButtonColors
struct UWBP_DB_Performance_General_C_UpdateButtonColors_Params
{
public:
	class UButton*                               SelectedButton;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UButton*>                       DeSelectedButtons;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       UnSelectableButtons;                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4917[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_491E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4926[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_492D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UButton*                               CallFunc_Array_Get_Item_1;                         // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4936[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x6C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue_1;    // 0x7C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue_2;    // 0x8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.UpdateNetworkEmulationProfile
struct UWBP_DB_Performance_General_C_UpdateNetworkEmulationProfile_Params
{
public:
	class FString                                EmulationOption;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                EmulationCommand;                                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.BndEvt__WBP_DB_Performance_General_CB_TraceLengthSeconds_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
struct UWBP_DB_Performance_General_C_BndEvt__WBP_DB_Performance_General_CB_TraceLengthSeconds_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x142 (0x142 - 0x0)
// Function WBP_DB_Performance_General.WBP_DB_Performance_General_C.ExecuteUbergraph_WBP_DB_Performance_General
struct UWBP_DB_Performance_General_C_ExecuteUbergraph_WBP_DB_Performance_General_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A39[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentNetworkEmulationProfileName_ReturnValue; // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UButton*>                       K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_1;                          // 0x38(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_2;                          // 0x48(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_3;                          // 0x58(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_4;                          // 0x68(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_5;                          // 0x78(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_6;                          // 0x88(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_7;                          // 0x98(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_8;                          // 0xA8(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_StartInsightsTrace_Succeeded;             // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StopInsightsTrace_Succeeded;              // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTracing_ReturnValue;                    // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A63[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UButton*>                       K2Node_MakeArray_Array_9;                          // 0xC0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_10;                         // 0xD0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_11;                         // 0xE0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_12;                         // 0xF0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_13;                         // 0x100(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_14;                         // 0x110(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UButton*>                       K2Node_MakeArray_Array_15;                         // 0x120(0x10)(ReferenceParm, ContainsInstancedReference)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem;           // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType;          // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess_1;                  // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


