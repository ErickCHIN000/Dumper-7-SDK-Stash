#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x711 - 0x6F0)
// BlueprintGeneratedClass BP_InquisitorOfBast.BP_InquisitorOfBast_C
class ABP_InquisitorOfBast_C : public ABP_BaseAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaggerComponent_C*                   StaggerComponent;                                  // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SwordMesh;                                         // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_BossHealthBar_C*                   BossHealth;                                        // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseExtraLife_;                                     // 0x710(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_InquisitorOfBast_C* GetDefaultObj();

	void CanBeStunned(bool* Result, bool CallFunc_RandomBoolWithWeight_ReturnValue);
	void MeleeAttack(enum class E_MeleeAttackType Type, float* Duration, float CallFunc_MeleeAttack_Duration);
	void HideStatsWidget(bool CallFunc_IsValid_ReturnValue);
	void ShowStatsWidget(bool CallFunc_IsValid_ReturnValue, class UWB_BossHealthBar_C* CallFunc_Create_ReturnValue);
	void Death(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages);
	void OnNotifyEnd_884CEE8C4D4F951FED2251989BFAFDB1(class FName NotifyName);
	void OnNotifyBegin_884CEE8C4D4F951FED2251989BFAFDB1(class FName NotifyName);
	void OnInterrupted_884CEE8C4D4F951FED2251989BFAFDB1(class FName NotifyName);
	void OnBlendOut_884CEE8C4D4F951FED2251989BFAFDB1(class FName NotifyName);
	void OnCompleted_884CEE8C4D4F951FED2251989BFAFDB1(class FName NotifyName);
	void OnNotifyEnd_08E7815C4EB2972CB21D4FAB6459C922(class FName NotifyName);
	void OnNotifyBegin_08E7815C4EB2972CB21D4FAB6459C922(class FName NotifyName);
	void OnInterrupted_08E7815C4EB2972CB21D4FAB6459C922(class FName NotifyName);
	void OnBlendOut_08E7815C4EB2972CB21D4FAB6459C922(class FName NotifyName);
	void OnCompleted_08E7815C4EB2972CB21D4FAB6459C922(class FName NotifyName);
	void OnCollisionActivated(enum class E_CollisionPart Selection);
	void Update_Items();
	void HandleMeshOnDeath();
	void Respawn();
	void BndEvt__MeleeCollisionHandler_K2Node_ComponentBoundEvent_0_OnHit__DelegateSignature(const struct FHitResult& HitResult);
	void UpdateStaggerValue();
	void ActivateStagger();
	void SecondStageBuffs();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_InquisitorOfBast(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName Temp_name_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FHitResult& K2Node_ComponentBoundEvent_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UStaggerComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, bool Temp_bool_IsClosed_Variable, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float CallFunc_PlayAnimMontage_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
};

}


