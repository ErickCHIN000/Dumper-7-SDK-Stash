#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xB0 - 0x90)
// BlueprintGeneratedClass JigSDragOperation.JigSDragOperation_C
class UJigSDragOperation_C : public UDragDropOperation
{
public:
	class UJSI_Slot_C*                           SlotRef;                                           // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                             MouseDownPos;                                      // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UJSI_Slot_C*                           FixedSlotRef;                                      // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJigSDragOperation_C* GetDefaultObj();

};

}


