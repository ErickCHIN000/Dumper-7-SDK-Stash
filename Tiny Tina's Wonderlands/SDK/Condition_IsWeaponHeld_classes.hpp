#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Condition_IsWeaponHeld.Condition_IsWeaponHeld_C
class UCondition_IsWeaponHeld_C : public UGbxCondition_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UCondition_IsWeaponHeld_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ACharacter* CallFunc_GetAssociatedCharacter_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, class AWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


