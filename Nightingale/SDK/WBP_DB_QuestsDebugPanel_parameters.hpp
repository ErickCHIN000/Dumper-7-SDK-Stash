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
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.GetQuestFilename
struct UWBP_DB_QuestsDebugPanel_C_GetQuestFilename_Params
{
public:
	struct FQuestAssetReference                  QuestAssetReference;                               // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                ReturnValue;                                       // 0x70(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                CallFunc_BreakSoftObjectPath_PathString;           // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBaseFilename_ReturnValue;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.GetQuestTrackerDebugInterface
struct UWBP_DB_QuestsDebugPanel_C_GetQuestTrackerDebugInterface_Params
{
public:
	TScriptInterface<class IQuestTrackerDebugInterface> QuestTrackerInterface;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerDebugInterface> K2Node_DynamicCast_AsQuest_Tracker_Debug_Interface; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xFC (0xFC - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.DoesQuestMatchFilter
struct UWBP_DB_QuestsDebugPanel_C_DoesQuestMatchFilter_Params
{
public:
	class FString                                Filter;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FQuest                                Quest;                                             // 0x10(0x98)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         DoesMatchFilterText;                               // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TrimmedFilter;                                     // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Trim_ReturnValue;                         // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue_1;                   // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.CreateEventBindings
struct UWBP_DB_QuestsDebugPanel_C_CreateEventBindings_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTrackerInterface_QuestTrackerInterface; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.GetQuestTrackerInterface
struct UWBP_DB_QuestsDebugPanel_C_GetQuestTrackerInterface_Params
{
public:
	TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> CallFunc_GetQuestTracker_self_CastInput;           // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue;              // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.UpdateAcceptedQuestsList
struct UWBP_DB_QuestsDebugPanel_C_UpdateAcceptedQuestsList_Params
{
public:
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTrackerInterface_QuestTrackerInterface; // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQuestAssetReference>          CallFunc_GetOngoingQuests_OutOngoingQuests;        // 0x10(0x10)(ReferenceParm)
};

// 0x148 (0x148 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.UpdateAllQuestsList
struct UWBP_DB_QuestsDebugPanel_C_UpdateAllQuestsList_Params
{
public:
	class FString                                FilterString;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FQuestAssetReference>          QuestAssetReferences;                              // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x30(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>               CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList; // 0x58(0x10)(ReferenceParm)
	struct FPrimaryAssetId                       CallFunc_Array_Get_Item;                           // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetObjectFromPrimaryAssetId_ReturnValue;  // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3103[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestDataAsset*                       K2Node_DynamicCast_AsQuest_Data_Asset;             // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3108[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UQuestDataAsset>        CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0xA0(0x28)(UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_310F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue; // 0xD0(0x70)(None)
	bool                                         CallFunc_DoesQuestMatchFilter_DoesMatchFilterText; // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_311B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.Completed_2577952E4321D4E259A1E0983559492E
struct UWBP_DB_QuestsDebugPanel_C_Completed_2577952E4321D4E259A1E0983559492E_Params
{
public:
	TArray<class UObject*>                       Loaded;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_AllQuestsList_K2Node_ComponentBoundEvent_2_OnQuestSelected__DelegateSignature
struct UWBP_DB_QuestsDebugPanel_C_BndEvt__WBP_DB_QuestsDebugPanel_AllQuestsList_K2Node_ComponentBoundEvent_2_OnQuestSelected__DelegateSignature_Params
{
public:
	struct FQuestAssetReference                  QuestAssetReference;                               // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x70 (0x70 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_AcceptedQuestsList_K2Node_ComponentBoundEvent_3_OnQuestSelected__DelegateSignature
struct UWBP_DB_QuestsDebugPanel_C_BndEvt__WBP_DB_QuestsDebugPanel_AcceptedQuestsList_K2Node_ComponentBoundEvent_3_OnQuestSelected__DelegateSignature_Params
{
public:
	struct FQuestAssetReference                  QuestAssetReference;                               // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x19 (0x19 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature
struct UWBP_DB_QuestsDebugPanel_C_BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature
struct UWBP_DB_QuestsDebugPanel_C_BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_CheckBox_130_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_DB_QuestsDebugPanel_C_BndEvt__WBP_DB_QuestsDebugPanel_CheckBox_130_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x460 (0x460 - 0x0)
// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.ExecuteUbergraph_WBP_DB_QuestsDebugPanel
struct UWBP_DB_QuestsDebugPanel_C_ExecuteUbergraph_WBP_DB_QuestsDebugPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3383[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       Temp_object_Variable;                              // 0x8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetSelectedQuest_HasSelectedQuest;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3389[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetSelectedQuest_SelectedQuest;           // 0x20(0x70)(None)
	bool                                         Temp_bool_Variable;                                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetQuestFilename_ReturnValue;             // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EQuestRequirementsPolicy          Temp_byte_Variable;                                // 0xA8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuestRequirementsPolicy          Temp_byte_Variable_1;                              // 0xA9(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>               CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList; // 0xF0(0x10)(ReferenceParm)
	TArray<class FName>                          Temp_name_Variable;                                // 0x100(0x10)(ConstParm, ReferenceParm)
	class UAsyncActionLoadPrimaryAssetList*      CallFunc_AsyncLoadPrimaryAssetList_ReturnValue;    // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  K2Node_ComponentBoundEvent_QuestAssetReference_1;  // 0x120(0x70)(None)
	struct FQuestAssetReference                  K2Node_ComponentBoundEvent_QuestAssetReference;    // 0x190(0x70)(None)
	bool                                         CallFunc_GetSelectedQuest_HasSelectedQuest_1;      // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C2[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetSelectedQuest_SelectedQuest_1;         // 0x210(0x70)(None)
	class FString                                CallFunc_GetQuestFilename_ReturnValue_1;           // 0x280(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x290(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UObject*>                       K2Node_CustomEvent_Loaded;                         // 0x2A0(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2B0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTrackerInterface_QuestTrackerInterface; // 0x2C0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelectedQuest_HasSelectedQuest_2;      // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D4[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetSelectedQuest_SelectedQuest_2;         // 0x2E0(0x70)(None)
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x350(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x370(0x18)(ConstParm)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerDebugInterface> CallFunc_GetQuestTrackerDebugInterface_QuestTrackerInterface; // 0x390(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuestRequirementsPolicy          K2Node_Select_Default;                             // 0x3A0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelectedQuest_HasSelectedQuest_3;      // 0x3A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E8[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetSelectedQuest_SelectedQuest_3;         // 0x3B0(0x70)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x420(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetQuestFilename_ReturnValue_2;           // 0x428(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x438(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x450(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x458(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


