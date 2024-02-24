#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13A (0x57A - 0x440)
// BlueprintGeneratedClass Feat_Ranger.Feat_Ranger_C
class UFeat_Ranger_C : public U_Feat_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	struct FEnvQueryParams                       PetSpawnLocation;                                  // 0x448(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FDataTableValueHandle                 PetFirstSpawnScalar;                               // 0x500(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          PetSpawnTimer;                                     // 0x520(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 PetRespawnTime;                                    // 0x528(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AActor*                                MushroomCompanion;                                 // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Feat_Ranger; // 0x548(0x28)(None)
	bool                                         DelegatesRegistered;                               // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CalledShotsLanded;                                 // 0x574(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CalledShotsChallengeComplete;                      // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlaySpawnDialogue;                                 // 0x579(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFeat_Ranger_C* GetDefaultObj();

	void SpawnMushroomCompanion(class AActor* SpawnedActor, const struct FPetInfo& PetData, bool* Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue);
	void GetMushroomCompanion(class AActor** Ref, bool* Res, bool CallFunc_IsValid_ReturnValue);
	void DespawnMushroomCompanion(class AActor* Pet, enum class EPetReleaseReason Reason, bool* Res, class ABPChar_MushroomCompanion_C* K2Node_DynamicCast_AsBPChar_Mushroom_Companion, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void HandleChallenge_CalledShots(class UDamageSource* DamageSource, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnPaused();
	void OnDeactivated();
	void OnActivated();
	void OnPetSpawned(class AActor* SpawnedActor, struct FPetInfo& PetData);
	void OnPetReleased(class AActor* Pet, enum class EPetReleaseReason Reason);
	void OakPassiveOnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OakPassiveOnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void OnResumed();
	void OnCalledShotsChallengeCompleted(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeClass);
	void ExecuteUbergraph_Feat_Ranger(int32 EntryPoint, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue, enum class EPetReleaseReason Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasPlayerClass_Res, class AActor* K2Node_CustomEvent_SpawnedActor, const struct FPetInfo& K2Node_CustomEvent_PetData, class AActor* K2Node_CustomEvent_Pet, enum class EPetReleaseReason K2Node_CustomEvent_Reason, class ABPChar_MushroomCompanion_C* K2Node_DynamicCast_AsBPChar_Mushroom_Companion, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_SpawnMushroomCompanion_Res, bool K2Node_Select_Default, class ABPChar_MushroomCompanion_C* K2Node_DynamicCast_AsBPChar_Mushroom_Companion1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_DespawnMushroomCompanion_Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue1, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details1, class AWeapon* CallFunc_GetWeapon_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_IsZoomedIn_ReturnValue, class AActor* K2Node_Event_DamageInstigator, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class UChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsChallengeComplete_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class UChallengesComponent* K2Node_CustomEvent_ChallengeComponent, class UClass* K2Node_CustomEvent_ChallengeClass, class UChallengesComponent* CallFunc_GetComponentByClass_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, class UOakChallenge* CallFunc_GetChallengeDefaultObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue4, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue5, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5);
};

}


