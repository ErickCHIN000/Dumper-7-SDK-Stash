#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0xE4 - 0xA0)
// BlueprintGeneratedClass BTD_HasTargetMoved.BTD_HasTargetMoved_C
class UBTD_HasTargetMoved_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TriggerDistance;                                   // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1B5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                TargetActorOrLocation;                             // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector                               StartingLocation;                                  // 0xD8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_HasTargetMoved_C* GetDefaultObj();

	void GetTargetLocation(struct FVector* Out, const struct FVector& Temp_wildcard_Variable, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool PerformConditionCheck(class AActor* OwnerActor, const struct FVector& CheckLocation, const struct FVector& CallFunc_GetTargetLocation_Out, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue);
	void ReceiveExecutionFinish(class AActor* OwnerActor, enum class EBTNodeResult NodeResult);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ExecuteUbergraph_BTD_HasTargetMoved(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, const struct FVector& CallFunc_GetTargetLocation_Out, class AActor* K2Node_Event_OwnerActor_1, enum class EBTNodeResult K2Node_Event_NodeResult);
};

}


