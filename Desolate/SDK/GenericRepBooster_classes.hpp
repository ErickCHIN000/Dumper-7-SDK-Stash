#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x428 - 0x420)
// BlueprintGeneratedClass GenericRepBooster.GenericRepBooster_C
class AGenericRepBooster_C : public AGenericLootItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGenericRepBooster_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnPickup(class ASHInventory* Inventory, class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_GenericRepBooster(int32 EntryPoint, class ASHInventory* K2Node_Event_Inventory, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_Use_ReturnValue);
};

}


