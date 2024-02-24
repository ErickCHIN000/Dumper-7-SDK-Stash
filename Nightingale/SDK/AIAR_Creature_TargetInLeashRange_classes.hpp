#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x90 - 0x90)
// BlueprintGeneratedClass AIAR_Creature_TargetInLeashRange.AIAR_Creature_TargetInLeashRange_C
class UAIAR_Creature_TargetInLeashRange_C : public UAIActionRequirement
{
public:

	static class UClass* StaticClass();
	static class UAIAR_Creature_TargetInLeashRange_C* GetDefaultObj();

	bool CheckTargetRequirements(class AActor* Target, class AActor* Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, double CallFunc_Vector_Distance2D_ReturnValue, bool CallFunc_IsValidAILocation_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class APawn* CallFunc_GetOwnerPawn_ReturnValue, TScriptInterface<class ISquadMemberNativeInterface> K2Node_DynamicCast_AsSquad_Member_Native_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetSpawnerActor_ReturnValue);
};

}


