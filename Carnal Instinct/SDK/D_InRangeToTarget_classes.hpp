#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass D_InRangeToTarget.D_InRangeToTarget_C
class UD_InRangeToTarget_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                TargetKey;                                         // 0xA0(0x28)(Edit, BlueprintVisible)
	float                                        GreaterThan;                                       // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LessThan;                                          // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UD_InRangeToTarget_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue);
};

}


