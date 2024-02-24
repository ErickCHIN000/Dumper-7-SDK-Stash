#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2FC (0x79C - 0x4A0)
// BlueprintGeneratedClass SpellActor_CircleOfProtection_Base.SpellActor_CircleOfProtection_Base_C
class ASpellActor_CircleOfProtection_Base_C : public ABasicSpellActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(Transient, DuplicateTransient)
	class UOakHitRegionComponent*                OakHitRegion;                                      // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  AudioComponent;                                    // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RingsMesh;                                         // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CircleMesh;                                        // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_Opacity_DC4BAE2F48BA9A9D27FD0CA57038ED72; // 0x4C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_DC4BAE2F48BA9A9D27FD0CA57038ED72; // 0x4CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Scale_5972270E47DA6B7C588C9E9651BD3B25; // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Opacity_5972270E47DA6B7C588C9E9651BD3B25; // 0x4DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Emissive_5972270E47DA6B7C588C9E9651BD3B25; // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_5972270E47DA6B7C588C9E9651BD3B25; // 0x4E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           SpellOwningMod;                                    // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMod_04_PortableCircle;                            // 0x4F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStatusEffectData*                     StatusEffect;                                      // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMod_03_HealingCircle;                             // 0x508(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bMod_02_HydraCircle;                               // 0x509(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bMod_01_PullingCircle;                             // 0x50A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AB9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpellDamage;                                       // 0x50C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellDamageRadius;                                 // 0x510(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        SpellForce;                                        // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellStatusDamage;                                 // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellStatusChance;                                 // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SpellDamageType;                                   // 0x520(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_CoP_Ambient;                                    // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_CoP_Startup;                                    // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CircleFX;                                          // 0x538(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1ACA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AOakCharacter_Player*                  OwningPlayer;                                      // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseAuxBus*                          Audio_ZoneEffectBus;                               // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseZoneAudioEffect*                 Audio_EffectZone;                                  // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_ProjLpStart;                                 // 0x558(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_ProjHealingLp;                               // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_ProjLpStop;                                  // 0x5B0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        Opacity;                                           // 0x600(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Emissive;                                          // 0x604(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SphereScale;                                       // 0x608(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ADA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        AffectedTargets;                                   // 0x610(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FEnvQueryParams                       EnvQuery_Players;                                  // 0x620(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       EnvQuery_MushroomPet;                              // 0x6D8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UParticleSystemComponent*              SingularityFX;                                     // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HydraDamageMultiplier;                             // 0x798(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASpellActor_CircleOfProtection_Base_C* GetDefaultObj();

	void CleanupSingularity();
	void StartSingularity(float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue);
	void QueryAlliesAndApplyStatusEffect(int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors1, bool CallFunc_RunEnvQueryForAllActors_ReturnValue1);
	void CalculateDecalSize(struct FVector* Scale, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void SpawnDecal(class UMaterialInterface* DecalToUse, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* Temp_object_Variable5, enum class EOakElementalType Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable6, class UMaterialInterface* Temp_object_Variable7, class UMaterialInterface* Temp_object_Variable8, class UMaterialInterface* Temp_object_Variable9, class UMaterialInterface* Temp_object_Variable10, class UMaterialInterface* Temp_object_Variable11, enum class EOakElementalType Temp_byte_Variable1, const struct FVector& CallFunc_CalculateDecalSize_Scale, float CallFunc_GetValueOfAttribute_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class UMaterialInterface* K2Node_Select1_Default);
	void SpawnFX(class UParticleSystem* NewAmbientToUse, class UParticleSystem* NewStartupTemplateToUse, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, enum class EOakElementalType Temp_byte_Variable, class UParticleSystem* Temp_object_Variable3, class UParticleSystem* Temp_object_Variable4, class UParticleSystem* Temp_object_Variable5, class UParticleSystem* Temp_object_Variable6, class UParticleSystem* Temp_object_Variable7, class UParticleSystem* Temp_object_Variable8, enum class EOakElementalType Temp_byte_Variable1, class UParticleSystem* Temp_object_Variable9, class UParticleSystem* Temp_object_Variable10, class UParticleSystem* Temp_object_Variable11, class UParticleSystem* Temp_object_Variable12, class UParticleSystem* Temp_object_Variable13, class UParticleSystem* Temp_object_Variable14, enum class EOakElementalType Temp_byte_Variable2, class UParticleSystem* Temp_object_Variable15, class UParticleSystem* Temp_object_Variable16, class UParticleSystem* Temp_object_Variable17, class UParticleSystem* Temp_object_Variable18, class UParticleSystem* Temp_object_Variable19, class UParticleSystem* Temp_object_Variable20, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class UParticleSystem* Temp_object_Variable21, class UParticleSystem* Temp_object_Variable22, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UParticleSystem* Temp_object_Variable23, bool CallFunc_BooleanAND_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class UParticleSystem* K2Node_Select_Default, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue1, class UParticleSystem* K2Node_Select1_Default, class UParticleSystem* K2Node_Select2_Default, enum class EOakElementalType Temp_byte_Variable3, bool CallFunc_IsValid_ReturnValue, class UParticleSystem* K2Node_Select3_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1);
	void DoCircleDamage(const struct FHitResult& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue);
	void OnRep_CircleFX();
	void InitialMaterialSetup(enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_SpellDamageType(enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_SpellDamageRadius();
	void SetSpellData();
	void OnRep_bMod_03_HealingCircle();
	void ConfigureModType(float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void OnRep_bMod_04_PortableCircle();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void SpawnMod02Hydras();
	void Audio_Start_ProjLp();
	void Audio_Stop_ProjLp();
	void ReceiveBeginPlay();
	void SetupProjectile();
	void SphereFX();
	void ActivateSphere();
	void LifetimeDone();
	void EndFX();
	void BeginSigilSpawning();
	void SetupMod4();
	void ExecuteUbergraph_SpellActor_CircleOfProtection_Base(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<struct FTransform>& CallFunc_GeneratePointsOnFan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue2, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class UWwiseZoneAudioEffect* CallFunc_CreateZoneAudioEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue, const struct FVector& CallFunc_FindNavMeshPoint_Result, bool CallFunc_FindNavMeshPoint_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1);
};

}


