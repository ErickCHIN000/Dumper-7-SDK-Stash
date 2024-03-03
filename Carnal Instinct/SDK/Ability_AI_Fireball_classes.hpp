#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x2ED - 0x2E0)
// BlueprintGeneratedClass Ability_AI_Fireball.Ability_AI_Fireball_C
class AAbility_AI_Fireball_C : public AAbility_AI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        MontageCounter;                                    // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseLeftHandSocket;                                 // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AAbility_AI_Fireball_C* GetDefaultObj();

	void Effect();
	void UpdateEffect();
	void ResetMontageCounter();
	void UpdateMontageCounter();
	void UpdateSocket();
	void StartTimer();
	void StopTimer();
	void Ended(enum class E_AbilityEndResult Result);
	void Released();
	void ExecuteUbergraph_Ability_AI_Fireball(int32 EntryPoint, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_StartAbility_Result, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetTarget_Target, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAE_FireballProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, class FName K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, enum class E_AbilityEndResult K2Node_Event_Result, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


