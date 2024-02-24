#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_GunMage_Feat_SpellweavingCalcParent.Init_GunMage_Feat_SpellweavingCalcParent_C
class UInit_GunMage_Feat_SpellweavingCalcParent_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_GunMage_Feat_SpellweavingCalcParent_C* GetDefaultObj();

	void GetSpellweavingStacks(class UObject* Context, int32* Res, float* ClassStat, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasPlayerClass_Res, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_GunMage_C> K2Node_DynamicCast_AsIFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_GetSpellweavingStacks_Res, float CallFunc_GetValueOfAttribute_ReturnValue);
};

}


