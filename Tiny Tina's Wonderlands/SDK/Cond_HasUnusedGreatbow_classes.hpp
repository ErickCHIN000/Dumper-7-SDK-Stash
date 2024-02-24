#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Cond_HasUnusedGreatbow.Cond_HasUnusedGreatbow_C
class UCond_HasUnusedGreatbow_C : public UGbxCondition_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UCond_HasUnusedGreatbow_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AWeapon* CallFunc_GetWeapon_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}


