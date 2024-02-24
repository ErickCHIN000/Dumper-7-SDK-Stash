#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25 (0x799 - 0x774)
// BlueprintGeneratedClass BP_Scorpion_Trap_Medium.BP_Scorpion_Trap_Medium_C
class ABP_Scorpion_Trap_Medium_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_448E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         BoxCombined;                                       // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem_Blood;                              // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara_Wood_Damage;                               // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         TrapOpen;                                          // 0x798(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Scorpion_Trap_Medium_C* GetDefaultObj();

	void OnRep_TrapOpen();
	void Deployable_Interact(class AActor* Interactor);
	void DoDamage(int32 DamageAmount, class AActor* Defender, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_DealFlatDamage_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue_1);
	void LaunchCharacter(class ACharacter* IcarusCharacter, float LaunchScale, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_Scorpion_Trap_Medium(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsServer_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetHealth_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


