#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x90 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_Rest.BP_IcarusGOAPAction_Rest_C
class UBP_IcarusGOAPAction_Rest_C : public UBP_IcarusGOAPAction_Base_C
{
public:
	bool                                         HaveDisabledSight;                                 // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2581[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusNPCGOAPController*              CachedControllerRef;                               // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_Rest_C* GetDefaultObj();

	bool ActionReset(bool Interrupted, bool CallFunc_ActionReset_ReturnValue);
	void ResetSightPerception(class AAIController* Target, bool CallFunc_IsValid_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue);
	bool GOAPAnimNotify(const class FString& NotifyName, class AIcarusNPCGOAPController* Controller, bool CallFunc_GOAPAnimNotify_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_ExecutionComplete_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


