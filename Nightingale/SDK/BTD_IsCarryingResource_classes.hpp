#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass BTD_IsCarryingResource.BTD_IsCarryingResource_C
class UBTD_IsCarryingResource_C : public UBTDecorator_BlueprintBase
{
public:
	double                                       LowHealthPercentageThreshold;                      // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_IsCarryingResource_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, TScriptInterface<class IBPI_Carry_C> K2Node_DynamicCast_AsBPI_Carry, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetCarriedResource_ResourceItem, bool CallFunc_GetCarriedResource_IsCarryingResource);
};

}


