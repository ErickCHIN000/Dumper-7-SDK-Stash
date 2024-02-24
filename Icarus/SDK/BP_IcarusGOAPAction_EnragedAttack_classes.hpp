#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x94 - 0x94)
// BlueprintGeneratedClass BP_IcarusGOAPAction_EnragedAttack.BP_IcarusGOAPAction_EnragedAttack_C
class UBP_IcarusGOAPAction_EnragedAttack_C : public UBP_IcarusGOAPAction_Melee_Attack_C
{
public:

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_EnragedAttack_C* GetDefaultObj();

	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


