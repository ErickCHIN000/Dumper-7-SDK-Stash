#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x261 - 0x230)
// WidgetBlueprintGeneratedClass StupidHoverDetectorWidget.StupidHoverDetectorWidget_C
class UStupidHoverDetectorWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            Event_OnMouseEnter;                                // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Event_OnMouseLeave;                                // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UInventoryGridItem_C*                  InventoryGridItem;                                 // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHovering;                                        // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UStupidHoverDetectorWidget_C* GetDefaultObj();

	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_StupidHoverDetectorWidget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void Event_OnMouseLeave__DelegateSignature();
	void Event_OnMouseEnter__DelegateSignature();
};

}


