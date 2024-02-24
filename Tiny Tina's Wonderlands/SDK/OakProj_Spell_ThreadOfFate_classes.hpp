#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x848 - 0x748)
// BlueprintGeneratedClass OakProj_Spell_ThreadOfFate.OakProj_Spell_ThreadOfFate_C
class AOakProj_Spell_ThreadOfFate_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(Transient, DuplicateTransient)
	class UGbxProjectileMovementComponent*       GbxProjectileMovement;                             // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                    SpawnTransforms;                                   // 0x760(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        ThreadCount;                                       // 0x770(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnCount;                                        // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AOakProj_Spell_ThreadOfFate_Child_C*> ThreadProjs;                                       // 0x778(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                FoundActor;                                        // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       ThreadEQS;                                         // 0x790(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class AOakProj_Spell_ThreadOfFate_C* GetDefaultObj();

	void SetupNextThreadBeam(class AOakProj_Spell_ThreadOfFate_Child_C* Target, class AOakProj_Spell_ThreadOfFate_Child_C* TargetProj, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const struct FOakLightBeamInitializationData& K2Node_MakeStruct_OakLightBeamInitializationData);
	void Init(class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FindNewTarget(class AActor* DamageReceiver, class AActor* DamageCauser);
	void SpawnThread();
	void OnHitWorld(struct FHitResult& Hit);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_OakProj_Spell_ThreadOfFate(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable2, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AOakProj_Spell_ThreadOfFate_Child_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AOakProj_Spell_ThreadOfFate_Child_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class AOakProj_Spell_ThreadOfFate_Child_C* CallFunc_Array_Get_Item2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue4, const struct FHitResult& K2Node_Event_Hit, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FLightBeamQueryData& K2Node_MakeStruct_LightBeamQueryData, class AOakProj_Spell_ThreadOfFate_Child_C* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
};

}


