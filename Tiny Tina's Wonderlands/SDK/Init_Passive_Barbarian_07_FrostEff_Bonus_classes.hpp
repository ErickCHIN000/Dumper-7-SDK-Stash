#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_Passive_Barbarian_07_FrostEff_Bonus.Init_Passive_Barbarian_07_FrostEff_Bonus_C
class UInit_Passive_Barbarian_07_FrostEff_Bonus_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 FrostEfficiencyHandle;                             // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Passive_Barbarian_07_FrostEff_Bonus_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, float CallFunc_GetDataTableValueFromHandle_ReturnValue, TScriptInterface<class IIFeat_Barbarian_C> K2Node_DynamicCast_AsIFeat_Barbarian, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsEnraged_Res);
};

}


