#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x410 - 0x340)
// WidgetBlueprintGeneratedClass WBP_DB_ResourceHarvest.WBP_DB_ResourceHarvest_C
class UWBP_DB_ResourceHarvest_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                      ResourceFilter;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ResourceListView;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            TABLE_RESOURCE;                                    // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FResourceData                         CurrentResourceData;                               // 0x360(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  OldResourceText;                                   // 0x3E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bInitialized;                                      // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_673B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObjectWrapper_ResourceData*>   Resources;                                         // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_DB_ResourceHarvest_C* GetDefaultObj();

	void FilterResources(class FText NewFilter, class UObjectWrapper_ResourceData* LCurrentResource, const TArray<class UObject*>& LResourcesToDisplay, bool bLShowResource, const TArray<class UWidget*>& LWidgetsToFilter, const TArray<class FString>& LFilterText, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UObjectWrapper_ResourceData* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue);
	void InitializeResourceDrops(class UObjectWrapper_ResourceData* LCurrentWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_MathExpression_ReturnValue, class UObjectWrapper_ResourceData* CallFunc_SpawnObject_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FResourceData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Construct();
	void BndEvt__WBP_DB_ResourceHarvest_ResourceFilter_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void ExecuteUbergraph_WBP_DB_ResourceHarvest(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text);
};

}


