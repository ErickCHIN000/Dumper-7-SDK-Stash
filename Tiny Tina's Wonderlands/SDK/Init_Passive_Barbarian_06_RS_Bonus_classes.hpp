#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_Passive_Barbarian_06_RS_Bonus.Init_Passive_Barbarian_06_RS_Bonus_C
class UInit_Passive_Barbarian_06_RS_Bonus_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 ReloadSpeedHandle;                                 // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Passive_Barbarian_06_RS_Bonus_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_Barbarian_C> K2Node_DynamicCast_AsIFeat_Barbarian, bool K2Node_DynamicCast_bSuccess2, class UGbxAbility* CallFunc_FindAbility_ReturnValue, bool CallFunc_IsEnraged_Res, class UOakPassiveAbility* K2Node_DynamicCast_AsOak_Passive_Ability, bool K2Node_DynamicCast_bSuccess3, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


