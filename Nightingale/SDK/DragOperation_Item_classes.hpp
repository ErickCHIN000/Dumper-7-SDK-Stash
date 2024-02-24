#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x375 (0x405 - 0x90)
// BlueprintGeneratedClass DragOperation_Item.DragOperation_Item_C
class UDragOperation_Item_C : public UDragDropOperation
{
public:
	struct FItemDataReference                    ItemId;                                            // 0x90(0x80)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FInventoryEntry                       ItemEntry;                                         // 0x110(0x2F0)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        SourceSlotIndex;                                   // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EToolbarArrangement               SourceToolbarArrangement;                          // 0x404(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDragOperation_Item_C* GetDefaultObj();

};

}


