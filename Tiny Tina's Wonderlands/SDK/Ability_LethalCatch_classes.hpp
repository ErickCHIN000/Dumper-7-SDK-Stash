#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E (0x170 - 0x132)
// BlueprintGeneratedClass Ability_LethalCatch.Ability_LethalCatch_C
class UAbility_LethalCatch_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_3609[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  AbilityPlayerOwner;                                // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_SharkBane; // 0x148(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_LethalCatch_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void Event_OnCausedDeath(class UDamageComponent* Damage_Receiver, struct FCausedDeathDetails& Caused_Death_Details);
	void ExecuteUbergraph_Ability_LethalCatch(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UDamageComponent* K2Node_CustomEvent_Damage_Receiver, const struct FCausedDeathDetails& K2Node_CustomEvent_Caused_Death_Details, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue1, class UTeamComponent* CallFunc_GetComponentByClass_ReturnValue, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanOR_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1);
};

}


