#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x300 - 0x2D8)
// BlueprintGeneratedClass BP_Throwable_Molotov.BP_Throwable_Molotov_C
class ABP_Throwable_Molotov_C : public ABP_MasterThrowable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       MinDamage;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxDamage;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       FireSound;                                         // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Throwable_Molotov_C* GetDefaultObj();

	void BndEvt__BP_Throwable_Molotov_Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void Fire_Damage();
	void ExecuteUbergraph_BP_Throwable_Molotov(int32 EntryPoint, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Random_Vector_In_Range_Return_Value, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_SkillCheck_Multiplier, TArray<class AActor*>& Temp_object_Variable, double CallFunc_RandomFloatInRange_ReturnValue_3, TArray<class AActor*>& CallFunc_BoxOverlapActors_OutActors, bool CallFunc_BoxOverlapActors_ReturnValue, double CallFunc_SkillCheck_Multiplier_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_Damage_C> K2Node_DynamicCast_AsBPI_Damage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class ABP_AIOSpawner_Infestation_C* K2Node_DynamicCast_AsBP_AIOSpawner_Infestation, bool K2Node_DynamicCast_bSuccess_1, class ABP_MasterAICharacter_C* K2Node_DynamicCast_AsBP_Master_AICharacter, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_ActorHasTag_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, class ABP_AI_C* K2Node_DynamicCast_AsBP_AI, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast_1, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast, double CallFunc_SpawnFloatingDamageText_Damage_ImplicitCast);
};

}


