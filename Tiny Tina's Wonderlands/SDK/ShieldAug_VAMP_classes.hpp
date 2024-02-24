#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x128 - 0x128)
// BlueprintGeneratedClass ShieldAug_VAMP.ShieldAug_VAMP_C
class UShieldAug_VAMP_C : public UShieldAugment_Amp
{
public:

	static class UClass* StaticClass();
	static class UShieldAug_VAMP_C* GetDefaultObj();

	void K2_OnWeaponShotModified(class AShield* Shield, struct FAugmentData& StackData, class AWeapon* Weapon, struct FWeaponShotModifierData& Data, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetValueFromStackCount_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1);
};

}


