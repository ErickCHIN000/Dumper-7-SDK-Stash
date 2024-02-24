#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass TwinbladeSpawnFX_AnimNotify.TwinbladeSpawnFX_AnimNotify_C
class UTwinbladeSpawnFX_AnimNotify_C : public UAnimNotify
{
public:
	class FName                                  Socket;                                            // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTwinbladeSpawnFX_AnimNotify_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}


