#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// BlueprintGeneratedClass BP_Interactable_Interact_Activate_Prototype_Laser.BP_Interactable_Interact_Activate_Prototype_Laser_C
class UBP_Interactable_Interact_Activate_Prototype_Laser_C : public UBP_Interactable_WorldObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_Interact_Activate_Prototype_Laser_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Faction_Mission_Prototype_Laser_C* K2Node_DynamicCast_AsBP_Faction_Mission_Prototype_Laser, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_Interact_Activate_Prototype_Laser(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Faction_Mission_Laser_C* K2Node_DynamicCast_AsBP_Faction_Mission_Laser, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
};

}


