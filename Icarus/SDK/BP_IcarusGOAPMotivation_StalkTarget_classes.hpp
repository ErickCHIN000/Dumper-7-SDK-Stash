#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x60 - 0x60)
// BlueprintGeneratedClass BP_IcarusGOAPMotivation_StalkTarget.BP_IcarusGOAPMotivation_StalkTarget_C
class UBP_IcarusGOAPMotivation_StalkTarget_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPMotivation_StalkTarget_C* GetDefaultObj();

	bool UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, class FName SquadManagerKey, class APawn* ControlledPawn, float DesiredStalkDistance, int32 CallFunc_Subtract_IntInt_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class ABP_SquadManager_C* K2Node_DynamicCast_AsBP_Squad_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


