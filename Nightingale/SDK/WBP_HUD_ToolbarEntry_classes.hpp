#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x498 - 0x348)
// WidgetBlueprintGeneratedClass WBP_HUD_ToolbarEntry.WBP_HUD_ToolbarEntry_C
class UWBP_HUD_ToolbarEntry_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_OnSelect;                                     // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_ItemOptions;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_MoveItem;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          CooldownBar;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          DurabilityBar;                                     // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG_DmgBreak;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG_QualityColor;                               // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_GamepadItemToMoveHightligh;                    // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ItemIcon;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SelectionHightlight;                           // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ItemCount;                                     // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ItemLevel;                                     // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputActionPresentationWidget_C*  WBP_InputActionPresentationWidget;                 // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TScriptInterface<class IToolbarSlotEntryObjectInterface> SlotEntryObject;                                   // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ToolbarEntry_OnClicked;                            // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Index;                                             // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6ECC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ToolbarEntry_OnDragStarted;                        // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ToolbarEntry_OnDragCancelled;                      // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ToolbarEntry_OnDrop;                               // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ToolbarEntry_MouseButtonUp;                        // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ToolbarEntry_OpenContextMenu;                      // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ToolbarEntryHovered;                               // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ToolbarEntry_Selected;                             // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EToolbarArrangement               ToolbarType;                                       // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_6F3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInputAction*>                  SlotInputActionMappings;                           // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              DMIToolbarIcon;                                    // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowDragOperations;                               // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ToolbarEntry_GamepadItemMoveAction;                // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_HUD_ToolbarEntry_C* GetDefaultObj();

	void GetSlotEntryObject(TScriptInterface<class IToolbarSlotEntryObjectInterface>* SlotEntryObject);
	void DisableGamepadMoveHighlight();
	void ToggleEnabledState(bool IsEnabled, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void HideSlotNumberLabel();
	void UpdateUISelectionState(bool IsSelected, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double K2Node_Select_Default, float CallFunc_SetOpacity_InOpacity_ImplicitCast);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1);
	void PlayUnselectAnimation(bool Temp_bool_Variable, double Temp_real_Variable, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, double K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double K2Node_Select_Option_1_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast);
	void UnbindFromSlotEntryUpdates(class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PlaySelectAnimation(bool Temp_bool_Variable, double Temp_real_Variable, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, double K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double K2Node_Select_Option_1_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast);
	void ComputeQualityColor(struct FLinearColor* QualityColour, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_, class UToolbarEntryQualityCharacteristic* CallFunc_GetQualityCharacteristic_ReturnValue, enum class EItemQuality CallFunc_GetQuality_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear_1, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI__1);
	void OnToolbarEntryUpdated();
	void UpdateQuality(const struct FLinearColor& LocalQualityColor, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& CallFunc_ComputeQualityColor_QualityColour);
	void BindForSlotEntryUpdates(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UpdateSlotNumber(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UInputAction* CallFunc_Array_Get_Item, TSoftObjectPtr<class UInputAction> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue);
	void UpdateItemLevel(const struct FInventoryEntry& CurrentInventoryEntry, bool CallFunc_AreAutomatedTestsRunning_ReturnValue);
	void UpdateDurability(bool IsNearBreaking, double NormalizedDurability, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class ESlateVisibility Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select_Default_1, class UToolbarEntryDurabilityCharacteristic* CallFunc_GetDurabilityCharacteristic_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemInstanceDurabilityData& CallFunc_GetDurability_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle, float CallFunc_SetPercent_InPercent_ImplicitCast, double K2Node_VariableSet_NormalizedDurability_ImplicitCast);
	void UpdateIconTexture(bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetIconTexture_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UObject* ToolbarArrangement, const struct FInventoryEntry& SourceItemEntry, class UDragOperation_Item_C* SourceDragOperation, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObjectAtIndex_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput_1, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue_1, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput_2, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue_2, bool CallFunc_CanAssignInventoryEntry_ReturnValue, TScriptInterface<class IToolbarInputInterface> CallFunc_Client_SelectToolbarSlotByIndex_self_CastInput, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput_3, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue_3, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IToolbarSlotEntryObjectInterface> Temp_interface_Variable, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_2, bool K2Node_DynamicCast_bSuccess_3, class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item, bool K2Node_DynamicCast_bSuccess_4, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_3, bool K2Node_DynamicCast_bSuccess_5);
	struct FEventReply OnMouseDoubleClick(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item, bool K2Node_DynamicCast_bSuccess, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragOperation_Item_C* DragDrop, class UDragDropOperation* CallFunc_GetDragAndDropOperation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess);
	class UWidget* GetTooltipWidget(class UUserWidget* CallFunc_GetTooltipWidget_ReturnValue);
	void UpdateStackSize(class UToolbarEntryStackCharacteristic* CallFunc_GetStackCharacteristic_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStackSize_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void UpdateSelectionState(bool NewIsSelected, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void Refresh();
	void OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void Construct();
	void SetSlotIndex(int32 SlotIndex);
	void SetSlotEntry(TScriptInterface<class IToolbarSlotEntryObjectInterface>& SlotEntryObject);
	void OnInitialized();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_HUD_ToolbarEntry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_HUD_ToolbarEntry_CBU_MoveItem_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_HUD_ToolbarEntry(int32 EntryPoint, int32 K2Node_Event_SlotIndex, TScriptInterface<class IToolbarSlotEntryObjectInterface> K2Node_Event_SlotEntryObject, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UToolbarSlotEntry_EmptySlot* CallFunc_SpawnObject_ReturnValue, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess, const struct FPointerEvent& K2Node_Event_MouseEvent, class UToolbarSlotEntry_InventoryEntry* K2Node_DynamicCast_AsToolbar_Slot_Entry_Inventory_Entry, bool K2Node_DynamicCast_bSuccess_1, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, class UToolbarSlotEntry_InventoryEntry* K2Node_DynamicCast_AsToolbar_Slot_Entry_Inventory_Entry_1, bool K2Node_DynamicCast_bSuccess_2, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item, bool K2Node_DynamicCast_bSuccess_3, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue_2, class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item_1, bool K2Node_DynamicCast_bSuccess_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UDragDropOperation* CallFunc_GetDragAndDropOperation_ReturnValue, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item_1, bool K2Node_DynamicCast_bSuccess_5, class UDragOperation_Item_C* CallFunc_SpawnObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void ToolbarEntry_GamepadItemMoveAction__DelegateSignature(class UDragOperation_Item_C* DragOperation);
	void ToolbarEntry_Selected__DelegateSignature(int32 Index);
	void ToolbarEntryHovered__DelegateSignature(bool IsHovered, const struct FInventoryEntry& ItemEntry, enum class ETooltipSource TooltipSource);
	void ToolbarEntry_OpenContextMenu__DelegateSignature(const struct FInventoryEntry& Item, class UWidget* Widget);
	void ToolbarEntry_MouseButtonUp__DelegateSignature(const struct FPointerEvent& MouseEvent);
	void ToolbarEntry_OnDrop__DelegateSignature();
	void ToolbarEntry_OnDragCancelled__DelegateSignature(class UDragDropOperation* DragDropOperation);
	void ToolbarEntry_OnDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation);
	void ToolbarEntry_OnClicked__DelegateSignature(int32 Index);
};

}


