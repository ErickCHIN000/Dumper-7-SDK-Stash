#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18F (0xB40 - 0x9B1)
// BlueprintGeneratedClass Proj_Spell_TimeSkip.Proj_Spell_TimeSkip_C
class AProj_Spell_TimeSkip_C : public AProj_Grenade_C
{
public:
	uint8                                        Pad_1189[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9B8(0x8)(Transient, DuplicateTransient)
	class UGbxParticleSystemComponent*           GbxParticleSystem1;                                // 0x9C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           GbxParticleSystem;                                 // 0x9C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileHomingComponent*            ProjectileHoming;                                  // 0x9D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            SpellHitInfo;                                      // 0x9D8(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         bIgnoreForcedCleanup;                              // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_SpellDeliveryMethod          SpellDelivery;                                     // 0xA69(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_119A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       TimeSkipEQS;                                       // 0xA70(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         FoundTarget;                                       // 0xB28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    StartArray;                                        // 0xB30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AProj_Spell_TimeSkip_C* GetDefaultObj();

	void ConfigureDelivery(int32 Temp_int_Variable, enum class Enum_SpellDeliveryMethod Temp_byte_Variable, enum class Enum_SpellDeliveryMethod Temp_byte_Variable1, enum class Enum_SpellDeliveryMethod Temp_byte_Variable2, enum class Enum_SpellDeliveryMethod Temp_byte_Variable3, enum class Enum_SpellDeliveryMethod Temp_byte_Variable4, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, enum class Enum_SpellDeliveryMethod K2Node_Select_Default);
	void UserConstructionScript();
	void CastingFinished(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer);
	void OnExplode();
	void FindInitialTarget();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Proj_Spell_TimeSkip(int32 EntryPoint, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor1, bool CallFunc_RunEnvQueryForBestActor_ReturnValue1, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FHitResult& Temp_struct_Variable, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue1, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation1, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation1, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_TimeSkip_C* K2Node_DynamicCast_AsAbility_Time_Skip, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_GetSpawnRotation_Rotation, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


