#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5E (0x368 - 0x30A)
// BlueprintGeneratedClass BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C
class UBP_ActionableBehaviour_Hold_C : public UBP_ActionableBehaviour_Base_C
{
public:
	uint8                                        Pad_3E3A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusPlayerCharacter*                OwningPlayer;                                      // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoldTimeStamp;                                     // 0x320(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            HoldCompleted;                                     // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        HoldLength;                                        // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoEnd;                                           // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NewVar_0_0;                                        // 0x33D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E61[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ModifierUID;                                       // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModifierStatesRowHandle              HoldModifier;                                      // 0x344(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HoldingOnActor;                                    // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Hold_C* GetDefaultObj();

	class USkeletalMeshComponent* GetAnimatingMesh(class USkeletalMeshComponent* CallFunc_GetAnimatingMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue);
	void GetHoldLength(float* HeldTime, float TimeModifier, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void RemovePlayerModifier(bool CallFunc_NotEqual_IntInt_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetPlayer_OwningPlayer, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void AddPlayerModifier(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, class AIcarusPlayerCharacter* CallFunc_GetPlayer_OwningPlayer, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetPlayer_OwningPlayer_1, int32 CallFunc_AddModifierState_ReturnValue);
	float GetHoldProgress(float CallFunc_GetHoldLength_HeldTime, float CallFunc_GetHoldLength_HeldTime_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, bool CallFunc_IsHolding_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	bool IsHoldFinished(float TimeModifier, float CallFunc_GetHoldLength_HeldTime, bool CallFunc_IsHolding_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetPlayer(class AIcarusPlayerCharacter** OwningPlayer, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess);
	void LocalOrServer(bool* Local, bool* Server, class AIcarusPlayerCharacter* CallFunc_GetPlayer_OwningPlayer, class AIcarusPlayerCharacter* CallFunc_GetPlayer_OwningPlayer_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
	bool IsHolding(bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void EndHold(bool Success, bool CallFunc_IsLocallyOwned_LocallyOwned, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_IsHolding_ReturnValue);
	void StartHold(bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_IsLocallyOwned_LocallyOwned, bool CallFunc_IsHolding_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue);
	void GetHeldData();
	float GetRemainingTime();
	float GetHeldTime();
	bool CanHold();
	void ReceiveTick(float DeltaSeconds);
	void Server_StartHold(class AActor* ActorStatedHoldOn);
	void Server_EndHold(bool Success, class AActor* ActorEndedHoldOn);
	void CompleteHold(bool Success);
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnActionAborted(enum class EActionableEventType EventType);
	void PerformActionFromMenu(class AActor* InvokingActor);
	void ExecuteUbergraph_BP_ActionableBehaviour_Hold(int32 EntryPoint, bool CallFunc_IsLocallyOwned_LocallyOwned, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* K2Node_CustomEvent_ActorStatedHoldOn, bool K2Node_CustomEvent_Success_1, class AActor* K2Node_CustomEvent_ActorEndedHoldOn, bool K2Node_CustomEvent_Success, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, bool CallFunc_IsHoldFinished_ReturnValue, bool CallFunc_IsHoldFinished_ReturnValue_1, class AActor* K2Node_Event_InvokingActor_1, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsHolding_ReturnValue, bool CallFunc_IsHoldFinished_ReturnValue_2, class FText CallFunc_Conv_BoolToText_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_GetHoldProgress_ReturnValue, bool CallFunc_CanHold_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_CanHold_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanHold_ReturnValue_2, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_LocalOrServer_Local_2, bool CallFunc_LocalOrServer_Server_2, enum class EActionableEventType K2Node_Event_EventType, bool CallFunc_IsServer_ReturnValue, class AActor* K2Node_Event_InvokingActor, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsHolding_ReturnValue_1);
	void HoldCompleted__DelegateSignature(bool Success);
};

}


