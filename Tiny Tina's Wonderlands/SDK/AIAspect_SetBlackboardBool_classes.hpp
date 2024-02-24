#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x118 - 0x100)
// BlueprintGeneratedClass AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C
class UAIAspect_SetBlackboardBool_C : public UAIAspect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x100(0x8)(Transient, DuplicateTransient)
	struct FGbxBlackboardKeySelector             _Key;                                              // 0x108(0x10)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UAIAspect_SetBlackboardBool_C* GetDefaultObj();

	void BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context);
	void BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context, enum class EAIActionResult Result);
	void ExecuteUbergraph_AIAspect_SetBlackboardBool(int32 EntryPoint, class AGbxAIController* K2Node_GbxBoundEvent_AIController1, class AGbxCharacter* K2Node_GbxBoundEvent_Character1, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AGbxAIController* K2Node_GbxBoundEvent_AIController, class AGbxCharacter* K2Node_GbxBoundEvent_Character, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context, enum class EAIActionResult K2Node_GbxBoundEvent_Result, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue1);
};

}


