#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x90 - 0x88)
// BlueprintGeneratedClass InventoryCondition_PlayerShieldElement.InventoryCondition_PlayerShieldElement_C
class UInventoryCondition_PlayerShieldElement_C : public UGbxCondition_Blueprint
{
public:
	class UClass*                                DamageType;                                        // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInventoryCondition_PlayerShieldElement_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AShield* K2Node_DynamicCast_AsShield, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetDamageType_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
};

}


