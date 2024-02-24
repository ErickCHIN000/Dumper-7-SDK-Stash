#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x888 - 0x7C0)
// BlueprintGeneratedClass RadiateDamageActor_Fissure_Moleman.RadiateDamageActor_Fissure_Moleman_C
class ARadiateDamageActor_Fissure_Moleman_C : public AOakRadiateDamageActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  ProjAudio;                                         // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         EffectCollision;                                   // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x7E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StatusChance;                                      // 0x7EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StatusDamage;                                      // 0x7F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4421[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DmgType;                                           // 0x7F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           OwningSpell;                                       // 0x800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_ProjLp;                                      // 0x808(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_ProjLpStop;                                  // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageSource;                                      // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AWeapon*                               OwningWeapon;                                      // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        FiringPattern;                                     // 0x870(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_442E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        DamagedEnemies;                                    // 0x878(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ARadiateDamageActor_Fissure_Moleman_C* GetDefaultObj();

	void SpawnProjectile(const struct FVector& SpawnLoc, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
	void DamageEnemy(class AActor* DamageTarget, const struct FHitResult& Temp_struct_Variable, bool CallFunc_K2_EvaluateConditionType_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, float CallFunc_GetValueOfAttribute_ReturnValue2, class APawn* CallFunc_GetInstigator_ReturnValue);
	void UserConstructionScript();
	void SetupSpawnedActor(class AGrenadeMod* OwningSpell);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_RadiateDamageActor_Fissure_Moleman(int32 EntryPoint, class AGrenadeMod* K2Node_Event_OwningSpell, class AActor* K2Node_Event_OtherActor, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AWeapon* K2Node_DynamicCast_AsWeapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


