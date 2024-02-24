#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass ShadowKnightTeleportAbilityTask.ShadowKnightTeleportAbilityTask_C
class UShadowKnightTeleportAbilityTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Key;                                               // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                PlayerActor;                                       // 0xD8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UShadowKnightTeleportAbilityTask_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_ShadowKnightTeleportAbilityTask(int32 EntryPoint, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_ShadowKnightNew_C* K2Node_DynamicCast_AsBP_Shadow_Knight_New, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetBlackboardValueAsBool_ReturnValue);
};

}


