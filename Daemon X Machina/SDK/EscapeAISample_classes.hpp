#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0x4ED - 0x4D8)
// BlueprintGeneratedClass EscapeAISample.EscapeAISample_C
class AEscapeAISample_C : public ABaseAIController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(Transient, DuplicateTransient)
	struct FVector                               EscapeTargetLocation;                              // 0x4E0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoveToPath;                                      // 0x4EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AEscapeAISample_C* GetDefaultObj();

	void _p__(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetEndPointLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_ActionPatrol_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetEscapeTargetPosition_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_ActionPatrolDirectLocation_ReturnValue);
	void UserConstructionScript();
	void AIProcess();
	void AIInit();
	void AIHateTargetChanged(class AActor* TargetActor);
	void AIAttackFinished();
	void ExecuteUbergraph_EscapeAISample(int32 EntryPoint, class AActor* K2Node_Event_targetActor, const struct FVector& CallFunc_GetEscapeTargetPosition_ReturnValue, const struct FVector& CallFunc_GetSoftCollisionDistance_NearestPosition, float CallFunc_GetSoftCollisionDistance_ReturnValue, float CallFunc_GetNearestEscapePath_DistanceToPath, class ATTLSplinePath* CallFunc_GetNearestEscapePath_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


