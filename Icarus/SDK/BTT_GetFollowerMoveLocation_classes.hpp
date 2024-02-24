#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass BTT_GetFollowerMoveLocation.BTT_GetFollowerMoveLocation_C
class UBTT_GetFollowerMoveLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                SquadManagerKey;                                   // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                ActorMoveTargetKey;                                // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTT_GetFollowerMoveLocation_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_GetFollowerMoveLocation(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class ABP_SquadManager_C* K2Node_DynamicCast_AsBP_Squad_Manager, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_RequestFollowTarget_TargetNode);
};

}


