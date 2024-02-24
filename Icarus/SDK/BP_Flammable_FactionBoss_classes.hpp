#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x12C - 0x12C)
// BlueprintGeneratedClass BP_Flammable_FactionBoss.BP_Flammable_FactionBoss_C
class UBP_Flammable_FactionBoss_C : public UBP_Flammable_Actor_C
{
public:

	static class UClass* StaticClass();
	static class UBP_Flammable_FactionBoss_C* GetDefaultObj();

	void SetupCosmetics();
	struct FBoxSphereBounds GetLocalBounds(const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPawn* K2Node_DynamicCast_AsIcarus_Pawn, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetAnimatedMeshComponent_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds_1);
};

}


