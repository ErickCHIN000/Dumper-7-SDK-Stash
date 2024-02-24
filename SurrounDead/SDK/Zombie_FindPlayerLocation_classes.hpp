#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass Zombie_FindPlayerLocation.Zombie_FindPlayerLocation_C
class UZombie_FindPlayerLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Location;                                          // 0xB0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UZombie_FindPlayerLocation_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_Zombie_FindPlayerLocation(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UAIPerceptionComponent* CallFunc_GetComponentByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_GetCurrentlyPerceivedActors_OutActors, TArray<struct FActor_Dist>& CallFunc_Distance_Sort_Sorted_Array, int32 CallFunc_Add_IntInt_ReturnValue, const struct FActor_Dist& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
};

}


