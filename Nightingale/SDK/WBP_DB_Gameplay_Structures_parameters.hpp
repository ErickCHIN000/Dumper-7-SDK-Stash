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

// 0xA0 (0xA0 - 0x0)
// Function WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C.CreateStructureEntryWidget
struct UWBP_DB_Gameplay_Structures_C_CreateStructureEntryWidget_Params
{
public:
	struct FStructureAssetReference              StructureAssetReference;                           // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_DB_StructuresEntry_C*             CallFunc_Create_ReturnValue;                       // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x88(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C.RefreshStructureCountField
struct UWBP_DB_Gameplay_Structures_C_RefreshStructureCountField_Params
{
public:
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1707[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)(None)
};

// 0x519 (0x519 - 0x0)
// Function WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C.FillArrays
struct UWBP_DB_Gameplay_Structures_C_FillArrays_Params
{
public:
	struct FStructureAssetReference              CurrentStructure;                                  // 0x0(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FDataTableRowHandle                   LCurrentRow;                                       // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureDataFromStructureAssetReference_IsValid; // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1796[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        CallFunc_GetStructureDataFromStructureAssetReference_OutData; // 0xB0(0x3E0)(ContainsInstancedReference)
	struct FStructureAssetReference              CallFunc_Array_Get_Item;                           // 0x490(0x80)(HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x514(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C.StructuresToShow
struct UWBP_DB_Gameplay_Structures_C_StructuresToShow_Params
{
public:
	TArray<struct FStructureAssetReference>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x28 (0x28 - 0x0)
// Function WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C.Get_txt_header_ToolTipWidget_0
struct UWBP_DB_Gameplay_Structures_C_Get_txt_header_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(ConstParm)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C.SetSearchTimer
struct UWBP_DB_Gameplay_Structures_C_SetSearchTimer_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_TimerExistsHandle_ReturnValue;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5A0 (0x5A0 - 0x0)
// Function WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C.SearchStructureList
struct UWBP_DB_Gameplay_Structures_C_SearchStructureList_Params
{
public:
	struct FStructureAssetReference              CurrentStructureReference;                         // 0x0(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Tags;                                              // 0x80(0x20)(Edit, BlueprintVisible)
	enum class EItemQuality                      Quality;                                           // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureDataFromStructureAssetReference_IsValid; // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18E1[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        CallFunc_GetStructureDataFromStructureAssetReference_OutData; // 0xC0(0x3E0)(ContainsInstancedReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x4A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FStructureAssetReference>      CallFunc_StructuresToShow_ReturnValue;             // 0x4B0(0x10)(ReferenceParm)
	struct FStructureAssetReference              CallFunc_Array_Get_Item;                           // 0x4C0(0x80)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x540(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x558(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x56C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x56D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1907[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x570(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x580(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_190F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x59C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
struct UWBP_DB_Gameplay_Structures_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
struct UWBP_DB_Gameplay_Structures_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x188 (0x188 - 0x0)
// Function WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C.ExecuteUbergraph_WBP_DB_Gameplay_Structures
struct UWBP_DB_Gameplay_Structures_C_ExecuteUbergraph_WBP_DB_Gameplay_Structures_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x10(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x30(0x18)(ConstParm)
	bool                                         CallFunc_CheckIsCheatingAllowed_ReturnValue;       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x50(0x18)(None)
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState;          // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_UI_PersistenceComponent_C*         CallFunc_GetComponentByClass_ReturnValue;          // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState_1;        // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA0(0x18)(None)
	class UBP_UI_PersistenceComponent_C*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStructureAssetReference>      CallFunc_StructuresToShow_ReturnValue;             // 0xC0(0x10)(ReferenceParm)
	struct FS_DebugMenuSettings                  K2Node_MakeStruct_S_DebugMenuSettings;             // 0xD0(0x1D)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1AF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              CallFunc_Array_Get_Item;                           // 0xF0(0x80)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStructureAssetReference>      CallFunc_DebugGetAllStructureAssetReferences_StructureReferences; // 0x178(0x10)(ReferenceParm)
};

}
}


