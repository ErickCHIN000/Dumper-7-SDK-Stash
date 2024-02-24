#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x198 - 0x110)
// BlueprintGeneratedClass Ability_All_Enchantment_Base.Ability_All_Enchantment_Base_C
class UAbility_All_Enchantment_Base_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Enchantment_Base; // 0x118(0x28)(None)
	class AOakCharacter_Player*                  PlayerAbilityOwner;                                // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_EnchantmentTriggerTypes      TriggerType;                                       // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_439E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectInstanceReference        StatusEffectToRemove;                              // 0x150(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Ability_All_Enchantment_Base; // 0x168(0x28)(None)
	class UStatusEffectData*                     StatusEffect;                                      // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_All_Enchantment_Base_C* GetDefaultObj();

	void Enchantment_OnSpellCast(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer);
	void OnDeactivated();
	void Enchantment_OnReload(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven);
	void OnCausedDeath_Enchantment(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details);
	void Enchantment_DoOnKillBehavior();
	void Enchantment_CausedMeleeDmg(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void Enchantment_Shield_NowNotFilled(const struct FGameResourcePoolReference& ResourcePool);
	void Enchantment_Shield_Filled(const struct FGameResourcePoolReference& ResourcePool);
	void OnActivated();
	void Enchantment_Shield_NowDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void Enchantment_ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void ExecuteUbergraph_Ability_All_Enchantment_Base(int32 EntryPoint, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AWeapon* K2Node_CustomEvent_EventWeapon, bool K2Node_CustomEvent_bCompleted, bool K2Node_CustomEvent_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details1, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Compare_Damage_Source_Equal2, bool CallFunc_Compare_Damage_Source_Not_Equal2, bool CallFunc_BooleanAND_ReturnValue2, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue2, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue3, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UOakActionAbility* K2Node_CustomEvent_ActionAbility1, enum class Enum_ActionSkills K2Node_CustomEvent_ActionSkill1, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, class UOakActionAbility* K2Node_CustomEvent_ActionAbility, enum class Enum_ActionSkills K2Node_CustomEvent_ActionSkill, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character1, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character2, bool K2Node_DynamicCast_bSuccess3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate6, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate7, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate8, bool CallFunc_IsValid_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
};

}


