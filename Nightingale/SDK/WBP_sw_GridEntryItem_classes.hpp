#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x418 (0x7A8 - 0x390)
// WidgetBlueprintGeneratedClass WBP_sw_GridEntryItem.WBP_sw_GridEntryItem_C
class UWBP_sw_GridEntryItem_C : public UNWXGridEntryItemWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Quality;                                    // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_GamepadButton;                                 // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_GamepadButton_OptionsMenu;                     // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          DurabilityBar;                                     // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Hover;                                             // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Icon;                                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SelectionHightlight;                           // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgPipBorder_NPC;                                  // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgPipSquare_NPC;                                  // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgPipSquare_Player;                               // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Tooltip;                                   // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ItemLevel;                                     // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_stackCount;                                    // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              WeightIconOverlay;                                 // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            WeightValue;                                       // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GridItem_Selected;                                 // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            GridItem_Hovered;                                  // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class ELoadoutSlotType                  SlotType;                                          // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowStackCount;                                    // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_6B92[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            GridItem_DoubleClicked;                            // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            DragAndDrop;                                       // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                        Pad_6B9C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InventoryEntry;                                    // 0x460(0x2F0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector2D                             SizeOverride;                                      // 0x750(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseFloatyTooltip;                                  // 0x760(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_6BA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MouseButtonUp;                                     // 0x768(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SubContextMenuOpen;                                // 0x778(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Confirm;                                           // 0x788(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         AutoUpdateSelectedCosmetics;                       // 0x798(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_6BB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MenuDataEntry_Item_C*              MenuDataEntry;                                     // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_GridEntryItem_C* GetDefaultObj();

	void GetMenuDataEntry(class UNWXMenuDataEntry** NewParam);
	void EnableInputActionIcon(bool Enable);
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType, bool K2Node_SwitchEnum_CmpSuccess);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1);
	void GetInventoryEntry(struct FInventoryEntry* InventoryEntry);
	void SetPlayerEquippedPipVisibility(bool IsVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetNpcEquippedPipVisibility(bool IsVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetupEquipped(bool CallFunc_Is_Item_Equipped_Player_IsEquipped);
	void SetSelected(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Refresh(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UWBP_GridItem_Draggable_C* CallFunc_Create_ReturnValue, class UDragOperation_Item_C* CallFunc_CreateDragDropOperation_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_2, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnInputConfirm(const struct FEventReply& CallFunc_Handled_ReturnValue);
	void HandleConfirm(bool CallFunc_Is_Item_Equipped_Player_IsEquipped);
	void OnInventoryEntryUpdated(struct FInventoryEntry& UpdatedEntry, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBP_InventoryComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetupBindings(class UBP_InventoryComponent_C* LInventoryComp, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBP_InventoryComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Is_Item_Equipped_Player(bool* IsEquipped, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, bool CallFunc_IsInventoryEntryInToolbar_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TArray<struct FLoadoutSlot>& CallFunc_GetLoadoutSlots_LoadoutSlots, const struct FLoadoutSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	class UWidget* GetTooltipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue_1, bool CallFunc_CheckForValidItem_ItemValid, class FText Temp_text_Variable);
	void RefreshStackCount(bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void UpdateWeightCosmetic(bool ShowWeightIcon, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateDurability(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FItemInstanceDurabilityData& CallFunc_TryGetItemDurability_Durability, enum class EGetResult CallFunc_TryGetItemDurability_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& K2Node_Select_Default);
	void UpdateItemLevel(bool CallFunc_UI_ShowOrHideItemLevelForItem_bVisible, bool CallFunc_ui_Get_ItemDetails_byItemID_ItemFound, enum class ELoadoutSlotType CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType, enum class EItemQuality CallFunc_ui_Get_ItemDetails_byItemID_Quality, int32 CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount, class UClass* CallFunc_ui_Get_ItemDetails_byItemID_ItemActor, const struct FGameplayTagContainer& CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_GetItemLevel_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_Conv_DoubleToText_Value_ImplicitCast);
	void SetupItemDetails(class FText Description, class FText Name, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_ui_Get_ItemDetails_byItemID_ItemFound, enum class ELoadoutSlotType CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType, enum class EItemQuality CallFunc_ui_Get_ItemDetails_byItemID_Quality, int32 CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount, class UClass* CallFunc_ui_Get_ItemDetails_byItemID_ItemActor, const struct FGameplayTagContainer& CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, class FText CallFunc_GetItemName_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetItemWeight_OutStackWeight, float CallFunc_GetItemWeight_OutIndividualWeight, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_Conv_DoubleToText_Value_ImplicitCast);
	void SetupBackgroundColor(const struct FLinearColor& CallFunc_MakeColor_ReturnValue, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Destruct();
	void BP_OnEntryReleased();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void BndEvt__WBP_sw_GridEntryItem_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_sw_GridEntryItem_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_sw_GridEntryItem_CBU_GamepadButton_OptionsMenu_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_sw_GridEntryItem(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, bool CallFunc_IsValid_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UObject* K2Node_Event_ListItemObject, class UBP_MenuDataEntry_Item_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsSelected, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void Confirm__DelegateSignature(const struct FItemDataReference& ItemId, bool IsEquipped);
	void SubContextMenuOpen__DelegateSignature(const struct FItemDataReference& ItemId, bool IsEquipped);
	void MouseButtonUp__DelegateSignature(const struct FPointerEvent& Mouse_Event);
	void DragAndDrop__DelegateSignature(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item);
	void GridItem_DoubleClicked__DelegateSignature(const struct FInventoryEntry& ItemEntry);
	void GridItem_Hovered__DelegateSignature(bool HoverOn, const struct FInventoryEntry& ItemEntry);
	void GridItem_Selected__DelegateSignature(const struct FInventoryEntry& InventoryEntry);
};

}


