#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x748 - 0x740)
// BlueprintGeneratedClass BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C
class ABP_OakConsumableItemPickup_C : public ABP_OakInventoryItemPickup_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x740(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_OakConsumableItemPickup_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnPickedUpEvent(class AActor* WasPickedUpBy);
	void ExecuteUbergraph_BP_OakConsumableItemPickup(int32 EntryPoint, class AActor* K2Node_Event_WasPickedUpBy, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


