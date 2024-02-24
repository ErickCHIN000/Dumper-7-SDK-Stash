#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Condition_HasElemental.Condition_HasElemental_C
class UCondition_HasElemental_C : public UGbxCondition_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UCondition_HasElemental_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AWeapon* K2Node_DynamicCast_AsWeapon, bool K2Node_DynamicCast_bSuccess, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, bool CallFunc_IsElementalType_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


