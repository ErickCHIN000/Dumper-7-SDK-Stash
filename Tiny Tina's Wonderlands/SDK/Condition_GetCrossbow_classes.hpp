#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Condition_GetCrossbow.Condition_GetCrossbow_C
class UCondition_GetCrossbow_C : public UGbxCondition_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UCondition_GetCrossbow_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakInventoryItemPickup* K2Node_DynamicCast_AsOak_Inventory_Item_Pickup, bool K2Node_DynamicCast_bSuccess, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


