#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x14A8 - 0x13F0)
// BlueprintGeneratedClass BPFightForYourLifeComponent.BPFightForYourLifeComponent_C
class UBPFightForYourLifeComponent_C : public UFightForYourLifeComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x13F0(0x8)(Transient, DuplicateTransient)
	struct FGbxAttributeModifierHandle           RechargeDisabledHandle;                            // 0x13F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakCharacter*                         OwnerOakChar;                                      // 0x1408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioEffect*                     AudioEffect;                                       // 0x1410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                      DamageMark;                                        // 0x1418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Action_Injured;                                    // 0x1420(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Action_Death;                                      // 0x1428(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Action_Resurrect_Unarmed;                          // 0x1430(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Action_Resurrect_Weapon;                           // 0x1438(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DownedActor;                                       // 0x1440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_DownstateLpInst;                             // 0x1448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APawn*                                 DamageInstigator;                                  // 0x1460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_SecondWind;                                  // 0x1468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_DownstateStart;                              // 0x1470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseAuxBus*                          Audio_DownstateAuxBus;                             // 0x1478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseRtpc*                            Audio_DownstateTimeRTPC;                           // 0x1480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  PlayerAudioComponent;                              // 0x1488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseRtpc*                            Audio_DownstateExitDelayRTPC;                      // 0x1490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_Revived;                                     // 0x1498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_DeathStartSplitScreen;                       // 0x14A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPFightForYourLifeComponent_C* GetDefaultObj();

	void SecondWindKillCheck(class UActorComponent* DamagedActor, struct FCausedDeathDetails& CausedDeathDetails, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, bool CallFunc_Compare_Damage_Source_Equal2, bool CallFunc_Compare_Damage_Source_Not_Equal2, bool CallFunc_Compare_Damage_Source_Equal3, bool CallFunc_Compare_Damage_Source_Not_Equal3, bool CallFunc_Compare_Damage_Source_Equal4, bool CallFunc_Compare_Damage_Source_Not_Equal4, bool CallFunc_Compare_Damage_Source_Equal5, bool CallFunc_Compare_Damage_Source_Not_Equal5, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsFrozenToDeath_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue3, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_HasMatchingGameplayTag_ReturnValue1, bool Temp_bool_Variable1, class AActor* CallFunc_GetOwner_ReturnValue4, enum class ETeamAttitude CallFunc_GetAttitudeTowardActor_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void WormholeStarting(bool CallFunc_IsLocalOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InjuredIsRespawning(bool CallFunc_IsLocalOwner_ReturnValue);
	void MarkDamagedEnemy(class AActor* DamagedActor, class UDamageComponent* MyPreviousMark, class AActor* MyDamagedActor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UDamageComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UTeamComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsHostile_ReturnValue);
	void DownState_CinematicPause_Local();
	void DownState_CinematicPause_Host();
	void Exertion_StanceChange(const struct FStanceChangedEventArgs& StanceArgs, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UOakStatusEffectManagerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class UOakStatusEffectManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_RemoveStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void ImmediateTravelToResurrectLocal(class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UScreenParticleManagerComponent* CallFunc_GetComponentByClass_ReturnValue);
	void DownState_Finished_Local(class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class UScreenParticleManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void ImmediateTravelToResurrectHost(bool Interrupted, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue);
	void ResurrectAtResurrectStation(class UTravelStationResurrectComponent* ResurrectStationComponent, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class AWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, class UGbxAction* CallFunc_K2Play_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue1);
	void GivingUp_Stopped_Local();
	void GivingUp_Started_Local();
	void GivingUp_Stopped_Host();
	void GivingUp_Started_Host();
	void ReplenishHeavyAmmoToSetPercentage(class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue4, float CallFunc_GetValueOfAttribute_ReturnValue5, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReplenishGrenadeAmmoToSetPercentage(class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue5, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReplenishPistolAmmoToSetPercentage(class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue4, float CallFunc_GetValueOfAttribute_ReturnValue5, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReplenishShotgunAmmoToSetPercentage(class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue5, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReplenishSniperRifleAmmoToSetPercentage(class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue5, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReplenishAssault_RifleAmmoToSetPercentage(class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue4, float CallFunc_GetValueOfAttribute_ReturnValue5, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReplenishSMGAmmoToSetPercentage(class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue5, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void DownState_Finished_Host(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	void Reviving_Stopped_Host(bool IsHealed, bool MySuccess, class AController* CallFunc_GetAssociatedController_ReturnValue, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class UPlayerBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Reviving_Started_Local(class AOakPlayerController* OwnerOakPlayerController, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue);
	void Reviving_Started_Host(class AActor* ActorBeingRevived, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1);
	void RespawnAtResurrectStation(const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue);
	void ReplenishHealthAndShields(float HealthPercent, float ShieldPercent, class AActor* CallFunc_GetOwner_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult1, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess);
	void InjuredStop(class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveAttributeModifier_ReturnValue);
	void InjuredLive();
	void FightForYourLifeRevived();
	void FightForYourLifeTimeExpired(class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess);
	void BeingRevived_Stopped_Host(const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void DownState_Stopped_Local(class AOakCharacter* MyCharacter, class APlayerController* MyController, bool Temp_bool_Variable, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UScreenParticleManagerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsSplitScreen_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, class UWwiseEvent* K2Node_Select_Default, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1);
	void DownState_Stopped_Host(TArray<struct FGbxActionRegister>& Temp_struct_Variable, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void BeingRevived_Started_Local();
	void BeingRevived_Started_Host();
	void FightForYourLifeKilledEnemy(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void DownState_Started_Local(class AOakCharacter* MyCharacter, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, class UWwiseAudioEffect* CallFunc_CreateAudioEffect_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void DownState_Started_Host(class AOakCharacter* MyChar, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGbxActionComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess);
	void FFYL_Penalty_Recover(float Delay);
	void MarkDamagedEnemy_Died(class AActor* DamageReceiver, class AActor* DamageCauser);
	void MarkDamagedEnemy_RefreshDelay();
	void ReceiveBeginPlay();
	void FFYL_Penalty_Apply();
	void WatchForSecondWindKill(bool Start);
	void CausedDeath(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_BPFightForYourLifeComponent(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, float K2Node_CustomEvent_Delay, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class UOakStatusEffectManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, class AActor* CallFunc_GetOwner_ReturnValue3, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue4, class UOakStatusEffectManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue3, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool K2Node_CustomEvent_Start, class AActor* CallFunc_GetOwner_ReturnValue5, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue2, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details, class APawn* CallFunc_GetAssociatedPawn_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue);
};

}

