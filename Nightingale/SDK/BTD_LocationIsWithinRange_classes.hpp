#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass BTD_LocationIsWithinRange.BTD_LocationIsWithinRange_C
class UBTD_LocationIsWithinRange_C : public UBTDecorator_BlueprintBase
{
public:
	double                                       Distance;                                          // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                Target;                                            // 0xA8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTD_LocationIsWithinRange_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class ABP_CreatureBase_C* LControlledCreature, double LDistance, const struct FVector& TargetLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue);
};

}


