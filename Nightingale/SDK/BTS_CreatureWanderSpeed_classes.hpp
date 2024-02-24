#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xF8 - 0x98)
// BlueprintGeneratedClass BTS_CreatureWanderSpeed.BTS_CreatureWanderSpeed_C
class UBTS_CreatureWanderSpeed_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetLocation;                                    // 0xA0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                CreatureRunDistance;                               // 0xC8(0x28)(Edit, BlueprintVisible)
	double                                       YoungRunDistance;                                  // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTS_CreatureWanderSpeed_C* GetDefaultObj();

	void SetMoveSpeed(class UObject* ControlledPawn, const struct FVector& LTargetLocation, bool LRunning, class ABP_CreatureBase_C* LCreature, bool Temp_bool_Variable, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, enum class EMovementSpeed Temp_byte_Variable, enum class EMovementSpeed Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, enum class EMovementSpeed K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_CreatureWanderSpeed(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds);
};

}


