#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x3F8 - 0x340)
// WidgetBlueprintGeneratedClass WBP_DB_POIList.WBP_DB_POIList_C
class UWBP_DB_POIList_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               IgnoreButton;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             IgnoreListView;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         IgnoreText;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             POIList;                                           // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RefreshButton;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         SearchBox;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBP_DB_POIListEntryData_C*>     POIDataList;                                       // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        IgnoreList;                                        // 0x388(0x10)(Edit, BlueprintVisible, Config, DisableEditOnInstance)
	TArray<class UBP_DB_POIIgnoreListEntryData_C*> POIIgnoreDataList;                                 // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, struct FPOIPlugNameList>         Plugs;                                             // 0x3A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_DB_POIList_C* GetDefaultObj();

	void TestSearchBox(const class FString& Pattern, bool* Matches, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void IsPOIInSearchBox(const class FString& POIName, int32 POIIndex, bool* MatchesSearchBox, bool Matches, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_TestSearchBox_Matches, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPOIPlugNameList& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_TestSearchBox_Matches_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsPoiIgnored(const class FString& InPOIName, bool* IsIgnored, bool bIsIgnored, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Unbind_Ignore_List_Child(class UUserWidget* InEntryWidget, class UWBP_DB_POIIgnoreListEntry_C* K2Node_DynamicCast_AsWBP_DB_POIIgnore_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void Delete_Entry_from_Ignore_List(const class FString& EntryToDelete, bool CallFunc_Array_RemoveItem_ReturnValue);
	void Bind_On_Delete_Entry(class UUserWidget* InEntryWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_DB_POIIgnoreListEntry_C* K2Node_DynamicCast_AsWBP_DB_POIIgnore_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void Save_POI_Ignore_Config(TArray<class FString>& InIgnoreList, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UNWXCheatManager* K2Node_DynamicCast_AsNWXCheat_Manager, bool K2Node_DynamicCast_bSuccess_1);
	void CreateIgnoreItemData(const class FString& Ignore_Substring, class UWBP_DB_POIList_C* ParentListWidget, class UBP_DB_POIIgnoreListEntryData_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void RefreshIgnoreList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CreateListItemData(const class FString& POI_name, int32 POI_Index, const struct FPOIPlugNameList& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UBP_DB_POIListEntryData_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Refresh_List(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UNWXCheatManager* K2Node_DynamicCast_AsNWXCheat_Manager, bool K2Node_DynamicCast_bSuccess_1, TMap<int32, struct FPOIPlugNameList> CallFunc_ListPOIs_OutPlugs, TArray<class FString>& CallFunc_ListPOIs_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsPOIInSearchBox_MatchesSearchBox, bool CallFunc_IsPoiIgnored_IsIgnored);
	void Construct();
	void BndEvt__WBP_DB_POIList_RefreshButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_POIList_SearchBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_DB_POIList_IgnoreButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_POIList_IgnoreText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_WBP_DB_POIList(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_ComponentBoundEvent_Text_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& Temp_string_Variable, int32 CallFunc_Array_Add_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


