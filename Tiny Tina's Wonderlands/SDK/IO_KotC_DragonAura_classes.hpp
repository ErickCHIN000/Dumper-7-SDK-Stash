#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x628 - 0x588)
// BlueprintGeneratedClass IO_KotC_DragonAura.IO_KotC_DragonAura_C
class AIO_KotC_DragonAura_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(Transient, DuplicateTransient)
	class UDecalComponent*                       Decal;                                             // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneBodySwitchComponent*             FX_Decal;                                          // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakTriggerComponent*                  OakTrigger;                                        // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              AuraParticle;                                      // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DragonAuraCenter;                                  // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EKotCDragonAuraStates             DragonAuraState;                                   // 0x5C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1810[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        DragonAuraTargets;                                 // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UOakPlayerAbility*                     KnightOfTheClawFeat;                               // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               StatusEffectOwner;                                 // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 DragonAuraEffectDuration;                          // 0x5E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FStruct_DragonAuraModifiers>   ModifierHandles;                                   // 0x600(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_AuraEnter;                                   // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_AuraExit;                                    // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DragonAuraSkillGrade;                              // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RebukingAuraSkillGrade;                            // 0x624(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AIO_KotC_DragonAura_C* GetDefaultObj();

	void ExternalRemoveDragonAuraTarget(class AActor* DragonAuraTarget, bool* Res, bool CallFunc_RemoveDragonAuraEffect_Res);
	void IsActorInMyDragonAura(class AActor* Actor, bool* Res, float CallFunc_GetDistanceTo_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void ResetAuraDuration(bool* Res);
	void PlayAuraAudio(class AActor* TargetPlayer, bool Enter, bool Temp_bool_Variable, class APawn* CallFunc_GetAssociatedPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, class UWwiseEvent* K2Node_Select_Default, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
	void SetGroundDecalState(bool Enabled);
	void GetAuraGrade(class UClass* Ability, bool* HasGrade, int32* Res, class AActor* CallFunc_GetOwner_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasAbility_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, TScriptInterface<class IIPassive_Parent_C> K2Node_DynamicCast_AsIPassive_Parent, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSkillGrade_Res);
	void AddModifierToList(struct FGbxAttributeModifierHandle& NewModifier, int32 Index, int32* ModifierIndex, int32 CallFunc_Array_Add_ReturnValue);
	void InitAuraAugments(const struct FDataTableValueHandle& Passive11_ScaleBonus, bool CallFunc_GetAuraGrade_HasGrade, int32 CallFunc_GetAuraGrade_Res, bool CallFunc_GetAuraGrade_HasGrade1, int32 CallFunc_GetAuraGrade_Res1);
	void RemvoeAllDragonAuraTargets(bool* Res, bool CallFunc_RemvoeAllDragonAuraTargets_Res, class AActor* CallFunc_Array_Get_Item, bool CallFunc_RemoveDragonAuraEffect_Res, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RemoveDragonAuraEffect(class AActor* DragonAuraTarget, bool* Res, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_UnregisterDragonAuraStatusEffect_Res, bool CallFunc_Not_PreBool_ReturnValue, const struct FStruct_DragonAuraModifiers& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void AddDragonAuraEffect(class AActor* DragonAuraTarget, bool* Res, int32 LocalIndex, class AActor* LocalTarget, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess, const struct FGbxAttributeModifierHandle& CallFunc_RegisterDragonAuraCDM_AttributeHandle, bool CallFunc_RegisterDragonAuraCDM_Res, int32 CallFunc_AddModifierToList_ModifierIndex, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw1, bool K2Node_DynamicCast_bSuccess1, const struct FGbxAttributeModifierHandle& CallFunc_RegisterDragonAuraStatusEffect_AttributeHandle, bool CallFunc_RegisterDragonAuraStatusEffect_Res, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TArray<struct FGbxAttributeModifierHandle>& K2Node_MakeArray_Array, int32 CallFunc_AddModifierToList_ModifierIndex1, const struct FStruct_DragonAuraModifiers& K2Node_MakeStruct_Struct_DragonAuraModifiers, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRep_DragonAuraState(bool K2Node_SwitchEnum_CmpSuccess);
	void SetDragonAuraState(enum class EKotCDragonAuraStates State);
	void DespawnDragonAura();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStateSpawning();
	void OnStateActive();
	void OnStateDespawn();
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_KotC_DragonAura(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_IO_KotC_DragonAura(class AActor* LeavingActor, bool bIsPlayer);
	void RefreshAugments();
	void DebugAura();
	void DragonAuraRefreshAllValues();
	void DraggonAura_OnDownStateStop();
	void Audio_Rep_Aura(class AActor* TargetPlayer, bool Enter);
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	void DebugAura_Added(class AActor* Target);
	void DebugAura_Removed(class AActor* Target);
	void ExecuteUbergraph_IO_KotC_DragonAura(int32 EntryPoint, bool Temp_bool_Variable, const class FString& Temp_string_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& Temp_string_Variable1, class UObject* K2Node_Select_Default, float CallFunc_EvaluateAttributeInitializer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool Temp_bool_Variable1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer1, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, class AActor* K2Node_ComponentBoundEvent_LeavingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, bool CallFunc_RemoveDragonAuraEffect_Res, bool CallFunc_AddDragonAuraEffect_Res, bool CallFunc_RemvoeAllDragonAuraTargets_Res, bool Temp_bool_Variable2, class UObject* K2Node_Select1_Default, float CallFunc_EvaluateAttributeInitializer_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const class FString& CallFunc_Conv_FloatToString_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_AddDragonAuraEffect_Res1, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue1, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance1, bool K2Node_DynamicCast_bSuccess1, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue1, bool CallFunc_RemvoeAllDragonAuraTargets_Res1, bool CallFunc_Greater_FloatFloat_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue4, const class FString& K2Node_Select2_Default, class AActor* CallFunc_GetOwner_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue5, bool CallFunc_AddDragonAuraEffect_Res2, const class FString& CallFunc_Concat_StrStr_ReturnValue6, class AActor* CallFunc_GetOwner_ReturnValue4, class UBPFightForYourLifeComponent_C* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* CallFunc_GetOwner_ReturnValue5, class UBPFightForYourLifeComponent_C* CallFunc_GetComponentByClass_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue7, bool K2Node_SwitchEnum_CmpSuccess, class AActor* K2Node_CustomEvent_TargetPlayer, bool K2Node_CustomEvent_Enter, class AActor* CallFunc_GetOwner_ReturnValue6, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_CustomEvent_DestroyedActor, class AActor* K2Node_CustomEvent_Target1, class AActor* K2Node_CustomEvent_Target, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue9, const class FString& CallFunc_Concat_StrStr_ReturnValue10, const class FString& CallFunc_Concat_StrStr_ReturnValue11, bool Temp_bool_Variable3, const class FString& K2Node_Select3_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue12, const class FString& CallFunc_GetDisplayName_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue13, class AActor* CallFunc_GetOwner_ReturnValue7, const class FString& CallFunc_Concat_StrStr_ReturnValue14, const class FString& CallFunc_GetDisplayName_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue15, const class FString& CallFunc_Concat_StrStr_ReturnValue16, const class FString& CallFunc_GetDisplayName_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue17, class AActor* CallFunc_GetOwner_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue18, const class FString& CallFunc_GetDisplayName_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue19, bool Temp_bool_IsClosed_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue20, const class FString& CallFunc_Concat_StrStr_ReturnValue21, const class FString& CallFunc_Concat_StrStr_ReturnValue22);
};

}


