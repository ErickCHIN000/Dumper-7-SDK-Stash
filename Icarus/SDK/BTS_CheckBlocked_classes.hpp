#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0xD9 - 0x98)
// BlueprintGeneratedClass BTS_CheckBlocked.BTS_CheckBlocked_C
class UBTS_CheckBlocked_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                IsBlockedKey;                                      // 0xA0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsBlocked;                                         // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlayingMontage;                                  // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_214C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastUpdateLocation;                                // 0xCC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStationary;                                      // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTS_CheckBlocked_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_CheckBlocked(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UIcarusPlayerMovementComponent* K2Node_DynamicCast_AsIcarus_Player_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


