#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass BTT_MoveToTarget.BTT_MoveToTarget_C
class UBTT_MoveToTarget_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Blackboard;                                        // 0xB0(0x28)(Edit, BlueprintVisible)
	enum class E_Radius                          Acceptance_Radius;                                 // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 AI;                                                // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                SmartAI;                                           // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultRadius;                                     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LastMoveToActor;                                   // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_MoveToTarget_C* GetDefaultObj();

	void OnFail_47035ED04D354CCEC9F56C8A50D4A3DC(enum class EPathFollowingResult MovementResult);
	void OnSuccess_47035ED04D354CCEC9F56C8A50D4A3DC(enum class EPathFollowingResult MovementResult);
	void OnFail_A17F5E824072E2CCDFD139900D14DFDE(enum class EPathFollowingResult MovementResult);
	void OnSuccess_A17F5E824072E2CCDFD139900D14DFDE(enum class EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Move();
	void MoveToCheck();
	void ExecuteUbergraph_BTT_MoveToTarget(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EPathFollowingResult Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double K2Node_Select_Default, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, double K2Node_Select_Default_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_CreateMoveToProxyObject_AcceptanceRadius_ImplicitCast, float CallFunc_CreateMoveToProxyObject_AcceptanceRadius_ImplicitCast_1);
};

}


