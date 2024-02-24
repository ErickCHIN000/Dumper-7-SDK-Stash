#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9C (0x144 - 0xA8)
// BlueprintGeneratedClass MoveToCustomRadius.MoveToCustomRadius_C
class UMoveToCustomRadius_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                PlayerActor;                                       // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                CurrentAttackDistance;                             // 0xD8(0x28)(Edit, BlueprintVisible)
	enum class EAIOptionFlag                     IncludeActorCapsules;                              // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkipExecuteIfCloser_;                              // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2752[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                MovementAborted;                                   // 0x108(0x28)(Edit, BlueprintVisible)
	bool                                         bFoundDirToMove;                                   // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_275A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Dir;                                               // 0x134(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Counter;                                           // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMoveToCustomRadius_C* GetDefaultObj();

	void GetDirectionToLowestPoint(const struct FVector& ReferecneLocation, float DistCheck, struct FVector* Dir, const struct FVector& SelectedDir, float BestZ, int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_LineTraceSingleByProfile_OutHit, bool CallFunc_LineTraceSingleByProfile_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Less_FloatFloat_ReturnValue);
	bool CheckDirection(class ABaseCharacter_C* Char, const struct FVector& Direction, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_CapsuleTraceSingleByProfile_OutHit, bool CallFunc_CapsuleTraceSingleByProfile_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetDirectionToNavMesh(class ABaseCharacter_C* Character, struct FVector* ProjectedLocation, bool* bFoundOne, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetDirectionToLowestPoint_Dir, bool CallFunc_CheckDirection_ReturnValue, int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_CheckDirection_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnMoveFinished_212789254366F8F450EFA8A1B1AB9E3F(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_212789254366F8F450EFA8A1B1AB9E3F();
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void TryToFindDirection(class ABaseCharacter_C* Character);
	void ExecuteUbergraph_MoveToCustomRadius(int32 EntryPoint, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, class AAIController* K2Node_Event_OwnerController_2, class APawn* K2Node_Event_ControlledPawn_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation_1, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UAITask_MoveTo* CallFunc_AIMoveTo_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseCharacter_C* K2Node_CustomEvent_Character, const struct FVector& CallFunc_GetDirectionToNavMesh_ProjectedLocation, bool CallFunc_GetDirectionToNavMesh_bFoundOne, bool CallFunc_CheckDirection_ReturnValue);
};

}


