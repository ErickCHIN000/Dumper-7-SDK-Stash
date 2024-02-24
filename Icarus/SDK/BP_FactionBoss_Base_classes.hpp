#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x4A0 - 0x440)
// BlueprintGeneratedClass BP_FactionBoss_Base.BP_FactionBoss_Base_C
class ABP_FactionBoss_Base_C : public AIcarusPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                MainMesh;                                          // 0x448(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Flammable_FactionBoss_C*           BP_Flammable_FactionBoss;                          // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExperienceComponent*                  Experience;                                        // 0x458(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HitableBehaviour_Tree_C*           BehaviourTree;                                     // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x468(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TargetActorBlackboardKey;                          // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanAttackTargets;                                  // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBoss;                                            // 0x479(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C3A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LastDamageCauser;                                  // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           LastDamageInstigator;                              // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTransformUpdated;                                // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_FactionBoss_Base_C* GetDefaultObj();

	void NotifyBossDeath(class AIcarusPlayerCharacter* Killer, class AIcarusActor* Causer);
	bool CanHitDamageTarget(class AActor* TargetActor, const struct FHitResult& InHit, bool CallFunc_CanHitDamageTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnMontageComplete(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageStarted(class UAnimMontage* Montage);
	void PreventAttacksForActiveMontage(bool AttacksEnabled, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	void ScaleAndApplyStats(TMap<struct FStatsEnum, int32> StatList, TMap<struct FStatsEnum, int32> ScaledStats, TArray<struct FStatsEnum>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FStatsEnum& CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, TArray<struct FConnectedPlayer>& CallFunc_GetInitialisedConnectedPlayers_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_ScaleStatForPlayerCount_ScaledValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue);
	void ScaleStatForPlayerCount(const struct FStatsEnum& Stat, int32 UnscaledValue, int32 PlayerCount, int32* ScaledValue);
	void InitialiseStatsAndTags();
	void UpdateReplicatedBlackboardValues(class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	class USkeletalMeshComponent* GetAnimatedMeshComponent();
	void ReceiveTick(float DeltaSeconds);
	void MULTI_SetActorLocation(const struct FVector& NewLocation);
	void SetDamageEnabled(bool bEnabled);
	void ReceiveBeginPlay();
	void OnBossDamaged(class UActorState* ActorState, int32 DamageTaken, struct FDamageEvent& DamageEvent, class AController* Instigator, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_FactionBoss_Base(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& K2Node_CustomEvent_NewLocation, bool K2Node_Event_bEnabled, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_RemoveStats_BP_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UActorState* K2Node_CustomEvent_ActorState, int32 K2Node_CustomEvent_DamageTaken, const struct FDamageEvent& K2Node_CustomEvent_DamageEvent, class AController* K2Node_CustomEvent_Instigator, class AActor* K2Node_CustomEvent_DamageCauser);
	void OnTransformUpdated__DelegateSignature(const struct FTransform& NewTransform);
};

}


