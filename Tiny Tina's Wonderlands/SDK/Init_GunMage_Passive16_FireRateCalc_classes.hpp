#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x51 - 0x51)
// BlueprintGeneratedClass Init_GunMage_Passive16_FireRateCalc.Init_GunMage_Passive16_FireRateCalc_C
class UInit_GunMage_Passive16_FireRateCalc_C : public UInit_PlayerPassiveParent_C
{
public:

	static class UClass* StaticClass();
	static class UInit_GunMage_Passive16_FireRateCalc_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_CalculateAttributeInitialValue_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_GunMage_C> K2Node_DynamicCast_AsIFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_GetSpellweavingStacks_Res, float CallFunc_Multiply_IntFloat_ReturnValue);
};

}


