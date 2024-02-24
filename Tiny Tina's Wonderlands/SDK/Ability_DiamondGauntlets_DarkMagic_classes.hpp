#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x140 - 0x140)
// BlueprintGeneratedClass Ability_DiamondGauntlets_DarkMagic.Ability_DiamondGauntlets_DarkMagic_C
class UAbility_DiamondGauntlets_DarkMagic_C : public UAbility_DiamondGauntlets_C
{
public:

	static class UClass* StaticClass();
	static class UAbility_DiamondGauntlets_DarkMagic_C* GetDefaultObj();

	enum class EGbxAbilityState CalculateAbilityState(class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue);
};

}


