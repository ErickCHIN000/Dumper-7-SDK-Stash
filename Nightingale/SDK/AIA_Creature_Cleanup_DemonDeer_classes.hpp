#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB8 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Cleanup_DemonDeer.AIA_Creature_Cleanup_DemonDeer_C
class UAIA_Creature_Cleanup_DemonDeer_C : public UAIA_CreatureBase_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Cleanup_DemonDeer_C* GetDefaultObj();

	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, TScriptInterface<class ISquadMemberNativeInterface> CallFunc_GetSpawnerActor_self_CastInput, class AActor* CallFunc_GetSpawnerActor_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


