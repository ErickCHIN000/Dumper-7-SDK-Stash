#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xF8 - 0xA0)
// BlueprintGeneratedClass BTD_DistanceCheck.BTD_DistanceCheck_C
class UBTD_DistanceCheck_C : public UBTDecorator_BlueprintBase
{
public:
	float                                        Distance;                                          // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        OptionalMinDistance;                               // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FBlackboardKeySelector                TargetActorOrLocation;                             // 0xA8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                OptionalOriginKey;                                 // 0xD0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTD_DistanceCheck_C* GetDefaultObj();

	bool PerformConditionCheck(class AActor* OwnerActor, const struct FVector& OriginLocation, float DistanceToTarget, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, bool CallFunc_IsValidAIDirection_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_Vector_Distance_ReturnValue_1);
};

}


