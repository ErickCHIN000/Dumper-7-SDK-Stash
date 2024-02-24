#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x248 - 0x240)
// BlueprintGeneratedClass Ability_MagicSMG_Poison_WhiteRider.Ability_MagicSMG_Poison_WhiteRider_C
class UAbility_MagicSMG_Poison_WhiteRider_C : public UAbility_MagicSMG_Poison_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAbility_MagicSMG_Poison_WhiteRider_C* GetDefaultObj();

	enum class EGbxAbilityState CalculateAbilityState(uint8 Temp_byte_Variable, enum class EGbxAbilityState Temp_byte_Variable1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue, enum class EGbxAbilityState CallFunc_CalculateAbilityState_ReturnValue, enum class EGbxAbilityState K2Node_Select_Default);
	void OnActivated();
	void ExecuteUbergraph_Ability_MagicSMG_Poison_WhiteRider(int32 EntryPoint);
};

}


