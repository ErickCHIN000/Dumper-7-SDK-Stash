#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x110 - 0xA8)
// BlueprintGeneratedClass btask_customSequence.btask_customSequence_C
class Ubtask_customSequence_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ACGAICharacter*                        Owner;                                             // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          StandbyMontage;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                CustomAnimToPlay;                                  // 0xC0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                CustomAnimStartTime;                               // 0xE8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class Ubtask_customSequence_C* GetDefaultObj();

	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_btask_customSequence(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, class UAnimSequenceBase* K2Node_DynamicCast_AsAnim_Sequence_Base, bool K2Node_DynamicCast_bSuccess_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, float CallFunc_GetPlayLength_ReturnValue);
};

}


