#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x125 (0x8E5 - 0x7C0)
// BlueprintGeneratedClass DroneProjectile_Watcher.DroneProjectile_Watcher_C
class ADroneProjectile_Watcher_C : public AOakDroneProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Transient, DuplicateTransient)
	class UOakTriggerComponent*                  OakTrigger;                                        // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  ProjAudio;                                         // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_DragonLord_TheWatcher;                          // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakDialogComponent*                   OakDialog;                                         // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSpawnableSpellBasicData              MySpellData;                                       // 0x7E8(0x40)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	struct FEnvQueryParams                       EQS;                                               // 0x828(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        NumAddedDamage;                                    // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasStartedExploding;                              // 0x8E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ADroneProjectile_Watcher_C* GetDefaultObj();

	void SearchForTarget(class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue);
	void TryHomeInAudio(const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void TrySummonAudio(const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Despawn(class AOakCharacter* EquipInstigator);
	void HomeToEnemy();
	void OnBeginExplode();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_DroneProjectile_LookingGlass(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnExplode();
	void TargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_DroneProjectile_Watcher(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void ExecuteUbergraph_DroneProjectile_Watcher(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AOakCharacter* K2Node_CustomEvent_EquipInstigator, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
};

}


