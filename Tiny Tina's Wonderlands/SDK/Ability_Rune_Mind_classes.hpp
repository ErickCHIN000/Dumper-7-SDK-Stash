#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x208 - 0x110)
// BlueprintGeneratedClass Ability_Rune_Mind.Ability_Rune_Mind_C
class UAbility_Rune_Mind_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AActor*                                Killed;                                            // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BOTD; // 0x120(0x28)(None)
	class AOakCharacter_Player*                  Owner;                                             // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       AbilityEQS;                                        // 0x150(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UAbility_Rune_Mind_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void SpellCastTrigger(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer);
	void DamageGateReset();
	void ExecuteUbergraph_Ability_Rune_Mind(int32 EntryPoint, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AShield* K2Node_DynamicCast_AsShield, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetBaseShieldDamage_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1);
};

}


