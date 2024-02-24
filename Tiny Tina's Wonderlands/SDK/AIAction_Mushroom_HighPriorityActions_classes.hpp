#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x178 - 0x170)
// AIActionBlueprintGeneratedClass AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C
class UAIAction_Mushroom_HighPriorityActions_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_Mushroom_HighPriorityActions_C* GetDefaultObj();

	void OnAnimEnd_0D2552ED4D321D910C6D4BB6963B5A2E();
	void OnEnd_0D2552ED4D321D910C6D4BB6963B5A2E(enum class EGbxActionEndState EndState, class AActor* Actor);
	void BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context, enum class EAIActionResult Result);
	void BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context);
	void BndEvt__Teleport_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_HighPriorityActions(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AIAction_Mushroom_HighPriorityActions(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, enum class EGbxActionEndState K2Node_CustomEvent_EndState, class AActor* K2Node_CustomEvent_Actor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* Temp_object_Variable, enum class EGbxActionEndState Temp_byte_Variable, class AGbxAIController* K2Node_GbxBoundEvent_AIController2, class AGbxCharacter* K2Node_GbxBoundEvent_Character2, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context2, enum class EAIActionResult K2Node_GbxBoundEvent_Result, class AGbxAIController* K2Node_GbxBoundEvent_AIController1, class AGbxCharacter* K2Node_GbxBoundEvent_Character1, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context1, bool K2Node_SwitchEnum_CmpSuccess, class UGbxAction* CallFunc_K2Play_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AGbxAIController* K2Node_GbxBoundEvent_AIController, class AGbxCharacter* K2Node_GbxBoundEvent_Character, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


