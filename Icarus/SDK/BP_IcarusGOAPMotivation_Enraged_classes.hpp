#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x78 - 0x60)
// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Enraged.BP_IcarusGOAPMotivation_Enraged_C
class UBP_IcarusGOAPMotivation_Enraged_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        CombatSecondsUntilMaximum;                         // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaChange;                                       // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockScoreIncrease;                                // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_303B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DefaultCooldownTime;                               // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPMotivation_Enraged_C* GetDefaultObj();

	bool UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetCurrentPropertyState_ReturnValue, bool CallFunc_UpdateCost_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Fraction_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue);
	void OnMotivationTriggerEvent(class AIcarusNPCGOAPController* Controller, struct FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered);
	void UnblockIncrease();
	void ExecuteUbergraph_BP_IcarusGOAPMotivation_Enraged(int32 EntryPoint, class AIcarusNPCGOAPController* K2Node_Event_Controller, const struct FGOAPMotivationTrigger& K2Node_Event_TriggeredEvent, bool K2Node_Event_bWasTriggered, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


