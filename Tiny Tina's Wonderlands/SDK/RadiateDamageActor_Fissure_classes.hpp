#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x264 (0xA24 - 0x7C0)
// BlueprintGeneratedClass RadiateDamageActor_Fissure.RadiateDamageActor_Fissure_C
class ARadiateDamageActor_Fissure_C : public AOakRadiateDamageActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  ProjAudio;                                         // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         EffectCollision;                                   // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SpellDamage;                                       // 0x7E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellForce;                                        // 0x7EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellRadius;                                       // 0x7F0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellStatusChance;                                 // 0x7F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellStatusDamage;                                 // 0x7F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                SpellType;                                         // 0x800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           OwningSpell;                                       // 0x808(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPopUpFissure;                                     // 0x810(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bChainFissure;                                     // 0x811(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFractureFissure;                                  // 0x812(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AftershockFissure;                                 // 0x813(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       FissureChainEQS;                                   // 0x818(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       FissureAftershockEQS;                              // 0x8D0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         FiredRight;                                        // 0x988(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        AftershockTargets;                                 // 0x990(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         AftershockSplit;                                   // 0x9A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChildFracture;                                     // 0x9A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B68[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ElementalEffectCollection;                         // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_ProjLp;                                      // 0x9B0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_ProjLpStop;                                  // 0xA00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 BeamCountHandle;                                   // 0xA08(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        RadiusScalar;                                      // 0xA20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARadiateDamageActor_Fissure_C* GetDefaultObj();

	void SetupBonusRadius(float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void ChainFissure(class AActor* DamageTarget, class FName SourceSocket, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetSpellDamageType_ReturnValue, class FName CallFunc_GetCompanionTargetingSocket_Socket, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Less_IntInt_ReturnValue1, class FName CallFunc_GetCompanionTargetingSocket_Socket1, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1, const struct FLightBeamInitializationData& K2Node_MakeStruct_LightBeamInitializationData);
	void SendAftershock(class AActor* LocalTarget, bool LastFiredRight, bool FoundNewTarget, const TArray<class AActor*>& FoundActors, const struct FRotator& AftershockRot, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool Temp_bool_Variable1, const struct FVector& CallFunc_GetActorRightVector_ReturnValue1, const struct FVector& CallFunc_NegateVector_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue1, const struct FRotator& K2Node_Select1_Default);
	void InitSpellData(class AGrenadeMod* OwningSpell, class UClass* CallFunc_GetSpellDamageType_ReturnValue, float CallFunc_GetSpellStatusEffectDamage_ReturnValue, float CallFunc_GetSpellStatusEffectChance_ReturnValue, float CallFunc_GetSpellModRadius_ReturnValue, float CallFunc_GetSpellForce_ReturnValue, float CallFunc_GetSpellModDamage_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void DamageEnemy(class AActor* DamageTarget, const struct FHitResult& Temp_struct_Variable, bool CallFunc_K2_EvaluateConditionType_ReturnValue, class UClass* CallFunc_GetSpellDamageType_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetupSpawnedActor(class AGrenadeMod* OwningSpell);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_RadiateDamageActor_Fissure(int32 EntryPoint, enum class EOakElementalType Temp_byte_Variable, class USplatData* Temp_object_Variable, class USplatData* Temp_object_Variable1, class USplatData* Temp_object_Variable2, class USplatData* Temp_object_Variable3, class USplatData* Temp_object_Variable4, class USplatData* Temp_object_Variable5, class AGrenadeMod* K2Node_Event_OwningSpell, class AActor* K2Node_Event_OtherActor, bool CallFunc_DoesSpellHavePart_ReturnValue, bool CallFunc_DoesSpellHavePart_ReturnValue1, bool CallFunc_DoesSpellHavePart_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_RandomBool_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class USplatData* K2Node_Select_Default, class UParticleSystem* CallFunc_StaticGetParticleEffectAndWwiseEvent_ParticleEffect, class UWwiseEvent* CallFunc_StaticGetParticleEffectAndWwiseEvent_WwiseEvent, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


