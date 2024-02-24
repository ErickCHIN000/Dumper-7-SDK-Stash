#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3D8 (0x720 - 0x348)
// WidgetBlueprintGeneratedClass WBP_ToolBar.WBP_ToolBar_C
class UWBP_ToolBar_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_DropTargetHint;                             // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputActionPresentationWidget_C*  IAP_Gamepad;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               IAP_Gamepad_Border;                                // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_66;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Tools;                                             // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_HUD_ToolbarEntry_C*>       ToolbarSlotEntryWidgets;                           // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            Toolbar_DragStarted;                               // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Toolbar_DragCancelled;                             // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Toolbar_Dropped;                                   // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Toolbar_ContextMenuOpen;                           // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Toolbar_MouseButtonUp;                             // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ToolbarEntryHovered;                               // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ToolbarEntrySelected;                              // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EToolbarArrangement               ToolbarType;                                       // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowDragOperations;                               // 0x3F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D84[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemForMoveAction;                                 // 0x400(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidget*                               MoveToolbarEntryRef;                               // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemMoveActionIndex;                               // 0x6F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowInputAction;                                  // 0x6FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ToolEntryClass;                                    // 0x700(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        DesignToolbarSize;                                 // 0x708(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EToolbarArrangement               ItemMoveToobarArrangement;                         // 0x70C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            GamepadMoveItem;                                   // 0x710(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_ToolBar_C* GetDefaultObj();

	void DisableMoveAction(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void InitializeDesignerPreview(int32 Temp_int_Variable, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateSelectedState(TScriptInterface<class IToolbarArrangementInterface> CallFunc_Get_Toolbar_Interface_ToolbarInterface, int32 CallFunc_GetSelectedSlotIndex_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item);
	void SetAllowDragDropOperations(bool bAllow);
	void SetDropTargetVisible(bool bVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UnbindToGamepadMoveItemAction(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnGamepadMoveItem(class UDragOperation_Item_C* DragOperation, class UObject* ToolbarArrangement);
	void BindToGamepadMoveItemAction(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HideSlotNumbers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ToggleEnabledState(bool IsEnabled, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void DeselectAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnMainHandEntrySelected(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnToolbarEntryHovered(bool IsHovered, const struct FInventoryEntry& ItemEntry, enum class ETooltipSource TooltipSource);
	void Remove_Entry_from_Slot(const struct FGuid& InventoryEntryInstanceId, TScriptInterface<class IToolbarArrangementInterface> CallFunc_Get_Toolbar_Interface_ToolbarInterface);
	void ToolbarEntry_Mouse_Button_Up(const struct FPointerEvent& MouseEvent);
	void Toolbar_Entry_Minus_Open_Context_Menu(const struct FInventoryEntry& Item, class UWidget* Widget);
	void UnbindFromOnDropEvents(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void BindToOnDropEvents(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void On_Item_Dropped();
	void OnToolbarSlotEntryChanged(int32 SlotIndex, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, TScriptInterface<class IToolbarArrangementInterface> CallFunc_Get_Toolbar_Interface_ToolbarInterface, TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObjectAtIndex_ReturnValue, TScriptInterface<class IToolbarSlotEntryWidgetInterface> CallFunc_SetSlotEntry_self_CastInput);
	void Get_Toolbar_Interface(TScriptInterface<class IToolbarArrangementInterface>* ToolbarInterface, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue);
	void OnToolbarSlotIndexChanged(int32 OldSelectedIndex, int32 NewSelectedIndex, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item_1);
	void InitializeSlotWidgetBindings(class UWBP_HUD_ToolbarEntry_C* ToolbarSlotWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void ToolbarSlot_DragStarted(class UDragDropOperation* DragDropOperation);
	void ToolbarSlot_DragCancelled(class UDragDropOperation* DragDropOperation);
	void ToolbarSlot_EntryClicked(int32 Index, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromInteger_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void InitializeSlotWidgets(TScriptInterface<class IToolbarArrangementInterface> LocalToolbarInterface, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetSelectedSlotIndex_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObjectAtIndex_ReturnValue, TScriptInterface<class IToolbarArrangementInterface> CallFunc_Get_Toolbar_Interface_ToolbarInterface, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IToolbarSlotEntryWidgetInterface> CallFunc_SetSlotEntry_self_CastInput, TScriptInterface<class IToolbarSlotEntryWidgetInterface> CallFunc_SetSlotIndex_self_CastInput);
	void InitializeSlotWidgetCache(int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_HUD_ToolbarEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TScriptInterface<class IToolbarArrangementInterface> CallFunc_Get_Toolbar_Interface_ToolbarInterface, int32 CallFunc_GetToolbarSize_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void BindToolbarDelegates(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IToolbarArrangementInterface> CallFunc_Get_Toolbar_Interface_ToolbarInterface);
	void Construct();
	void OnInitialized();
	void Destruct();
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void ExecuteUbergraph_WBP_ToolBar(int32 EntryPoint, TSoftObjectPtr<class UInputAction> Temp_softobject_Variable, TSoftObjectPtr<class UInputAction> Temp_softobject_Variable_1, TSoftObjectPtr<class UInputAction> Temp_softobject_Variable_2, TSoftObjectPtr<class UInputAction> Temp_softobject_Variable_3, enum class EToolbarArrangement Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, enum class EHorizontalAlignment Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, enum class EHorizontalAlignment Temp_byte_Variable_4, TScriptInterface<class IToolbarArrangementInterface> CallFunc_Get_Toolbar_Interface_ToolbarInterface, int32 CallFunc_GetSelectedSlotIndex_ReturnValue, enum class EToolbarArrangement Temp_byte_Variable_5, class UWBP_HUD_ToolbarEntry_C* CallFunc_Array_Get_Item, TScriptInterface<class IToolbarArrangementInterface> CallFunc_Get_Toolbar_Interface_ToolbarInterface_1, enum class ECommonInputType K2Node_Event_CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UInputAction> K2Node_Select_Default, enum class EHorizontalAlignment K2Node_Select_Default_1);
	void GamepadMoveItem__DelegateSignature(class UDragOperation_Item_C* DragOperation);
	void ToolbarEntrySelected__DelegateSignature();
	void ToolbarEntryHovered__DelegateSignature(bool IsHovered, const struct FInventoryEntry& ItemEntry, enum class ETooltipSource TooltipSource);
	void Toolbar_MouseButtonUp__DelegateSignature(const struct FPointerEvent& MouseEvent);
	void Toolbar_ContextMenuOpen__DelegateSignature(const struct FInventoryEntry& Item, class UWidget* Widget);
	void Toolbar_Dropped__DelegateSignature();
	void Toolbar_DragCancelled__DelegateSignature(class UDragDropOperation* DragDropOperation);
	void Toolbar_DragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation);
};

}


