#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D9 (0x619 - 0x440)
// BlueprintGeneratedClass Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C
class UFeat_KnightOfTheClaw_C : public U_Feat_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	bool                                         NewPetSpawn;                                       // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 PetRespawnTime;                                    // 0x450(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 PetFirstSpawnScalar;                               // 0x468(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          PetSpawnTimer;                                     // 0x480(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class ADrone_PlayerCompanionParent_C*        DragonCompanion;                                   // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       PetSpawnLocation;                                  // 0x490(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        BonusEffectList;                                   // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Feat_KnightOfTheClaw; // 0x558(0x28)(None)
	int32                                        Passive9Stacks;                                    // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 Passive9MaxStacks;                                 // 0x588(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        Passive9SpentStacks;                               // 0x5A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Feat_KnightOfTheClaw; // 0x5A8(0x28)(None)
	struct FGbxAttributeModifierHandle           HammerOfTheDragonGodsBonusDamageAttribute;         // 0x5D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AIO_KotC_DragonAura_C*                 MyDragonAura;                                      // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DragonAuraSpawnTimer;                              // 0x5E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 Passive7RegenDuration;                             // 0x5F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UParticleSystemComponent*              RecallFX1st;                                       // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              RecallFX;                                          // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlaySpawnDialogue;                                 // 0x618(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFeat_KnightOfTheClaw_C* GetDefaultObj();

	void KnightOfTheClawStartDragonBreathAttack(bool* Res, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, bool CallFunc_IsPlayingClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HammerOfTheDragonGodsSetRecallFXState(bool State, bool* Res, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1);
	void KnightOfTheClassPassive7_StartRegen(bool* Res, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec);
	void DragonAuraRefresh(bool* Res, bool CallFunc_IsValid_ReturnValue);
	void TryToRemoveDragonAuraEffect(class AActor* TargetActor, bool* Res, TScriptInterface<class IInterface_KotC_DragonAura_C> K2Node_DynamicCast_AsInterface_Kot_C_Dragon_Aura, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ExternalRemoveDragonAuraTarget_Res);
	void RegisterDragonAuraCDM(class AActor* TargetActor, class UConditionalDamageModifier* CDM, class UGbxAttributeData* PassiveAttribute, int32 Grade, bool bUseDamageCauser, struct FGbxAttributeModifierHandle* AttributeHandle, bool* Res, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue1, class UDamageBaseComponent* K2Node_Select_Default, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier);
	void UnregisterDragonAuraCDM(class AActor* TargetActor, class UConditionalDamageModifier* CDM, bool bUseDamageCauser, bool* Res, bool Temp_bool_Variable, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue1, class UDamageBaseComponent* K2Node_Select_Default, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier);
	void RegisterDragonAuraStatusEffect(class AActor* TargetActor, class UGbxAttributeData* Attribute, int32 Grade, float Duration_Optional_, struct FGbxAttributeModifierHandle* AttributeHandle, bool* Res, const struct FGbxAttributeModifierHandle& LocalHandle, float CallFunc_Conv_IntToFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
	void UnregisterDragonAuraStatusEffect(class AActor* TargetActor, bool* Res, bool CallFunc_HasDragonAuraPerks_Res, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
	void KnightOfTheClawSpawnDragonBreathEmitter(bool Enable, bool* Res);
	void KnightOfTheClawPassive9_GetSpentStacks(int32* Stacks);
	void KnightOfTheClawPassive9_AddStack(int32* Res, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void KnightOfTheClawPassive9_Getstacks(int32* Res);
	void KnightOfTheClawPassive9_ResetStacks(bool* Res);
	void StartDragonRoarEffect(bool* Res, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_FindAllPlayerCharacters_Res, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, float CallFunc_BreakGbxAttributeFloat_Value, float CallFunc_BreakGbxAttributeFloat_BaseValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void StopDragonRoarEffect(bool* Res, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_FindAllPlayerCharacters_Res, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, float CallFunc_BreakGbxAttributeFloat_Value, float CallFunc_BreakGbxAttributeFloat_BaseValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_BreakGbxAttributeFloat_Value1, float CallFunc_BreakGbxAttributeFloat_BaseValue1, bool CallFunc_Less_FloatFloat_ReturnValue);
	void DespawnDragonPet(bool* Res, class AActor* CallFunc_GetDragonPet_Ref, TScriptInterface<class IIDrone_PlayerCompanionParent_C> K2Node_DynamicCast_AsIDrone_Player_Companion_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CompanionDespawn_Res);
	void SpawnDragonPet(bool* Res, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue, class AActor* CallFunc_GetDragonPet_Ref, bool CallFunc_IsValid_ReturnValue);
	void GetDragonPet(class AActor** Ref);
	void Passive7_StartRegen(const struct FOakAbilityTimerSpec& AbilityTimer, bool* Res, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1);
	void Passive7_StopRegen(const struct FOakAbilityTimerSpec& AbilityTimer, enum class EOakAbilityTimerResult EndResult, bool* Res, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec1, bool CallFunc_RemoveStatusEffect_ReturnValue1);
	void HasDragonAuraPerks(class AActor* Player, bool* Res, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void GetDragonSpawnLocation(struct FTransform* Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void GetDragonSpawnTime(float* Res, float Scale, bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default);
	void OnResumed();
	void OnPaused();
	void OnDeactivated();
	void OnActivated();
	void BindCompanionEvents();
	void OakPassiveOnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OakPassiveOnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void BindDragonAuraEvents();
	void ActivateDragonAura();
	void RemoveDragonAura(class AIO_KotC_DragonAura_C* DragonAura);
	void OnDragonPetSpawned(class AActor* SpawnedActor, struct FPetInfo& PetData);
	void OnDragonPetReleased(class AActor* Pet, enum class EPetReleaseReason Reason);
	void RemovePetBinds();
	void DragonAuraRegisterThornyAura(bool Enable, class AActor* Target);
	void DragonAura_ThornyAuraOnTakeDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec& Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void KotCFeat_OnRespawnStart();
	void ExecuteUbergraph_Feat_KnightOfTheClaw(int32 EntryPoint, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue, bool Temp_bool_Variable, enum class EPetReleaseReason Temp_byte_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasPlayerClass_Res, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details1, class AActor* K2Node_Event_DamageInstigator, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, bool CallFunc_ClassIsChildOf_ReturnValue1, class AIO_KotC_DragonAura_C* K2Node_Event_DragonAura, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AIO_KotC_DragonAura_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* K2Node_CustomEvent_SpawnedActor, const struct FPetInfo& K2Node_CustomEvent_PetData, class AActor* K2Node_CustomEvent_Pet, enum class EPetReleaseReason K2Node_CustomEvent_Reason, class ADrone_KnightOfTheClaw_DragonPet_C* K2Node_DynamicCast_AsDrone_Knight_Of_the_Claw_Dragon_Pet, bool K2Node_DynamicCast_bSuccess1, bool K2Node_Select_Default, class ADrone_KnightOfTheClaw_DragonPet_C* K2Node_DynamicCast_AsDrone_Knight_Of_the_Claw_Dragon_Pet1, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue1, bool K2Node_Event_Enable, class AActor* K2Node_Event_Target, class UDamageComponent* K2Node_CustomEvent_DamageReceiver, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AController* K2Node_CustomEvent_InstigatedBy, class UDamageCauserComponent* K2Node_CustomEvent_DamageCauser, const struct FReceivedDamageDetails& K2Node_CustomEvent_Details, bool Temp_bool_Has_Been_Initd_Variable, const struct FOakAbilityTimerSpec& K2Node_Event_Spec1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, bool CallFunc_Passive7_StartRegen_Res, bool CallFunc_Passive7_StopRegen_Res, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class AIO_KotC_DragonAura_C* K2Node_Select1_Default, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_SpawnDragonPet_Res, bool CallFunc_DespawnDragonPet_Res, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3);
};

}


