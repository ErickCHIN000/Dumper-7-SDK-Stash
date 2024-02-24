#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x35 (0xDD - 0xA8)
// BlueprintGeneratedClass BTT_FindValidTarget.BTT_FindValidTarget_C
class UBTT_FindValidTarget_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetKey;                                         // 0xB0(0x28)(Edit, BlueprintVisible)
	float                                        MaxTargetDistance;                                 // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERelationshipType                 TargetRelationship;                                // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_FindValidTarget_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_FindValidTarget(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AActor* CallFunc_GetClosestTargetableActor_Actor, bool CallFunc_IsValid_ReturnValue);
};

}


