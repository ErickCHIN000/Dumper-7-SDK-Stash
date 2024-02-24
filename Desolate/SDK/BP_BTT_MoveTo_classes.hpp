#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// BlueprintGeneratedClass BP_BTT_MoveTo.BP_BTT_MoveTo_C
class UBP_BTT_MoveTo_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Loc_ActionDistance;                                // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1177[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BB_TargetActor;                                    // 0xB8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_BTT_MoveTo_C* GetDefaultObj();

	void OnMoveFinished_980BDF964F6B3C59ABD03EB3DC001E56(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_980BDF964F6B3C59ABD03EB3DC001E56();
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_MoveTo(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class UAITask_MoveTo* CallFunc_AIMoveTo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


