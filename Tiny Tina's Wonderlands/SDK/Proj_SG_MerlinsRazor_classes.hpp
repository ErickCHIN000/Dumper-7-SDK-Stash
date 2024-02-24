#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x7FC - 0x7D8)
// BlueprintGeneratedClass Proj_SG_MerlinsRazor.Proj_SG_MerlinsRazor_C
class AProj_SG_MerlinsRazor_C : public AProjectile_SG_Magic_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D8(0x8)(Transient, DuplicateTransient)
	class UWwiseAudioComponent*                  WwiseAudio;                                        // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileHomingComponent*            ProjectileHoming;                                  // 0x7E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        PercentLifeTimeBeforeReturn;                       // 0x7F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LifetimeOverride;                                  // 0x7F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnSpeedScalar;                                 // 0x7F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_SG_MerlinsRazor_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartCleanupTimer();
	void ReturnTowards_Player();
	void BeginCleanup();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void On_Reached_Player();
	void ExecuteUbergraph_Proj_SG_MerlinsRazor(int32 EntryPoint, enum class EOakElementalType Temp_byte_Variable, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, class UParticleSystem* Temp_object_Variable3, class UParticleSystem* Temp_object_Variable4, class UParticleSystem* Temp_object_Variable5, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetMaxSpeed_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue2, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FHitResult& Temp_struct_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UParticleSystem* K2Node_Select_Default);
};

}


