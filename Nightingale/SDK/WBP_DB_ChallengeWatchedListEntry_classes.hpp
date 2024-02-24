#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x398 - 0x340)
// WidgetBlueprintGeneratedClass WBP_DB_ChallengeWatchedListEntry.WBP_DB_ChallengeWatchedListEntry_C
class UWBP_DB_ChallengeWatchedListEntry_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border;                                            // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChallengeDescription;                              // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChallengeName;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ConditionsDescription;                             // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Progress;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TaskConditionNames;                                // 0x370(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                ProgressString;                                    // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_ChallengeWatchedListEntry_C* GetDefaultObj();

	void RenderProgress(TScriptInterface<class IChallengeProgress> Progress, const class FString& Str, TSubclassOf<class IInterface> Temp_class_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TScriptInterface<class IChallengeDefinition> Temp_interface_Variable, TSoftObjectPtr<class UConditionBehaviour> CallFunc_GetCompletionCondition_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class FText CallFunc_GetTitle_ReturnValue, class UConditionBehaviour* K2Node_DynamicCast_AsCondition_Behaviour, bool K2Node_DynamicCast_bSuccess, const struct FTask& K2Node_MakeStruct_Task, class UBP_ChallengeConditionPresentationBuilder_C* CallFunc_SpawnObject_ReturnValue, const struct FConditionProgressDataList& CallFunc_GetProgressData_OutProgressData, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FConditionPersistentData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_GetMaxCount_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetCount_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const struct FConditionProgressDataList& CallFunc_GetProgressData_OutProgressData_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const struct FQuestTaskPresentationData& CallFunc_MakeTaskPresentationData_OutPresentationData, bool CallFunc_MakeTaskPresentationData_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const struct FQuestTaskConditionPresentationData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_Conv_IntToString_ReturnValue_6, const class FString& CallFunc_Conv_IntToString_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TScriptInterface<class IChallengeSystemObservable> K2Node_DynamicCast_AsChallenge_System_Observable, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Format_ReturnValue, TScriptInterface<class IChallengeDefinition> CallFunc_GetChallengeDefinition_ReturnValue);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_DB_ChallengeWatchedListEntry(int32 EntryPoint, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class IChallengeProgress> K2Node_DynamicCast_AsChallenge_Progress, bool K2Node_DynamicCast_bSuccess);
};

}


