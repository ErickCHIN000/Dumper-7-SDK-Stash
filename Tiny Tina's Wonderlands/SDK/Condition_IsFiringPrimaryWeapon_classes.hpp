#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Condition_IsFiringPrimaryWeapon.Condition_IsFiringPrimaryWeapon_C
class UCondition_IsFiringPrimaryWeapon_C : public UGbxCondition_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UCondition_IsFiringPrimaryWeapon_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsUsing_ReturnValue);
};

}


