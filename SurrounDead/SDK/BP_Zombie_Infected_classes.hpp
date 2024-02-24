#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x858 - 0x848)
// BlueprintGeneratedClass BP_Zombie_Infected.BP_Zombie_Infected_C
class ABP_Zombie_Infected_C : public ABP_MasterZombie_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x848(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              MouthFX;                                           // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Zombie_Infected_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void Event_SpecialDeath();
	void ExecuteUbergraph_BP_Zombie_Infected(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAIOptimizerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FAIOSubjectHandle& CallFunc_K2_DespawnSubject_SubjectHandle, bool CallFunc_K2_DespawnSubject_ReturnValue, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, bool CallFunc_K2_AttachToComponent_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FTransform& Temp_struct_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, TArray<class AActor*>& Temp_object_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_ScalingDamageMultiplier_NewDmg, class AAIController* CallFunc_GetAIController_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_ScalingDamageMultiplier_NewDmg_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast);
};

}


