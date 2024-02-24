#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_FindFood.BP_IcarusGOAPAction_FindFood_C
class UBP_IcarusGOAPAction_FindFood_C : public UBP_IcarusGOAPAction_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_FindFood_C* GetDefaultObj();

	bool Execute(class AIcarusNPCGOAPController* Controller, float Delta, float SearchRadius, bool CallFunc_Execute_ReturnValue, class UIcarusGOAPAIState* CallFunc_GetAIState_ReturnValue);
};

}


