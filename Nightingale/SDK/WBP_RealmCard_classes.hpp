#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A1 (0x6E9 - 0x348)
// WidgetBlueprintGeneratedClass WBP_RealmCard.WBP_RealmCard_C
class UWBP_RealmCard_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Invalid;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_No_Text_C*          CBU_SelectAction;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          HoverState;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_CardArt;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SelectedState;                             // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Counters;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_FocusedOutline;                           // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Quantity;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Tooltip;                                   // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Quantity;                                      // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RealmPower_C*                     WBP_RealmPower_Widget;                             // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_2577[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CardData;                                          // 0x3B0(0x2F0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector2D                             SizeOverride;                                      // 0x6A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       CounterScaleOverride;                              // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x6B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnInstantAction;                                   // 0x6C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDragged;                                         // 0x6D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bShowQuantity;                                     // 0x6E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RealmCard_C* GetDefaultObj();

	void UpdateGamepadQuickActionButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void InitializeDesignerPreview(bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateCardData(const struct FInventoryEntry& NewCardData, bool CallFunc_IsValid_ReturnValue);
	void UpdateEnabledState(bool IsEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	void OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDropOperation_RealmCard_C* CallFunc_CreateDragDropOperation_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_RealmMachine_CardDragVisual_C* CallFunc_Create_ReturnValue);
	class UWidget* GetSizeBox_CardToolTipWidget(class FText LItemName, class FText LInvalidText, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void TrySetScaleBoxOverrides(double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetUserSpecifiedScale_InUserSpecifiedScale_ImplicitCast, float CallFunc_SetUserSpecifiedScale_InUserSpecifiedScale_ImplicitCast_1, float CallFunc_SetUserSpecifiedScale_InUserSpecifiedScale_ImplicitCast_2);
	void TrySetSizeOverride(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void SetCardArtFromCardData(bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ui_Get_FullIconSoftReference_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_ui_Get_FullIconSoftReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default);
	void InitializeCounters(const struct FItemData_RealmCard& LRealmCardData, int32 CallFunc_GetRealmCardAssetPowerLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_RealmCard& CallFunc_TryGetItemDataRealmCard_OutData, enum class EGetResult CallFunc_TryGetItemDataRealmCard_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void InitializeQuantity(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsVisible_ReturnValue, bool Temp_bool_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Initialize(bool CallFunc_Not_PreBool_ReturnValue);
	void Construct();
	void BndEvt__WBP_RealmCard_CBU_SelectAction_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void BndEvt__WBP_RealmCard_CBU_SelectAction_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_RealmCard_CBU_SelectAction_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_RealmCard(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ECommonInputType K2Node_Event_CurrentInputType, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnDragged__DelegateSignature(bool IsDragging, const struct FInventoryEntry& CardData);
	void OnInstantAction__DelegateSignature(const struct FInventoryEntry& InventoryEntry);
	void OnHovered__DelegateSignature(bool IsHovered, const struct FInventoryEntry& InventoryEntry);
};

}


