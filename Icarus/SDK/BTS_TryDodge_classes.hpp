#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0xE1 - 0x98)
// BlueprintGeneratedClass BTS_TryDodge.BTS_TryDodge_C
class UBTS_TryDodge_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                CurrentTargetKey;                                  // 0xA0(0x28)(Edit, BlueprintVisible)
	class APawn*                                 ControlledPawnRef;                                 // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DotThreshold;                                      // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinimumTargetDodgeDistance;                        // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DodgeLeft;                                         // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTS_TryDodge_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_TryDodge(int32 EntryPoint, class UAnimMontage* Temp_object_Variable, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBallisticSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UAnimMontage* Temp_object_Variable_1, const struct FVector& CallFunc_Normal_ReturnValue, bool Temp_bool_Variable, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FFiredProjectileInfo& CallFunc_GetLastFiredProjectileInfo_ProjectileInfo, bool CallFunc_GetLastFiredProjectileInfo_ReturnValue, class UAnimMontage* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2);
};

}


