#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB8 - 0xA8)
// BlueprintGeneratedClass BTTask_PreEmerge.BTTask_PreEmerge_C
class UBTTask_PreEmerge_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  RetreatTargetActorKey;                             // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTTask_PreEmerge_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_PreEmerge(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetValueAsObject_ReturnValue, class ABP_Faction_Mission_Boss_Den_C* K2Node_DynamicCast_AsBP_Faction_Mission_Boss_Den, bool K2Node_DynamicCast_bSuccess_1);
};

}


