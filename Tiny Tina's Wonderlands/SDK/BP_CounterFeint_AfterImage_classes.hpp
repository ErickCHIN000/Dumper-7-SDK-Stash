#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x808 - 0x7C0)
// BlueprintGeneratedClass BP_CounterFeint_AfterImage.BP_CounterFeint_AfterImage_C
class ABP_CounterFeint_AfterImage_C : public AOakDroneProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Transient, DuplicateTransient)
	class UWwiseAudioComponent*                  Audio;                                             // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      SnapZoom;                                          // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_CounterFeint_ShadowFX;                          // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        AfterImageDuration;                                // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DamageCalcHandle;                                  // 0x7E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWwiseEvent*                           LoopAudio;                                         // 0x800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CounterFeint_AfterImage_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void AfterImage_CleanUp();
	void ExecuteUbergraph_BP_CounterFeint_AfterImage(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue);
};

}


