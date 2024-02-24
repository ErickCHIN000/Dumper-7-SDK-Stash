#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF6 (0x8E8 - 0x7F2)
// BlueprintGeneratedClass Proj_VLA_SR_DrylsFury_Orb.Proj_VLA_SR_DrylsFury_Orb_C
class AProj_VLA_SR_DrylsFury_Orb_C : public AProj_Weapon_BaseProjectile_C
{
public:
	uint8                                        Pad_4209[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F8(0x8)(Transient, DuplicateTransient)
	class UWwiseAudioComponent*                  Proj_Lp;                                           // 0x800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakDamageComponent*                   OakDamage;                                         // 0x808(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Trail;                                             // 0x810(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       FindAttachTarget;                                  // 0x818(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWwiseEvent*                           Audio_AirExplode;                                  // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasBeenShot;                                      // 0x8D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4219[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttachLifetime;                                    // 0x8DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxOrbStages;                                      // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentOrbStages;                                  // 0x8E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_VLA_SR_DrylsFury_Orb_C* GetDefaultObj();

	void CleanupBeams();
	void PlayShotFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
	void BeginDrylsFuryCleanup();
	void CauseDamageOverTime(class AActor* CallFunc_GetOwner_ReturnValue, const struct FHitResult& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnExplode();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_VLA_SR_DrylsFury_Orb(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void CloseShotGate();
	void WeaponProjectileExplode();
	void OnHitDamagableObject(struct FHitResult& Hit);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void CallExplode();
	void PlayShot();
	void ExecuteUbergraph_Proj_VLA_SR_DrylsFury_Orb(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable, class UDamageComponent* K2Node_ComponentBoundEvent_DamageReceiver, float K2Node_ComponentBoundEvent_Damage, class UGbxDamageType* K2Node_ComponentBoundEvent_DamageType, class UDamageSource* K2Node_ComponentBoundEvent_DamageSource, class AController* K2Node_ComponentBoundEvent_InstigatedBy, class UDamageCauserComponent* K2Node_ComponentBoundEvent_DamageCauser, const struct FReceivedDamageDetails& K2Node_ComponentBoundEvent_Details, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& K2Node_Event_Hit1, int32 CallFunc_Add_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue3, const struct FOakLightBeamInitializationData& K2Node_MakeStruct_OakLightBeamInitializationData);
};

}


