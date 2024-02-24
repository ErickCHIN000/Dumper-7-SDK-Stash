#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xF0 - 0xA8)
// BlueprintGeneratedClass BTT_Search.BTT_Search_C
class UBTT_Search_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SmartAIComponent_C*                AI_Component;                                      // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         First_Search_Done;                                 // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Temp_End;                                          // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Search_Radius_Location;                            // 0xD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_Search_C* GetDefaultObj();

	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Receive_Move_Completed_Bind(const struct FAIRequestID& RequestID, enum class EPathFollowingResult Result);
	void Move_Completed(enum class EPathFollowingResult Result);
	void Finish_Task(bool Success);
	void Unbind_Events();
	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_Search(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FAIRequestID& K2Node_CustomEvent_RequestID, enum class EPathFollowingResult K2Node_CustomEvent_Result_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_Result, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_Success, bool Temp_bool_Variable, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, const struct FVector& K2Node_Select_Default, enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue, bool Temp_bool_Variable_1, enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_2, class AActor* K2Node_Event_OwnerActor, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& K2Node_Select_Default_1, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_2, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_2, const struct FVector& K2Node_Select_Default_2, float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast, float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast_1, float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast_2);
};

}


