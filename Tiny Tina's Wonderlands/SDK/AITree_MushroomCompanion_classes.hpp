#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x188 - 0x170)
// BlueprintGeneratedClass AITree_MushroomCompanion.AITree_MushroomCompanion_C
class UAITree_MushroomCompanion_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(Transient, DuplicateTransient)
	class FName                                  OwnerKeyName;                                      // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         RangerOwner;                                       // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAITree_MushroomCompanion_C* GetDefaultObj();

	void BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_MushroomCompanion(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context);
	void BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context, enum class EAIActionResult Result);
	void BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_MushroomCompanion(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context, enum class EAIActionResult Result);
	void ExecuteUbergraph_AITree_MushroomCompanion(int32 EntryPoint, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector, class AGbxAIController* K2Node_GbxBoundEvent_AIController2, class AGbxCharacter* K2Node_GbxBoundEvent_Character2, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AGbxAIController* K2Node_GbxBoundEvent_AIController1, class AGbxCharacter* K2Node_GbxBoundEvent_Character1, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context1, enum class EAIActionResult K2Node_GbxBoundEvent_Result1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue1, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector1, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector2, class AGbxAIController* K2Node_GbxBoundEvent_AIController, class AGbxCharacter* K2Node_GbxBoundEvent_Character, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context, enum class EAIActionResult K2Node_GbxBoundEvent_Result, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue2);
};

}


