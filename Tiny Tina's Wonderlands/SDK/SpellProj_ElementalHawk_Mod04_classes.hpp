#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x781 - 0x748)
// BlueprintGeneratedClass SpellProj_ElementalHawk_Mod04.SpellProj_ElementalHawk_Mod04_C
class ASpellProj_ElementalHawk_Mod04_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(Transient, DuplicateTransient)
	class UGbxProjectileMovementComponent*       GbxProjectileMovement;                             // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDrunkenWaveMovementComponent*         DrunkenWaveMovement;                               // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           HawkFX;                                            // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USingularityComponent*                 Singularity;                                       // 0x770(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           SpellOwningMod;                                    // 0x778(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableSingularity;                                 // 0x780(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ASpellProj_ElementalHawk_Mod04_C* GetDefaultObj();

	void CauseHawkDamage(const struct FHitResult& Temp_struct_Variable, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides);
	void OnRep_EnableSingularity();
	void OnRep_SpellOwningMod();
	void UserConstructionScript();
	void SetupSpawnedActor(class AGrenadeMod* OwningSpell);
	void StartSingularity();
	void StopSingularity();
	void SetupSingularity();
	void ReceiveBeginPlay();
	void OnExplode();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_SpellProj_ElementalHawk_Mod04(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void DamageReset();
	void OnHitWorld(struct FHitResult& Hit);
	void ExecuteUbergraph_SpellProj_ElementalHawk_Mod04(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class AGrenadeMod* K2Node_Event_OwningSpell, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, bool Temp_bool_IsClosed_Variable1, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_K2_EvaluateConditionType_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, const struct FHitResult& K2Node_Event_Hit);
};

}


