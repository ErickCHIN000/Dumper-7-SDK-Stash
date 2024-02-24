#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD0 - 0xD0)
// BlueprintGeneratedClass BP_HitableBehaviour_VoxelResource.BP_HitableBehaviour_VoxelResource_C
class UBP_HitableBehaviour_VoxelResource_C : public UHitableComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_HitableBehaviour_VoxelResource_C* GetDefaultObj();

	bool ConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, bool CallFunc_ConsumeHit_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_HasTag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_VoxelResource_Base_C* K2Node_DynamicCast_AsBP_Voxel_Resource_Base, bool K2Node_DynamicCast_bSuccess);
	bool CanConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket);
};

}


