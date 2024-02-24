#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x90 - 0x88)
// BlueprintGeneratedClass Condition_CheckManufacturer.Condition_CheckManufacturer_C
class UCondition_CheckManufacturer_C : public UGbxCondition_Blueprint
{
public:
	class UManufacturerData*                     Manufacturer;                                      // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_CheckManufacturer_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, bool CallFunc_IsManufactureredBy_ReturnValue);
};

}


