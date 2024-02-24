#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x80 - 0x70)
// BlueprintGeneratedClass BP_ConditionBehaviour.BP_ConditionBehaviour_C
class UBP_ConditionBehaviour_C : public UConditionBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerState_C*                     PlayerState;                                       // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_C* GetDefaultObj();

	void GetDebugText(class FText* Description);
	void GetDebugDescription(class FString& OutDescription, class FText CallFunc_GetDebugText_Description, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void GetConditionPlayerState(class ABP_PlayerState_C** PlayerState);
	void SetContextObject(class UObject* ContextObject);
	void SetupCondition();
	void ExecuteUbergraph_BP_ConditionBehaviour(int32 EntryPoint, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, class UObject* K2Node_Event_ContextObject, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


