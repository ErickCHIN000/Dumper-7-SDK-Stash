#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x150 - 0x110)
// BlueprintGeneratedClass Ability_Mistrial.Ability_Mistrial_C
class UAbility_Mistrial_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  Player;                                            // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Mistrial; // 0x120(0x28)(None)
	struct FTimerHandle                          GullTimer;                                         // 0x148(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Mistrial_C* GetDefaultObj();

	void OnDeactivated();
	void UnregisterWSM();
	void RegisterWSM();
	void MistrialTryApplyWSM();
	void OnActivated();
	void ExecuteUbergraph_Ability_Mistrial(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FOakAbilityResourceSpec_WeaponShotModifier& K2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier, const struct FOakAbilityResourceSpec_WeaponShotModifier& K2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


