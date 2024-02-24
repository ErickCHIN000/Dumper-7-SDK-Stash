#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x289 - 0x230)
// WidgetBlueprintGeneratedClass Hotbar.Hotbar_C
class UHotbar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHotbar_Slot_C*                        HB_Slot_0;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotbar_Slot_C*                        HB_Slot_1;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotbar_Slot_C*                        HB_Slot_2;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotbar_Slot_C*                        HB_Slot_3;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotbar_Slot_C*                        HB_Slot_4;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotbar_Slot_C*                        HB_Slot_5;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotbar_Slot_C*                        HB_Slot_6;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHotbar_Slot_C*                        HB_Slot_7;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UHotbar_Slot_C*>                HotbarSlots;                                       // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         IsHotbarLocked;                                    // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UHotbar_C* GetDefaultObj();

	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UDragItem_C* K2Node_DynamicCast_AsDrag_Item, bool K2Node_DynamicCast_bSuccess);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragWidget_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	void Construct();
	void ExecuteUbergraph_Hotbar(int32 EntryPoint, TArray<class UHotbar_Slot_C*>& K2Node_MakeArray_Array);
};

}


