#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x488 (0x7C8 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_Debug_ItemEntry.WBP_sw_Debug_ItemEntry_C
class UWBP_sw_Debug_ItemEntry_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    bu_grant;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_1;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              TraitCharBox;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_itemid;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Itemname;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ItemHovered;                                       // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ItemUnhovered;                                     // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBorder*                               PopupBorder;                                       // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AllowGranting_cheaterstore_;                       // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         GrantByStack;                                      // 0x3A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_71D9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ItemGranted;                                       // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                        Pad_71E3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    Item_ID;                                           // 0x3C0(0x80)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FGuid                                 Instance_ID;                                       // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ItemClicked;                                       // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        AmountToGrant_CheaterStore_;                       // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_71F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ItemName;                                          // 0x468(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FInventoryEntry                       InventoryItemEntry;                                // 0x480(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TestTags;                                          // 0x770(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsTestItem;                                        // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7217[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUserWidget*                        OwningScreen;                                      // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UCharacteristicDataAsset*>      SelectedCharacteristics;                           // 0x7A0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EItemQuality                      SelectedQuality;                                   // 0x7B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_722F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  Gameplay_Tags;                                     // 0x7B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_sw_Debug_ItemEntry_C* GetDefaultObj();

	void SetDefaultQuality(enum class EItemQuality LDefaultQuality, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_DefaultQuality& CallFunc_TryGetItemDataDefaultQuality_OutData, enum class EGetResult CallFunc_TryGetItemDataDefaultQuality_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void RefreshEntryAppearance();
	void UpdateItemName(bool Temp_bool_Variable, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default);
	void UpdateQualityBorder(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_, const struct FLinearColor& K2Node_Select_Default);
	void SetCharacteristics(TArray<class UCharacteristicDataAsset*>& NewCharacteristics, const TArray<struct FCharacteristicDataReference>& LDefaultCharacteristics, const struct FCharacteristicDataReference& LCurrentCharacteristicReference, class UCharacteristicDataAsset* LCurrentCharacteristic, const TArray<struct FCharacteristicDataReference>& LSecondaryCharacteristics, const struct FCharacteristicDataReference& LPrimaryCharacteristic, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCharacteristicDataReference& CallFunc_Array_Get_Item, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_DefaultCharacteristic& CallFunc_TryGetItemDataDefaultCharacteristic_OutData, enum class EGetResult CallFunc_TryGetItemDataDefaultCharacteristic_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FInstanceData_CharacteristicInfo& K2Node_MakeStruct_InstanceData_CharacteristicInfo, int32 CallFunc_Array_Add_ReturnValue, TSoftObjectPtr<class UCharacteristicDataAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FCharacteristicDataReference& CallFunc_MakeCharacteristicReferenceFromAsset_ReturnValue, class UCharacteristicDataAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void SetQuality(enum class EItemQuality NewQuality, const struct FInstanceData_Quality& K2Node_MakeStruct_InstanceData_Quality);
	void SetQuantityToGrant(int32 NewQuantity);
	void RefreshTraitBox(class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& Temp_struct_Variable, class UCharacteristicDataAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OpenTraitSelectPopup();
	class UWidget* GetTooltipWidget_0(class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue);
	void OpenGrantItemConfirmPopup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_PopupCheatGrantItem_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BndEvt__WBP_button_text_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void AddItem();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void OnGrantItemConfirmed(const struct FItemDataReference& ItemId, int32 Quantity_);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void TryOpenStackGrant();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_WBP_sw_Debug_ItemEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, TArray<class UItemInstanceData*>& Temp_object_Variable, TArray<class UCharacteristicDataAsset*>& Temp_object_Variable_1, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FItemDataReference& K2Node_CustomEvent_ItemID, int32 K2Node_CustomEvent_Quantity_, bool K2Node_Event_IsDesignTime, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FGameplayTagContainer& CallFunc_GetItemTags_Tags, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, double K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, const class FString& CallFunc_GetFunctionName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, class UBP_InventoryComponent_C* K2Node_DynamicCast_AsBP_Inventory_Component, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_Event_ListItemObject, class UObjectWrapper_ItemDataReference* K2Node_DynamicCast_AsObject_Wrapper_Item_Data_Reference, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void ItemClicked__DelegateSignature(const struct FItemDataReference& ItemId, const struct FGuid& InstanceID);
	void ItemGranted__DelegateSignature(const struct FItemDataReference& ItemId, int32 Count);
	void ItemUnhovered__DelegateSignature();
	void ItemHovered__DelegateSignature(const struct FItemDataReference& ItemId);
};

}


