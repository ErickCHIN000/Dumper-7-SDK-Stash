#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25 (0x135 - 0x110)
// BlueprintGeneratedClass Ability_DriftwoodRing.Ability_DriftwoodRing_C
class UAbility_DriftwoodRing_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FTimerHandle                          SharkTimer;                                        // 0x118(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AOakCharacter_Player*                  AbilityPlayerOwner;                                // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConditionalDamageModifier*            ActiveCDM;                                         // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CDMIndex;                                          // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BuffAdded;                                         // 0x134(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_DriftwoodRing_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void Check_Buff();
	void AddBuff();
	void RemoveBuff();
	void ExecuteUbergraph_Ability_DriftwoodRing(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class AActor* CallFunc_GetOwner_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_RemoveStatusEffect_ReturnValue);
};

}


