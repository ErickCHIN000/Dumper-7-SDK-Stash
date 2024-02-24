#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x864 - 0x7C0)
// BlueprintGeneratedClass RadiateDamageActor_GlacialCascade.RadiateDamageActor_GlacialCascade_C
class ARadiateDamageActor_GlacialCascade_C : public AOakRadiateDamageActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Transient, DuplicateTransient)
	class UWwiseAudioComponent*                  ProjAudio;                                         // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         EffectCollision;                                   // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SpellDamage;                                       // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellForce;                                        // 0x7E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellRadius;                                       // 0x7E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellStatusChance;                                 // 0x7EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellStatusDamage;                                 // 0x7F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ADE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                SpellType;                                         // 0x7F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           OwningSpell;                                       // 0x800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_ProjLp;                                      // 0x808(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_ProjLpStop;                                  // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DmgCount;                                          // 0x860(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARadiateDamageActor_GlacialCascade_C* GetDefaultObj();

	void DamageEnemy(class AActor* DamageTarget, const struct FHitResult& Temp_struct_Variable, TScriptInterface<class IBPI_Destructible_C> K2Node_DynamicCast_AsBPI_Destructible, bool K2Node_DynamicCast_bSuccess, class AGbxDestructibleActor* K2Node_DynamicCast_AsGbx_Destructible_Actor, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsFracturable_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides);
	void InitSpellData(class AGrenadeMod* OwningSpell, float CallFunc_GetSpellModDamage_ReturnValue, class UClass* CallFunc_GetSpellDamageType_ReturnValue, float CallFunc_GetSpellStatusEffectDamage_ReturnValue, float CallFunc_GetSpellStatusEffectChance_ReturnValue, float CallFunc_GetSpellModRadius_ReturnValue, float CallFunc_GetSpellForce_ReturnValue);
	void UserConstructionScript();
	void SetupSpawnedActor(class AGrenadeMod* OwningSpell);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void OnPerformRadiateDamageTasks(const struct FVector& EffectLocation, const struct FVector& ImpactNormal, bool bValidImpact);
	void OnSnapToGroundFailed(bool bIsInitialStepDown);
	void ExecuteUbergraph_RadiateDamageActor_GlacialCascade(int32 EntryPoint, bool K2Node_Event_bIsInitialStepDown, int32 Temp_int_Variable, class AGrenadeMod* K2Node_Event_OwningSpell, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, class AActor* K2Node_Event_OtherActor, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& K2Node_Event_EffectLocation, const struct FVector& K2Node_Event_ImpactNormal, bool K2Node_Event_bValidImpact, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue1, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue1, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_Normal_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}


