#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x590 - 0x440)
// BlueprintGeneratedClass Feat_GunMage.Feat_GunMage_C
class UFeat_GunMage_C : public U_Feat_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	struct FGameResourcePoolReference            SpellweavingStacks;                                // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	struct FDataTableValueHandle                 MaxStackTime;                                      // 0x460(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class ECollisionEnabled                 CollisionType;                                     // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CastShadows;                                       // 0x479(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3263[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  Feat_GunMage_SpecialReload;                        // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  Feat_GunMage_SpellweavingStackLost;                // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  Feat_GunMage_SpellweavingStackGained;              // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameResourcePoolReference            SpellweavingStackDuration;                         // 0x4B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Feat_GunMage; // 0x4C8(0x28)(None)
	int32                                        WildMagicGrade;                                    // 0x4F0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpellComboChallengeCount;                          // 0x4F4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RepeatChance;                                      // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3267[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Feat_GunMage; // 0x500(0x28)(None)
	struct FDataTableValueHandle                 RepeatChanceHandle;                                // 0x528(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSet<class AGrenadeMod*>                     InitialCastOfSpells;                               // 0x540(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UFeat_GunMage_C* GetDefaultObj();

	void GunMageSetWildMagicGrade(int32 NewGrade, bool* Res);
	void TogglePolymorphLocks(class AActor* PolymoprhTarget, bool EnableLocks, class UTeam* StartingTeam, bool* Res, class UTeam* LocalStartingTeam, bool LocalEnableLocks, class AActor* LocalPolymorphTarget);
	void GetSpellweavingStacks(int32* Res, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid2, float CallFunc_BreakResourcePoolReference_CurrentValue2, float CallFunc_BreakResourcePoolReference_MinValue2, float CallFunc_BreakResourcePoolReference_MaxValue2, int32 CallFunc_FTrunc_ReturnValue);
	void RemoveAllSpellweavingStacks(bool Force, bool* Res, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanChangeStackAmount_Res, bool CallFunc_BooleanOR_ReturnValue);
	void AddSpellweavingStacks(int32 Stacks, int32* Res, bool BumStacks, int32 LocalStacks, const struct FDataTableValueHandle& ExtraStackChance, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid2, float CallFunc_BreakResourcePoolReference_CurrentValue2, float CallFunc_BreakResourcePoolReference_MinValue2, float CallFunc_BreakResourcePoolReference_MaxValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid3, float CallFunc_BreakResourcePoolReference_CurrentValue3, float CallFunc_BreakResourcePoolReference_MinValue3, float CallFunc_BreakResourcePoolReference_MaxValue3, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_CanChangeStackAmount_Res, bool CallFunc_BooleanOR_ReturnValue);
	void RemoveSpellweavingStacks(int32 Stacks, int32* Res, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanChangeStackAmount_Res, bool CallFunc_BreakResourcePoolReference_bValid2, float CallFunc_BreakResourcePoolReference_CurrentValue2, float CallFunc_BreakResourcePoolReference_MinValue2, float CallFunc_BreakResourcePoolReference_MaxValue2, int32 CallFunc_FTrunc_ReturnValue);
	void CanChangeStackAmount(bool* Res);
	void GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, int32 CallFunc_GetManualHUDIconValues_outStackCount, float CallFunc_GetManualHUDIconValues_outDuration, float CallFunc_GetManualHUDIconValues_outTimeRemaining, bool CallFunc_BreakResourcePoolReference_bValid2, float CallFunc_BreakResourcePoolReference_CurrentValue2, float CallFunc_BreakResourcePoolReference_MinValue2, float CallFunc_BreakResourcePoolReference_MaxValue2, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid3, float CallFunc_BreakResourcePoolReference_CurrentValue3, float CallFunc_BreakResourcePoolReference_MinValue3, float CallFunc_BreakResourcePoolReference_MaxValue3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void BumpSpellweavingTimer();
	void OnActivated();
	void OnResumed();
	void Feat_GunMage_SpecialReload_Event();
	void OakPassiveOnReloadEnded(class AWeapon* Weapon, bool Completed, bool AmmoGiven);
	void SpellweavingStackDurationPoolDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void OakPassiveOnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void SetupSpellComboChallenge();
	void CloseChallengeGate();
	void OpenChallengeGate();
	void OakPassiveOnSpellCastFired(class AGrenadeMod* SpellMod, class AOakCharacter_Player* EquippedPlayer);
	void SpellCastInit(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer);
	void ExecuteUbergraph_Feat_GunMage(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Variable, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, int32 CallFunc_AddSpellweavingStacks_Res, bool CallFunc_RemoveAllSpellweavingStacks_Res, bool CallFunc_RemoveAllSpellweavingStacks_Res1, int32 CallFunc_RemoveSpellweavingStacks_Res, class AWeapon* K2Node_Event_Weapon, bool K2Node_Event_Completed, bool K2Node_Event_AmmoGiven, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue1, bool CallFunc_ClassIsChildOf_ReturnValue2, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, bool CallFunc_CheckChallengeStatus_Complete, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_ClassIsChildOf_ReturnValue3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AGrenadeMod* K2Node_Event_SpellMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, bool CallFunc_RandomBoolWithWeight_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue1, bool CallFunc_Set_Remove_ReturnValue);
	void Feat_GunMage_SpellweavingStackGained__DelegateSignature();
	void Feat_GunMage_SpellweavingStackLost__DelegateSignature();
	void Feat_GunMage_SpecialReload__DelegateSignature();
};

}


