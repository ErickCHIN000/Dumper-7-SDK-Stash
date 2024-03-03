#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xF8 - 0xA8)
// BlueprintGeneratedClass BTT_SplineNPC_GoToLocation.BTT_SplineNPC_GoToLocation_C
class UBTT_SplineNPC_GoToLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                 PawnRef;                                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UComp_NPC_Controller_C*                NPCController;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugLocation;                                     // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A5E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TravelLocation;                                    // 0xC4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                Location;                                          // 0xD0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTT_SplineNPC_GoToLocation_C* GetDefaultObj();

	void OnFail_DA7ED5B24E78FB8AAEF98EAC5B291F8B(enum class EPathFollowingResult MovementResult);
	void OnSuccess_DA7ED5B24E78FB8AAEF98EAC5B291F8B(enum class EPathFollowingResult MovementResult);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_SplineNPC_GoToLocation(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


