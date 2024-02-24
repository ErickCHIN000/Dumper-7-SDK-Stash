#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x108 - 0xA8)
// BlueprintGeneratedClass BTT_FindAttackerLocation.BTT_FindAttackerLocation_C
class UBTT_FindAttackerLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetLocation;                                    // 0xB0(0x28)(Edit, BlueprintVisible)
	float                                        FallbackDistance;                                  // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                TargetActor;                                       // 0xE0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTT_FindAttackerLocation_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_FindAttackerLocation(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, bool Temp_bool_IsClosed_Variable, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, TArray<class AActor*>& CallFunc_GetKnownPerceivedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FActorPerceptionBlueprintInfo& CallFunc_GetActorsPerception_Info, bool CallFunc_GetActorsPerception_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FAIStimulus& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


