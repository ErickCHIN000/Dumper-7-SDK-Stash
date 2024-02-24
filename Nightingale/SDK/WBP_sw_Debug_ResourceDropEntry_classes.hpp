#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x430 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_Debug_ResourceDropEntry.WBP_sw_Debug_ResourceDropEntry_C
class UWBP_sw_Debug_ResourceDropEntry_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    bu_grant;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_1;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_DropHandle;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_DropName;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         AllowGranting_cheaterstore_;                       // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_228[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DropName;                                          // 0x378(0x18)(Edit, BlueprintVisible)
	class UNWXUserWidget*                        OwningScreen;                                      // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ResourceDataHandle;                                // 0x398(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FResourceData                         ResourceData;                                      // 0x3A8(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UObjectWrapper_ResourceData*           ResourceWrapper;                                   // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_Debug_ResourceDropEntry_C* GetDefaultObj();

	void GrantLoot(const struct FInventoryEntry& CurrentEntryToSpawn, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, class UBP_InventoryComponent_C* K2Node_DynamicCast_AsBP_Inventory_Component, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem, TArray<struct FInventoryEntry>& CallFunc_GenerateItemRewardsFromRewardData_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BndEvt__WBP_button_text_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_WBP_sw_Debug_ResourceDropEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Conv_NameToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UObject* K2Node_Event_ListItemObject, class FText CallFunc_Conv_NameToText_ReturnValue_1, class UObjectWrapper_ResourceData* K2Node_DynamicCast_AsObject_Wrapper_Resource_Data, bool K2Node_DynamicCast_bSuccess);
};

}


