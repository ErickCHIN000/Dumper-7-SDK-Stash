#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x178 - 0x16C)
// BlueprintGeneratedClass AIA_Creature_Combat_Wildlife_FleeProximity_Bound.AIA_Creature_Combat_Wildlife_FleeProximity_Bound_C
class UAIA_Creature_Combat_Wildlife_FleeProximity_Bound_C : public UAIA_Creature_Combat_Wildlife_C
{
public:
	uint8                                        Pad_1711[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_Wildlife_FleeProximity_Bound_C* GetDefaultObj();

	bool CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, double StealthModifier, class AActor* LTarget, bool CallFunc_CheckTargetRequirements_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	float GetNormalizedScore(class AActor* Target);
	void Start(class AActor* Target);
	void ExecuteUbergraph_AIA_Creature_Combat_Wildlife_FleeProximity_Bound(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, class AActor* K2Node_Event_Target, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


