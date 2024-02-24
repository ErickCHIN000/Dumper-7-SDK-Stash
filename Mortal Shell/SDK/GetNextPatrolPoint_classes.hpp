#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC8 - 0xA8)
// BlueprintGeneratedClass GetNextPatrolPoint.GetNextPatrolPoint_C
class UGetNextPatrolPoint_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AAIController*                         Controller;                                        // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     EnemyChar;                                         // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                  Blackboard;                                        // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGetNextPatrolPoint_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_GetNextPatrolPoint(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UObject* CallFunc_GetValueAsObject_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess);
};

}


