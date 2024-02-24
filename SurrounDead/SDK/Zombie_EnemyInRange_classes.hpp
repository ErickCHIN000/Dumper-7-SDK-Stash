#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xC8 - 0x98)
// BlueprintGeneratedClass Zombie_EnemyInRange.Zombie_EnemyInRange_C
class UZombie_EnemyInRange_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                BBRef;                                             // 0xA0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UZombie_EnemyInRange_C* GetDefaultObj();

	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_Zombie_EnemyInRange(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class USD_AIComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UAIPerceptionComponent* CallFunc_GetComponentByClass_ReturnValue_1, TArray<class AActor*>& CallFunc_GetCurrentlyPerceivedActors_OutActors, TArray<struct FActor_Dist>& CallFunc_Distance_Sort_Sorted_Array, const struct FActor_Dist& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
};

}


