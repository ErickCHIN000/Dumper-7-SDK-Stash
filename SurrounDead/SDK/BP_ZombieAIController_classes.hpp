#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x3E8 - 0x3C1)
// BlueprintGeneratedClass BP_ZombieAIController.BP_ZombieAIController_C
class ABP_ZombieAIController_C : public ABP_MainEnemyAIController_C
{
public:
	uint8                                        Pad_914[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                AIPerception;                                      // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                         BehaviourTree;                                     // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USD_AIComponent_C*                     AIComp;                                            // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ZombieAIController_C* GetDefaultObj();

	void PerceptionUpdate(class AActor* Actor, struct FAIStimulus& Stimulus, class FName CallFunc_MakeLiteralName_ReturnValue, TSubclassOf<class UAISense> CallFunc_GetSenseClassForStimulus_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3);
	void BndEvt__BP_ZombieAIController_AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_BP_ZombieAIController(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, class AActor* K2Node_ComponentBoundEvent_Actor, const struct FAIStimulus& K2Node_ComponentBoundEvent_Stimulus, class FName CallFunc_MakeLiteralName_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class APawn* K2Node_Event_PossessedPawn, class USD_AIComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


