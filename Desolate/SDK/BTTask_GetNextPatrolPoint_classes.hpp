#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x111 - 0xA8)
// BlueprintGeneratedClass BTTask_GetNextPatrolPoint.BTTask_GetNextPatrolPoint_C
class UBTTask_GetNextPatrolPoint_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EAI_PatrolPointMode               PatrolPointMode;                                   // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                Point;                                             // 0xB8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                InspectLocation;                                   // 0xE0(0x28)(Edit, BlueprintVisible)
	float                                        MinPointRadius;                                    // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxPointRadius;                                    // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseMinRadius;                                     // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTTask_GetNextPatrolPoint_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTTask_GetNextPatrolPoint(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_CalculateNextPatrolPoint_PatrolPoint);
};

}


