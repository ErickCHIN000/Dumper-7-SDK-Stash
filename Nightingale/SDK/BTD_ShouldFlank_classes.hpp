#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass BTD_ShouldFlank.BTD_ShouldFlank_C
class UBTD_ShouldFlank_C : public UBTDecorator_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UBTD_ShouldFlank_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class UObject* CallFunc_TryGetBlackboardObject_Value, enum class EBlackboardGetResult CallFunc_TryGetBlackboardObject_Branches, bool K2Node_SwitchEnum_CmpSuccess, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UFlankingManagerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsThereEnoughFlankersToStartFlanking_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


