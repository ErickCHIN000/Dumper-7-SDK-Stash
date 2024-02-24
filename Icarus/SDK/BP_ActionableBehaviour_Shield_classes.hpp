#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x320 - 0x30A)
// BlueprintGeneratedClass BP_ActionableBehaviour_Shield.BP_ActionableBehaviour_Shield_C
class UBP_ActionableBehaviour_Shield_C : public UBP_ActionableBehaviour_Base_C
{
public:
	uint8                                        Pad_2C47[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusPlayerCharacter*                Owning_Player;                                     // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Shield_C* GetDefaultObj();

	void Setup(class AActor* Owning_Actor, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void StopBlocking();
	void ExecuteUbergraph_BP_ActionableBehaviour_Shield(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_RemoveStats_BP_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetStamina_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}


