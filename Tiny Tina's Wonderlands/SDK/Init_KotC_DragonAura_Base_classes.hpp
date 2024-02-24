#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x60 - 0x60)
// BlueprintGeneratedClass Init_KotC_DragonAura_Base.Init_KotC_DragonAura_Base_C
class UInit_KotC_DragonAura_Base_C : public UInit_KotC_DragonAura_Parent_C
{
public:

	static class UClass* StaticClass();
	static class UInit_KotC_DragonAura_Base_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class UOakAbility* K2Node_DynamicCast_AsOak_Ability, bool K2Node_DynamicCast_bSuccess, float CallFunc_CalculateAttributeInitialValue_ReturnValue, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_TryToRemoveDragonAuraEffect_Res);
};

}


