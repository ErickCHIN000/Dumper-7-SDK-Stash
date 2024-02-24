#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x370 - 0x350)
// BlueprintGeneratedClass DamageData_Spell_Eruption_Mod1.DamageData_Spell_Eruption_Mod1_C
class UDamageData_Spell_Eruption_Mod1_C : public UDamageData_Spell_C
{
public:
	struct FGameplayTagContainer                 SingularityTag;                                    // 0x350(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UDamageData_Spell_Eruption_Mod1_C* GetDefaultObj();

	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue);
};

}


