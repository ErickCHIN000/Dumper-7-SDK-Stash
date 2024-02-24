#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_CircGyre_ShotStrength.Init_CircGyre_ShotStrength_C
class UInit_CircGyre_ShotStrength_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_CircGyre_ShotStrength_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, int32 RarityMultiplier, class AWeapon* CallFunc_GetWeapon_ReturnValue, int32 CallFunc_GetLoadedAmmo_ReturnValue, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


