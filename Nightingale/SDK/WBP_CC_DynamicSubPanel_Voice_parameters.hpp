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
// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.BP_GetDesiredFocusTarget
struct UWBP_CC_DynamicSubPanel_Voice_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1EC (0x1EC - 0x0)
// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.GetVoicesSorted
struct UWBP_CC_DynamicSubPanel_Voice_C_GetVoicesSorted_Params
{
public:
	TArray<struct FVoiceSetDataReference>        Output_Get;                                        // 0x0(0x10)(Parm, OutParm)
	TArray<struct FVoiceSetDataReference>        NewLocalVar_0;                                     // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<class FString>                        NewLocalVar;                                       // 0x20(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A27[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A2E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetDataReference                CallFunc_Array_Get_Item;                           // 0x60(0x60)(HasGetValueTypeHash)
	struct FVoiceSetData                         CallFunc_TryGetVoiceSetData_OutData;               // 0xC0(0x20)(None)
	enum class EGetResult                        CallFunc_TryGetVoiceSetData_OutBranches;           // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A3B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetDataReference                CallFunc_Array_Get_Item_1;                         // 0x100(0x60)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetData                         CallFunc_TryGetVoiceSetData_OutData_1;             // 0x168(0x20)(None)
	enum class EGetResult                        CallFunc_TryGetVoiceSetData_OutBranches_1;         // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A61[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_IncreasingStringSort_ReturnValue;         // 0x1B0(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x1D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A6B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVoiceSetDataReference>        CallFunc_GetAllVoiceSetDataReferences_OutReferences; // 0x1D8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.TriggerAudio
struct UWBP_CC_DynamicSubPanel_Voice_C_TriggerAudio_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBodyType                         Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBodyType                         Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBodyType                         K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.CollectPanelValues
struct UWBP_CC_DynamicSubPanel_Voice_C_CollectPanelValues_Params
{
public:
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> OutValues;                                         // 0x0(0x50)(Parm, OutParm)
	class FString                                OutPanelName;                                      // 0x50(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetUID_ReturnValue;                       // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVoiceSetDataReference                CallFunc_GetVoiceSetData_Data;                     // 0x70(0x60)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_GuidToString_ReturnValue;            // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetUID_ReturnValue_1;                     // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_GuidToString_ReturnValue_1;          // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs; // 0x100(0x20)(None)
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map;                                // 0x120(0x50)(None)
};

// 0x60 (0x60 - 0x0)
// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.CacheStartingPanelValues
struct UWBP_CC_DynamicSubPanel_Voice_C_CacheStartingPanelValues_Params
{
public:
	struct FVoiceSetDataReference                CallFunc_GetVoiceSetData_Data;                     // 0x0(0x60)(HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.GetTooltipWidget
struct UWBP_CC_DynamicSubPanel_Voice_C_GetTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.RefreshSelectedOption
struct UWBP_CC_DynamicSubPanel_Voice_C_RefreshSelectedOption_Params
{
public:
	class FText                                  L_Details_Extreme;                                 // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  L_Details_Hard;                                    // 0x18(0x18)(Edit, BlueprintVisible)
	class FText                                  L_Details_Med;                                     // 0x30(0x18)(Edit, BlueprintVisible)
	class FText                                  L_Details_Easy;                                    // 0x48(0x18)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVoiceSetDataReference>        CallFunc_GetVoicesSorted_Output_Get;               // 0x68(0x10)(ReferenceParm)
	uint8                                        Pad_3C50[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetDataReference                CallFunc_Array_Get_Item;                           // 0x80(0x60)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetData                         CallFunc_TryGetVoiceSetData_OutData;               // 0xE8(0x20)(None)
	enum class EGetResult                        CallFunc_TryGetVoiceSetData_OutBranches;           // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C70[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetDataReference                CallFunc_GetVoiceSetData_Data;                     // 0x110(0x60)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetData                         CallFunc_TryGetVoiceSetData_OutData_1;             // 0x178(0x20)(None)
	enum class EGetResult                        CallFunc_TryGetVoiceSetData_OutBranches_1;         // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C87[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C9C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.PreConstruct
struct UWBP_CC_DynamicSubPanel_Voice_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_6_PickerEntryUpdated__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Voice_C_BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_6_PickerEntryUpdated__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD4 (0xD4 - 0x0)
// Function WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Voice
struct UWBP_CC_DynamicSubPanel_Voice_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Voice_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVoiceSetDataReference>        CallFunc_GetAllVoiceSetDataReferences_OutReferences; // 0x20(0x10)(ReferenceParm)
	struct FVoiceSetDataReference                CallFunc_Array_Get_Item;                           // 0x30(0x60)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetData                         CallFunc_TryGetVoiceSetData_OutData;               // 0x98(0x20)(None)
	enum class EGetResult                        CallFunc_TryGetVoiceSetData_OutBranches;           // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DD7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0xC0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


