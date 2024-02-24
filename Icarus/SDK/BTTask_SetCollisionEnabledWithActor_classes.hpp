#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xD9 - 0xA8)
// BlueprintGeneratedClass BTTask_SetCollisionEnabledWithActor.BTTask_SetCollisionEnabledWithActor_C
class UBTTask_SetCollisionEnabledWithActor_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetActorKey;                                    // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         CollisionEnabled;                                  // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_SetCollisionEnabledWithActor_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_SetCollisionEnabledWithActor(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
};

}


