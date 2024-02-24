#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x108 - 0xA8)
// BlueprintGeneratedClass BTTask_PlayCatch.BTTask_PlayCatch_C
class UBTTask_PlayCatch_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Distance_to_look_for_goat;                         // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                Key_Found_Goat;                                    // 0xB8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                Key_Object_in_Hand;                                // 0xE0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTTask_PlayCatch_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_PlayCatch(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AGGNPC_Humanoid* K2Node_DynamicCast_AsGGNPC_Humanoid, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item);
};

}


