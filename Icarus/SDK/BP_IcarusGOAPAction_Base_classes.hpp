#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_Base.BP_IcarusGOAPAction_Base_C
class UBP_IcarusGOAPAction_Base_C : public UIcarusGOAPAction
{
public:

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_Base_C* GetDefaultObj();

	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_CheckContextualPreconditions_ReturnValue);
	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue);
	bool UpdateCost(class AIcarusNPCGOAPController* Controller, bool CallFunc_UpdateCost_ReturnValue);
	bool Execute(class AIcarusNPCGOAPController* Controller, float Delta, bool CallFunc_Execute_ReturnValue);
};

}


