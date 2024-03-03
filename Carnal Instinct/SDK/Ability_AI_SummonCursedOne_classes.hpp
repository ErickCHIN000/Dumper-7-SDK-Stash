#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2F8 - 0x2E0)
// BlueprintGeneratedClass Ability_AI_SummonCursedOne.Ability_AI_SummonCursedOne_C
class AAbility_AI_SummonCursedOne_C : public AAbility_AI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                SpawnedMinion;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound;                                             // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_AI_SummonCursedOne_C* GetDefaultObj();

	void SummonMinion(const struct FVector& CallFunc_GetEffectLocation_Location, const struct FVector& CallFunc_GetEffectLocation_Location_1, class AActor* CallFunc_GetTarget_Target, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APawn* CallFunc_SpawnAIFromClass_ReturnValue, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess);
	void OnQueryFinishedEvent(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void Released();
	void PlaySound();
	void Effect();
	void ExecuteUbergraph_Ability_AI_SummonCursedOne(int32 EntryPoint, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, float CallFunc_PlayAbilityMontage_Duration, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_FindGroundLocation_GroundLocation, const struct FVector& CallFunc_FindGroundLocation_Normal, bool CallFunc_FindGroundLocation_Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_StartAbility_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue_1, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue);
};

}


