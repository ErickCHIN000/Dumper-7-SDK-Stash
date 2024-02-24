#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x274 - 0x230)
// WidgetBlueprintGeneratedClass Hotbar_Slot.Hotbar_Slot_C
class UHotbar_Slot_C : public UUserWidget
{
public:
	class UImage*                                Icon;                                              // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Number;                                            // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemInformation                      ItemInformation;                                   // 0x240(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        HotbarNumber;                                      // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHotbar_Slot_C* GetDefaultObj();

	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDragItem_C* K2Node_DynamicCast_AsDrag_Item, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface, bool K2Node_DynamicCast_bSuccess_1);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragItem_C* CallFunc_CreateDragDropOperation_ReturnValue, class UDraggedItem_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	class FText Get_Number_Text(int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
};

}


