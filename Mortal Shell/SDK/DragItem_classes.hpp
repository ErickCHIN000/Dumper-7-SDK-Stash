#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0xBF - 0x88)
// BlueprintGeneratedClass DragItem.DragItem_C
class UDragItem_C : public UDragDropOperation
{
public:
	struct FItemInformation                      DraggedItemInformation;                            // 0x88(0x30)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        DraggedSlotIndex;                                  // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsDraggedFromInventory;                            // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsDraggedFromContainer;                            // 0xBD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsDraggedFromHotbar;                               // 0xBE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UDragItem_C* GetDefaultObj();

};

}


