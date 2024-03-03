#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2F8 - 0x2E0)
// BlueprintGeneratedClass Ability_AI_Teleport.Ability_AI_Teleport_C
class AAbility_AI_Teleport_C : public AAbility_AI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                       TeleportParticle;                                  // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound;                                             // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_AI_Teleport_C* GetDefaultObj();

	void AbilityTeleport(bool* Result, const struct FVector& CallFunc_GetEffectLocation_Location, const struct FVector& CallFunc_GetEffectLocation_Location_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue);
	void SpawnTeleportParticle();
	void OnQueryFinishedEvent(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void MakeOwnerUntargetable(float Duration);
	void Released();
	void Effect();
	void PlaySound();
	void ExecuteUbergraph_Ability_AI_Teleport(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_AbilityTeleport_Result, bool CallFunc_StartAbility_Result, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, class AActor* CallFunc_GetOwner_ReturnValue, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, float K2Node_CustomEvent_Duration, const struct FVector& CallFunc_FindGroundLocation_GroundLocation, const struct FVector& CallFunc_FindGroundLocation_Normal, bool CallFunc_FindGroundLocation_Result, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_MageAI_C* K2Node_DynamicCast_AsBP_Mage_AI, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, class AActor* CallFunc_GetOwner_ReturnValue_2, float CallFunc_PlayAbilityMontage_Duration, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


