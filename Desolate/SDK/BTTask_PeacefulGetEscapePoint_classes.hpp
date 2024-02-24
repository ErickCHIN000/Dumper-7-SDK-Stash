#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// BlueprintGeneratedClass BTTask_PeacefulGetEscapePoint.BTTask_PeacefulGetEscapePoint_C
class UBTTask_PeacefulGetEscapePoint_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Point;                                             // 0xB0(0x28)(Edit, BlueprintVisible)
	float                                        MinPointRadius;                                    // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxPointRadius;                                    // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTTask_PeacefulGetEscapePoint_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTTask_PeacefulGetEscapePoint(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABasePeacefulAICharacter_C* K2Node_DynamicCast_AsBase_Peaceful_AICharacter, bool K2Node_DynamicCast_bSuccess_1);
};

}


