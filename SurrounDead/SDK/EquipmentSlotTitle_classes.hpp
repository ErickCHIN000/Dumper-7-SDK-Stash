#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x350 - 0x2C0)
// WidgetBlueprintGeneratedClass EquipmentSlotTitle.EquipmentSlotTitle_C
class UEquipmentSlotTitle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TheSlotName;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SlotName;                                          // 0x2D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        FontSize;                                          // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_9D5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ItemDropped;                                       // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsEmpty;                                           // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Color;                                             // 0x30C(0x14)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                          BackColor;                                         // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMargin                               TextPadding;                                       // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_            OnWidgetMouseButtonDown;                           // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UEquipmentSlotTitle_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue);
	void IsEmptyEquipmentSlot(bool* IsEmpty);
	void PreConstruct(bool IsDesignTime);
	void UpdateName(class FText SlotName);
	void UpdateTextColor(const struct FSlateColor& Color);
	void SetDefaultColor();
	void ExecuteUbergraph_EquipmentSlotTitle(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_IsClosed_Variable, class FText K2Node_CustomEvent_SlotName, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_CustomEvent_Color, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_MakeStruct_Size_ImplicitCast);
	void OnWidgetMouseButtonDown__DelegateSignature(const struct FKey& Button);
	void ItemDropped__DelegateSignature(class UJSIContainer_C* FromContainer, class UEquipmentSlotTitle_C* EquipmentSlotRef, class UJSI_Slot_C* NewSlotRef, const struct FFItemInfo& PickupItemInfo);
};

}


