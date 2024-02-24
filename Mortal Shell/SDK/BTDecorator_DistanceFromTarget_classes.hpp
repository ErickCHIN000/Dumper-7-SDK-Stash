#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D (0xCD - 0xA0)
// BlueprintGeneratedClass BTDecorator_DistanceFromTarget.BTDecorator_DistanceFromTarget_C
class UBTDecorator_DistanceFromTarget_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                TargetActor;                                       // 0xA0(0x28)(Edit, BlueprintVisible)
	float                                        Distance;                                          // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSucceedIfCloser;                                  // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTDecorator_DistanceFromTarget_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
};

}


