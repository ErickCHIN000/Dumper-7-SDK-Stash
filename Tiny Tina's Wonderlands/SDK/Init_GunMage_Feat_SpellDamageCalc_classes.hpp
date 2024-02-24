#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_GunMage_Feat_SpellDamageCalc.Init_GunMage_Feat_SpellDamageCalc_C
class UInit_GunMage_Feat_SpellDamageCalc_C : public UInit_GunMage_Feat_SpellweavingCalcParent_C
{
public:
	struct FDataTableValueHandle                 DamagePerStack;                                    // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_GunMage_Feat_SpellDamageCalc_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, int32 CallFunc_GetSpellweavingStacks_Res, float CallFunc_GetSpellWeavingStacks_ClassStat, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


