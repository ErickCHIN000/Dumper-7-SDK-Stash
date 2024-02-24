#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_StopFlying.BP_IcarusGOAPAction_StopFlying_C
class UBP_IcarusGOAPAction_StopFlying_C : public UBP_IcarusGOAPAction_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_StopFlying_C* GetDefaultObj();

	bool IsInRange(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsInRange_ReturnValue);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


