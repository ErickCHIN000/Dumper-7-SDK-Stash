#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// BlueprintGeneratedClass BP_Interactable_Interact_SatelliteAccessInventory.BP_Interactable_Interact_SatelliteAccessInventory_C
class UBP_Interactable_Interact_SatelliteAccessInventory_C : public UBP_Interactable_WorldObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_Interact_SatelliteAccessInventory_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_BW4_Satellite_Object_C* K2Node_DynamicCast_AsBP_BW4_Satellite_Object, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_Interact_SatelliteAccessInventory(int32 EntryPoint);
};

}


