#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass ParticleFX_OnMainhandWeapon.ParticleFX_OnMainhandWeapon_C
class UParticleFX_OnMainhandWeapon_C : public UAnimNotify
{
public:
	class UClass*                                ParticleToPlay;                                    // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UParticleFX_OnMainhandWeapon_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SpikeActivateParticleLight_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


