#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x190 - 0x170)
// BlueprintGeneratedClass AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C
class UAIAction_Mushroom_LowPriorityActions_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(Transient, DuplicateTransient)
	struct FDataTableValueHandle                 InteractionCooldownHandle;                         // 0x178(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAIAction_Mushroom_LowPriorityActions_C* GetDefaultObj();

	void OnAnimEnd_DCBF5C7C4B29BB35D231F69C79845780();
	void OnEnd_DCBF5C7C4B29BB35D231F69C79845780(enum class EGbxActionEndState EndState, class AActor* Actor);
	void BndEvt__PetInteractions_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context);
	void BndEvt__Follow_TeleportAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_LowPriorityActions(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AIAction_Mushroom_LowPriorityActions(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EGbxActionEndState K2Node_CustomEvent_EndState, class AActor* K2Node_CustomEvent_Actor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* Temp_object_Variable, enum class EGbxActionEndState Temp_byte_Variable, class AGbxAIController* K2Node_GbxBoundEvent_AIController1, class AGbxCharacter* K2Node_GbxBoundEvent_Character1, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context1, class AGbxAIController* K2Node_GbxBoundEvent_AIController, class AGbxCharacter* K2Node_GbxBoundEvent_Character, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


