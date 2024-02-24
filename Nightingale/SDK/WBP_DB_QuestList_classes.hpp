#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x360 - 0x340)
// WidgetBlueprintGeneratedClass WBP_DB_QuestList.WBP_DB_QuestList_C
class UWBP_DB_QuestList_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UListView*                             QuestsList;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnQuestSelected;                                   // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_DB_QuestList_C* GetDefaultObj();

	void ClearSelection();
	void GetSelectedQuest(bool* HasSelectedQuest, struct FQuestAssetReference* SelectedQuest, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, int32 CallFunc_BP_GetNumItemsSelected_ReturnValue, class UBP_DB_QuestListEntryData_C* K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SetListItems(TArray<struct FQuestAssetReference>& QuestAssetReferences, const TArray<class UBP_DB_QuestListEntryData_C*>& QuestDataObjects, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQuestAssetReference& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_DB_QuestListEntryData_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void BndEvt__WBP_DB_QuestList_QuestsList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void ExecuteUbergraph_WBP_DB_QuestList(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UBP_DB_QuestListEntryData_C* K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data, bool K2Node_DynamicCast_bSuccess);
	void OnQuestSelected__DelegateSignature(const struct FQuestAssetReference& QuestAssetReference);
};

}


