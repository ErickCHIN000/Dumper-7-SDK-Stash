#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x338 - 0x2A8)
// WidgetBlueprintGeneratedClass TradeSell.TradeSell_C
class UTradeSell_C : public UBaseCharacterUIWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInventoryFilterButton_C*              AllFilterButton;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryFilterButton_C*              ArmorFilterButton;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         FilterButtonsGroup;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryFilterButton_C*              FoodFilterButton;                                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventorySlotObserver_C*              InventorySlotObserver;                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryFilterButton_C*              MedicineFilterButton;                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SlotObserverBox;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlotWearing_C*                        SlotWearing;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventorySortButton_C*                SortDurabilityButton;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         SortingGroup;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventorySortButton_C*                SortNewbutton;                                     // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SortText;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventorySortButton_C*                SortWeightButton;                                  // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryFilterButton_C*              ToolsFilterButton;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventory_v2_C*                       TradeSellInventory;                                // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryFilterButton_C*              TrashFilterButton;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryFilterButton_C*              WeaponsFilterButton;                               // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTradeSell_C* GetDefaultObj();

	void FocudDefaultSlot(class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void FilterNext(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetWidgetsCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void FilterPrev(int32 CallFunc_GetWidgetsCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void SortNext(int32 CallFunc_GetWidgetsCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, bool CallFunc_InputEvent_IsRepeat_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Construct();
	void OnWidgetSelectedEvent_Event_0(int32 GroupIndex);
	void OnWidgetSelectedEvent_Event_1(int32 GroupIndex);
	void Show();
	void OnWidgetSelectedEvent_Event_2(int32 GroupIndex);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnTooltipButtonClicked(enum class ETooltipButtonType Type);
	void UpdateTooltips();
	void CustomEvent_0();
	void Hide();
	void HideInstant();
	void ExecuteUbergraph_TradeSell(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 K2Node_CustomEvent_GroupIndex_2, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UInventoryFilterButton_C* K2Node_DynamicCast_AsInventory_Filter_Button, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_GroupIndex_1, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue_1, class UInventorySortButton_C* K2Node_DynamicCast_AsInventory_Sort_Button, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess_2, class ASHInventory* CallFunc_BPI_Get_Inventory_Inventory, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_GroupIndex, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue_2, class UInventorySlot_v2_C* K2Node_DynamicCast_AsInventory_Slot_V_2, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ETooltipButtonType K2Node_Event_Type, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue_3, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_1, class UInventorySlot_v2_C* K2Node_DynamicCast_AsInventory_Slot_V_2_1, bool K2Node_DynamicCast_bSuccess_4, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, const struct FTooltipButtonInfo& K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue_2, TArray<struct FTooltipButtonInfo>& K2Node_MakeArray_Array_1, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_2, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_3, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue_1, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue_4, const struct FTooltipButtonInfo& K2Node_Select_Default_1, class UInventorySlot_v2_C* K2Node_DynamicCast_AsInventory_Slot_V_2_2, bool K2Node_DynamicCast_bSuccess_5, class FText CallFunc_MakeLiteralText_ReturnValue_3, class USHInventorySlot* CallFunc_GetContextSlot_Output, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsNotEmpty_ReturnValue, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_5, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue_2, const struct FTooltipButtonInfo& K2Node_Select_Default_2, TArray<struct FTooltipButtonInfo>& K2Node_MakeArray_Array_2);
};

}


