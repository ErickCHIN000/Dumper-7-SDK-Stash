#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2F0 - 0x2C0)
// WidgetBlueprintGeneratedClass DropItemBackGwidget.DropItemBackGwidget_C
class UDropItemBackGwidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                       BackgroundBlur_32;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ItemDropRequest;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDropItemAmountSelector_C*             AmountSelector;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       BlurValue;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDropItemBackGwidget_C* GetDefaultObj();

	void Show_Vendor_Amount_Selected(class UJSI_Slot_C* ItemRef, class UJSIContainer_C* ToContainerRef, class UDropItemAmountSelector_C* CallFunc_Create_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UJSI_Slot_C* SlotRef, class UDropItemAmountSelector_C* CallFunc_Create_ReturnValue, class UJigSDragOperation_C* K2Node_DynamicCast_AsJig_SDrag_Operation, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCount_Count, bool CallFunc_Greater_IntInt_ReturnValue);
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_DropItemBackGwidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, float CallFunc_SetBlurStrength_InStrength_ImplicitCast);
	void ItemDropRequest__DelegateSignature(class UJSI_Slot_C* ItemRef, int32 Count, class UJSIContainer_C* Container);
};

}


