#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x88 - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_NPC_Recruited.BP_ConditionBehaviour_NPC_Recruited_C
class UBP_ConditionBehaviour_NPC_Recruited_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_NPC_Recruited_C* GetDefaultObj();

	void GetDebugText(class FText* Description, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetupCondition();
	void OnConditionRemoved();
	void OnPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);
	void LeaderRecruitedCompanion(class AActor* RecruitedCompanion);
	void ExecuteUbergraph_BP_ConditionBehaviour_NPC_Recruited(int32 EntryPoint, const struct FConditionPersistentData& CallFunc_MakeConditionPersistentDataFromBool_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasCompanion_ReturnValue, class APlayerState* K2Node_CustomEvent_Player, class APawn* K2Node_CustomEvent_NewPawn, class APawn* K2Node_CustomEvent_OldPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, bool CallFunc_IsValid_ReturnValue_4, class AActor* K2Node_CustomEvent_RecruitedCompanion);
};

}


