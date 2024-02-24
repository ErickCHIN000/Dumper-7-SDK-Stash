#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB8 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Automaton_CreateChest.AIA_Creature_Automaton_CreateChest_C
class UAIA_Creature_Automaton_CreateChest_C : public UAIA_Creature_Encounter_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Automaton_CreateChest_C* GetDefaultObj();

	bool Initialize(TSubclassOf<class UNWXGameplayAbility> CreateChestAbility, bool CallFunc_Initialize_ReturnValue, bool CallFunc_HasAbilityGranted_ReturnValue);
	bool CheckStaticTargetRequirements(class AActor* Target, class AActor* Temp_object_Variable, TScriptInterface<class ISquadMemberNativeInterface> K2Node_DynamicCast_AsSquad_Member_Native_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetLeaderActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
	bool CheckOwnerRequirements(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class APawn*>& CallFunc_GetPlayersInRange_Players, TArray<class ABP_Structure_Functional_Container_NoPlayerDestruct_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsNotEmpty_ReturnValue, float CallFunc_GetActorInRange_DistanceToTarget, class AActor* CallFunc_GetActorInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


