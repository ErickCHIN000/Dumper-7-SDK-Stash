#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass BP_BTT_Escape.BP_BTT_Escape_C
class UBP_BTT_Escape_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_BTT_Escape_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_Escape(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* CallFunc_GetEscapeActionMontage_AnimMontage, bool CallFunc_GetEscapeActionMontage_bIsLastMontage, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
};

}


