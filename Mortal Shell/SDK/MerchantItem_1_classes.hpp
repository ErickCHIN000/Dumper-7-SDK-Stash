#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C1 (0x3F1 - 0x230)
// WidgetBlueprintGeneratedClass MerchantItem.MerchantItem_C
class UMerchantItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            AmountText;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Background;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CostText;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CurrencyIcon;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CurrencyText;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HeldText;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Description;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_ItemName;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ItemIndex;                                         // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Cost;                                              // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HeldAmount;                                        // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           NormalStyle;                                       // 0x290(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           HoveredStyle;                                      // 0x318(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnItemHover;                                       // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemUnhovered;                                   // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemPressed;                                     // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemReleased;                                    // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemClicked;                                     // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bGlimpseBased;                                     // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UMerchantItem_C* GetDefaultObj();

	class FText DisplayTextFromAmount(int32 Value, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText Temp_text_Variable, class FText K2Node_Select_Default);
	void IncreaseHeldAmount(class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetPlayerItemCount(class FName ItemId, int32* PlayerAmount, int32 ItemAmount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue);
	bool DecreaseAmount(class FText CallFunc_DisplayTextFromAmount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void SetHighlighted(bool bHighlighted);
	void BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Reinitialize(int32 ItemIndex, const struct FInventoryItem& Item, int32 Cost, int32 Amount);
	void BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Background_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Background_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void SetToGlimpseBased();
	void SetToTarBased();
	void ExecuteUbergraph_MerchantItem(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_CustomEvent_bHighlighted, const struct FSlateBrush& K2Node_Select_Default, int32 K2Node_CustomEvent_ItemIndex, const struct FInventoryItem& K2Node_CustomEvent_Item, int32 K2Node_CustomEvent_Cost, int32 K2Node_CustomEvent_Amount, class FText CallFunc_DisplayTextFromAmount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_CheckItemName_ReturnValue, int32 CallFunc_GetPlayerItemCount_PlayerAmount, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool K2Node_Event_IsDesignTime);
	void OnItemClicked__DelegateSignature(class UMerchantItem_C* Widget);
	void OnItemReleased__DelegateSignature(class UMerchantItem_C* Widget);
	void OnItemPressed__DelegateSignature(class UMerchantItem_C* Widget);
	void OnItemUnhovered__DelegateSignature(class UWidget* Widget);
	void OnItemHover__DelegateSignature(class UWidget* Widget);
};

}


