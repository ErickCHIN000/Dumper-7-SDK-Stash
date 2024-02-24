#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14A (0x58A - 0x440)
// BlueprintGeneratedClass Feat_Necromancer.Feat_Necromancer_C
class UFeat_Necromancer_C : public U_Feat_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Feat_Necromancer; // 0x448(0x28)(None)
	struct FDataTableValueHandle                 PetRespawnTime;                                    // 0x470(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 PetFirstSpawnScalar;                               // 0x488(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DemiLichCompanion;                                 // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       PetSpawnLocation;                                  // 0x4B0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGbxAttributeFloat                    Att_Lich_SpellDamageScalar;                        // 0x568(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_Lich_DoubleCastChance;                         // 0x574(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ADrone_PlayerCompanionParent_C*        DemiLichCompanionDrone;                            // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DelegatesRegistered;                               // 0x588(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlaySpawnDialogue;                                 // 0x589(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFeat_Necromancer_C* GetDefaultObj();

	void GetDemiLichDrone(class ADrone_PlayerCompanionParent_C** Ref);
	void SpawnDemiLich(class AActor* SpawnedActor, const struct FPetInfo& PetData, bool* Res, class ADrone_PlayerCompanionParent_C* K2Node_DynamicCast_AsDrone_Player_Companion_Parent, bool K2Node_DynamicCast_bSuccess);
	void GetDemiLich(class AActor** Ref);
	void DespawnDemiLich(class AActor* Pet, enum class EPetReleaseReason Reason, bool* Res, TScriptInterface<class IIDrone_PlayerCompanionParent_C> K2Node_DynamicCast_AsIDrone_Player_Companion_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CompanionDespawn_Res, bool CallFunc_IsValid_ReturnValue);
	void HandleChallenge_DarkHealing();
	void OnDialogSequenceFinished_4();
	void OnDialogSequenceFinished_3();
	void OnDeactivated();
	void OnPaused();
	void OnActivated();
	void OnResumed();
	void OakPassiveOnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnPetSpawned(class AActor* SpawnedActor, struct FPetInfo& PetData);
	void OnPetReleased(class AActor* Pet, enum class EPetReleaseReason Reason);
	void OnReceivedHealing(class AActor* HealReceiver, float Healing, class AActor* HealInstigator, class UDamageSource* DamageSource, class UDamageType* DamageType);
	void ExecuteUbergraph_Feat_Necromancer(int32 EntryPoint, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, enum class EPetReleaseReason Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation2, int32 CallFunc_FinishTriggerDialog_SequenceID2, bool CallFunc_FinishTriggerDialog_ReturnValue2, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasPlayerClass_Res, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* K2Node_CustomEvent_SpawnedActor, const struct FPetInfo& K2Node_CustomEvent_PetData, class AActor* K2Node_CustomEvent_Pet, enum class EPetReleaseReason K2Node_CustomEvent_Reason, class ADrone_Necromancer_DemiLich_C* K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_SpawnDemiLich_Res, bool K2Node_Select_Default, class ADrone_Necromancer_DemiLich_C* K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_DespawnDemiLich_Res, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue2, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation3, int32 CallFunc_FinishTriggerDialog_SequenceID3, bool CallFunc_FinishTriggerDialog_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation4, int32 CallFunc_FinishTriggerDialog_SequenceID4, bool CallFunc_FinishTriggerDialog_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class AActor* K2Node_CustomEvent_HealReceiver, float K2Node_CustomEvent_Healing, class AActor* K2Node_CustomEvent_HealInstigator, class UDamageSource* K2Node_CustomEvent_DamageSource, class UDamageType* K2Node_CustomEvent_DamageType, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue4, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue5, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4);
};

}


