#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x264 (0xD84 - 0xB20)
// BlueprintGeneratedClass DroneProj_Hydra.DroneProj_Hydra_C
class ADroneProj_Hydra_C : public ADrone_PlayerCompanionParent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB20(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       Normal;                                            // 0xB28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Hydra_Head_FireTrail;                           // 0xB30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Hydra_Head_PoisonTrail;                         // 0xB38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Hydra_Head_ShockTrail;                          // 0xB40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Hydra_Head_DarkTrail;                           // 0xB48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Hydra_Head_CryoTrail;                           // 0xB50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Shock;                                             // 0xB58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Poison;                                            // 0xB60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Fire;                                              // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Dark;                                              // 0xB70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Cryo;                                              // 0xB78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneBodySwitchComponent*             PixieFXSwitch;                                     // 0xB80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  Audio_drone_lp;                                    // 0xB88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      Socket_Head3;                                      // 0xB90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      Socket_Head2;                                      // 0xB98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      Socket_Head1;                                      // 0xBA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  MyBody;                                            // 0xBA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           CachedWeaponFireWwiseEvent;                        // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                HydraDamageType;                                   // 0xBB8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                HydraDamageSource;                                 // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HydraBulletDamage;                                 // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HydraFireRate;                                     // 0xBCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        LoadedAmmo;                                        // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_322F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       EQSHoverTarget;                                    // 0xBD8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CurrentHydraBurstCount;                            // 0xC90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3232[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpawnableSpellBasicData              ProjSpellData;                                     // 0xC98(0x40)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn)
	class FName                                  CurrentTargetSocket;                               // 0xCD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HydraFireReloadTime;                               // 0xCE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        MaxBurstCount;                                     // 0xCE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UGameResourceData*                     HydraDurationPool;                                 // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         BreedingHydra;                                     // 0xCF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ZoningHydra;                                       // 0xCF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         MutatedHydra;                                      // 0xCF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_323D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HeadIndex;                                         // 0xCF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AccuracyBase;                                      // 0xCF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DroneLightProjectile;                              // 0xD00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ProjectilesPerShot;                                // 0xD08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3242[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_DroneLoop;                                   // 0xD10(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameResourcePoolReference            HydraDurationResourcePool;                         // 0xD60(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	bool                                         PauseFiring;                                       // 0xD78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3247[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TEDDroneFireTime;                                  // 0xD7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HydraDeathRadius;                                  // 0xD80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADroneProj_Hydra_C* GetDefaultObj();

	void SetPixieHydraVisuals(class UClass* NewElementToUse, enum class EOakElementalType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable1, class FName Temp_name_Variable2, class FName Temp_name_Variable3, class FName Temp_name_Variable4, class FName Temp_name_Variable5, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_Select_Default, class UClass* CallFunc_CheckClawElement_ReturnedElement, bool CallFunc_CheckClawElement_bIsValidElement);
	void GetHydraSpellData(struct FSpawnableSpellBasicData* Res);
	void CacheHydraDamageVariables(bool* Res);
	void GetHydraDamageData(float* Damage, float* Radius, class UClass** DamageType, class UClass** DamageSource);
	void GetHydraDuration(float* Res, bool Temp_bool_Variable, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetSpellDuration_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default);
	void GetHydraSlamDamage(float* Damage, float* Radius, class UClass** DamageType, class UClass** DamageSource, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void CheckClawElement(class UClass** ReturnedElement, bool* bIsValidElement, class UGbxAbility* ClawAbility, class APawn* CallFunc_GetInstigator_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, TScriptInterface<class IBPI_ClawArmor_C> K2Node_DynamicCast_AsBPI_Claw_Armor, bool K2Node_DynamicCast_bSuccess1, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UClass* CallFunc_GetClawArmorElement_Res, class UGbxAbility* CallFunc_FindAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetFireRateVariance(float* Res, float CallFunc_RandomFloatInRange_ReturnValue);
	void GetDroneOwner(class AActor** DroneOwner, class AActor* CallFunc_GetOwner_ReturnValue);
	void GetDroneHydraFireSocket(class FName* Res, class FName Temp_name_Variable, int32 Temp_int_Variable, class FName Temp_name_Variable1, class FName Temp_name_Variable2, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class FName K2Node_Select_Default);
	void HasValidTarget(bool* Res, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2);
	void UserConstructionScript();
	void OnBeginPlayAttackGraph();
	void FireDroneWeapon();
	void BeginFiringDroneWeapon();
	void CacheDamageValues();
	void Audio_Play_Firing();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void SetupSpawnedActor(class AGrenadeMod* OwningSpell);
	void FindDroneTarget();
	void DroneHydraResourcePoolNowFilled(const struct FGameResourcePoolReference& ResourcePool);
	void OnRep_CurrentTarget();
	void OnExplode();
	void CompanionCleanup();
	void ExtendDuration(float Duration_Extend_Percentage);
	void ExecuteUbergraph_DroneProj_Hydra(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_HasValidTarget_Res, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Min_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class FName CallFunc_GetDroneHydraFireSocket_Res, const struct FTransform& CallFunc_GetActorSocket_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, float CallFunc_GetValueOfAttribute_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_FTrunc_ReturnValue1, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_HasValidTarget_Res1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_CheckClawElement_ReturnedElement, bool CallFunc_CheckClawElement_bIsValidElement, class AGrenadeMod* K2Node_Event_OwningSpell, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, int32 CallFunc_RandomIntegerInRange_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* CallFunc_Array_Get_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetCompanionInCombat_Res, bool CallFunc_SetCompanionInCombat_Res1, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FGameResourcePoolReference& CallFunc_CreatePool_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, const struct FHitResult& Temp_struct_Variable, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float Temp_float_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool Temp_bool_Variable, float K2Node_CustomEvent_Duration_Extend_Percentage, float K2Node_Select_Default, float Temp_float_Variable1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, class UClass* CallFunc_CheckClawElement_ReturnedElement1, bool CallFunc_CheckClawElement_bIsValidElement1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue3, bool Temp_bool_Variable1, class AActor* CallFunc_GetOwner_ReturnValue1, class UClass* K2Node_Select1_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}


