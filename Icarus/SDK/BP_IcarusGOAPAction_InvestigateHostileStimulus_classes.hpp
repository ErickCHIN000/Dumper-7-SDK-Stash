#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_InvestigateHostileStimulus.BP_IcarusGOAPAction_InvestigateHostileStimulus_C
class UBP_IcarusGOAPAction_InvestigateHostileStimulus_C : public UBP_IcarusGOAPAction_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_InvestigateHostileStimulus_C* GetDefaultObj();

	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, const struct FGOAPProperty& K2Node_MakeStruct_GOAPProperty, const struct FGOAPState& CallFunc_GetGOAPState_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


