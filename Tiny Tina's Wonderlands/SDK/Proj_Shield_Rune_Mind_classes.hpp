#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCB (0xA7C - 0x9B1)
// BlueprintGeneratedClass Proj_Shield_Rune_Mind.Proj_Shield_Rune_Mind_C
class AProj_Shield_Rune_Mind_C : public AProj_Grenade_C
{
public:
	uint8                                        Pad_4513[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9B8(0x8)(Transient, DuplicateTransient)
	class UOakTriggerComponent*                  OakTrigger;                                        // 0x9C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      CollisionSphere;                                   // 0x9C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x9D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TriggerDelay;                                      // 0x9D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_451B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              PS_Cryo_FastPop_128;                               // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            SpellHitInfo;                                      // 0x9E8(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        ShieldDamage;                                      // 0xA78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_Shield_Rune_Mind_C* GetDefaultObj();

	void UserConstructionScript();
	void OnExplode();
	void OnHitWorld(struct FHitResult& Hit);
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_Spell_IceSpike_Mine(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void Event_EnableTrigger();
	void ExecuteUbergraph_Proj_Shield_Rune_Mind(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable1, bool Temp_bool_IsClosed_Variable1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FHitResult& K2Node_Event_Hit, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, bool CallFunc_IsAlive_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
};

}


