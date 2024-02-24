#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB41 (0xFF9 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C
class UWBP_ActionSlots_Popup_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             BU_Apply;                                          // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             BU_Close;                                          // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Item_Icon;                                     // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_Description;                                   // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Sb_Slots;                                          // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TB_OverridesOnlyMessage;                           // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Action_Title;                                  // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlots_Item_C*               WBP_ActionSlots_Slot_0;                            // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlots_Item_C*               WBP_ActionSlots_Slot_1;                            // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlots_Item_C*               WBP_ActionSlots_Slot_2;                            // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StoragePanel_C*                   WBP_StoragePanel;                                  // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnApplyToItem;                                     // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                        Pad_6DFE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ApplyingItem;                                      // 0x530(0x2F0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FInventoryEntry                       PreviewResultItem;                                 // 0x820(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UNWXMenuDataEntry*                     MenuItemDataEntry;                                 // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSlotSelected;                                    // 0xB18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UNWXMenuDataEntry*                     IngredientSlot;                                    // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCancelApply;                                     // 0xB30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_ActionSlots_Item_C*               LastClickedSlot;                                   // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          StartCraft;                                        // 0xB48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCraftingRecipeReference              InfusionRecipe;                                    // 0xB50(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FInventoryEntry                       SelectedItem;                                      // 0xBC0(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bReopenOnClosed;                                   // 0xEB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMenuOpened;                                     // 0xEB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E3C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Playback_Speed;                                    // 0xEB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E40[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              SpellRecipe;                                       // 0xEC0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FCraftingRecipeReference              PerkRecipe;                                        // 0xF30(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EActionType                       ActionType;                                        // 0xFA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UItemDataAsset>         PerkDataAsset;                                     // 0xFA8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UItemDataAsset>         SpellDataAsset;                                    // 0xFD0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bSlotsFocused;                                     // 0xFF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ActionSlots_Popup_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_0(struct FInventoryEntry& InventoryEntry);
	void OnItemPressed(const struct FInventoryEntry& InventoryEntry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ActionSlots_Item_C* K2Node_DynamicCast_AsWBP_Action_Slots_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue);
	void ShouldCloseWindow(bool* bShouldClose, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetChildAt_IsValid, class UWidget* CallFunc_GetChildAt_ItemWidget);
	void Get_Slotted_Perk_Inventory_Entry(struct FInventoryEntry* PerkInventoryEntry, TArray<class UItemInstanceData*>& Temp_object_Variable, const struct FItemDataReference& CallFunc_MakeItemReferfenceFromDataAsset_ReturnValue, const struct FInstanceData_Perks& CallFunc_TryGetItemPerks_Perks, enum class EGetResult CallFunc_TryGetItemPerks_Branches, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FItemPerkDataReference>& K2Node_MakeArray_Array);
	void Get_Slotted_Spell_Inventory_Entry(class UWBP_ActionSlots_Item_C* Spell, struct FInventoryEntry* SpellInventoryEntry, TArray<class UItemInstanceData*>& Temp_object_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& K2Node_MakeArray_Array, const struct FItemDataReference& CallFunc_MakeItemReferfenceFromDataAsset_ReturnValue, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, bool K2Node_SwitchEnum_CmpSuccess);
	void Send_Perk_Telemetry(struct FInventoryEntry* ApplyingItem, struct FInventoryEntry* ApplyingPerk, struct FInventoryEntry* PreviousPerk, const struct FInventoryEntry& CallFunc_Get_Slotted_Perk_Inventory_Entry_PerkInventoryEntry, bool CallFunc_IsValid_ReturnValue);
	void Send_Spell_Telemetry(struct FInventoryEntry* ApplyingItem, struct FInventoryEntry* ApplyingSpell, struct FInventoryEntry* PreviousSpell, const struct FInventoryEntry& CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry, const struct FInventoryEntry& CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FInventoryEntry& CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry_2, bool CallFunc_IsValid_ReturnValue_2);
	void Send_Infusion_Telemetry(struct FInventoryEntry* ApplyingItem, struct FInventoryEntry* ApplyingInfusion, struct FInventoryEntry* PreviousInfusion, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void SendTelemetry(class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, const struct FInventoryEntry& CallFunc_Send_Perk_Telemetry_ApplyingItem, const struct FInventoryEntry& CallFunc_Send_Perk_Telemetry_ApplyingPerk, const struct FInventoryEntry& CallFunc_Send_Perk_Telemetry_PreviousPerk, const struct FInventoryEntry& CallFunc_Send_Spell_Telemetry_ApplyingItem, const struct FInventoryEntry& CallFunc_Send_Spell_Telemetry_ApplyingSpell, const struct FInventoryEntry& CallFunc_Send_Spell_Telemetry_PreviousSpell, const struct FInventoryEntry& CallFunc_Send_Infusion_Telemetry_ApplyingItem, const struct FInventoryEntry& CallFunc_Send_Infusion_Telemetry_ApplyingInfusion, const struct FInventoryEntry& CallFunc_Send_Infusion_Telemetry_PreviousInfusion, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_2, bool K2Node_SwitchEnum_CmpSuccess);
	void GetItemQualityFormatText(enum class EItemQuality ItemQuality, class FText* QualityMarkup, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ActionSlots_Item_C* K2Node_DynamicCast_AsWBP_Action_Slots_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	void OnInventoryItemSelected(bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanOverrideSimilarInfusion_OverrideOnly, enum class ESlateVisibility K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_GetChildAt_IsValid, class UWidget* CallFunc_GetChildAt_ItemWidget);
	void UpdateApplyButton(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_ActionSlots_Item_C* K2Node_DynamicCast_AsWBP_Action_Slots_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ApplyItem(class UBP_CraftingStationComponent_C* CraftingStation, const struct FCraftingRecipeReference& LRecipe, class ABP_Character_C* LCrafter, class ANWXPlayerController* LCrafterController, const struct FCraftingRecipeReference& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_1, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, enum class EActionType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue_1, const struct FCraftingRecipeReference& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_2, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void AddItemToSlot(int32 Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_ActionSlots_Item_C* K2Node_DynamicCast_AsWBP_Action_Slots_Item, bool K2Node_DynamicCast_bSuccess);
	void CreateBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void Initialize(enum class EActionType Temp_byte_Variable, TSubclassOf<class UWidgetInventoryEntryFilter> Temp_class_Variable, TSubclassOf<class UWidgetInventoryEntryFilter> Temp_class_Variable_1, TSubclassOf<class UWidgetInventoryEntryFilter> Temp_class_Variable_2, TSubclassOf<class UWidgetInventoryEntryFilter> Temp_class_Variable_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText CallFunc_Format_ReturnValue, enum class EActionType Temp_byte_Variable_1, const struct FGenericContainerCosmeticSettings& K2Node_MakeStruct_GenericContainerCosmeticSettings, class FText Temp_text_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TSubclassOf<class UWidgetInventoryEntryFilter> K2Node_Select_Default, class FText Temp_text_Variable_1, enum class EActionType CallFunc_GetInventoryActionType_Type, class FText Temp_text_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText Temp_text_Variable_3, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue);
	void RefreshSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_CraftingItem_SlotPanel_C* K2Node_DynamicCast_AsWBP_Crafting_Item_Slot_Panel, bool K2Node_DynamicCast_bSuccess);
	void UpdateText(class FText LToolQuality, class FText LItemQuality, class FText LToolName, class FText LIngredientName, const struct FCraftingRecipeReference& Temp_struct_Variable, const struct FCraftingRecipeReference& Temp_struct_Variable_1, const struct FInstanceData_Quality& CallFunc_TryGetItemQuality_Quality, enum class EGetResult CallFunc_TryGetItemQuality_Branches, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess, enum class EActionType Temp_byte_Variable, class FText CallFunc_GetItemQualityFormatText_QualityMarkup, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, enum class EItemQuality CallFunc_GetItemQuality_Return_Value, class FText CallFunc_GetItemQualityFormatText_QualityMarkup_1, class FText CallFunc_GetItemName_ReturnValue, class FText CallFunc_GetItemDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FCraftingRecipeReference& K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_GetItemName_ReturnValue_1, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Construct();
	void OnSlotClicked(int32 SlotIndex);
	void OnInternalOpened();
	void OnInternalClosed();
	void Destruct();
	void BndEvt__WBP_ActionSlots_Popup_BU_Apply_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ActionSlots_Popup_BU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_ActionSlots_Popup(int32 EntryPoint, bool CallFunc_ShouldCloseWindow_bShouldClose, int32 K2Node_CustomEvent_SlotIndex, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UWBP_ActionSlots_Item_C* K2Node_DynamicCast_AsWBP_Action_Slots_Item, bool K2Node_DynamicCast_bSuccess, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnCancelApply__DelegateSignature();
	void OnSlotSelected__DelegateSignature(int32 Index);
	void OnApplyToItem__DelegateSignature();
};

}


