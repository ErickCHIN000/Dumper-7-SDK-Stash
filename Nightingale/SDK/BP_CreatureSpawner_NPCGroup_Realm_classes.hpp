#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1780 - 0x1780)
// BlueprintGeneratedClass BP_CreatureSpawner_NPCGroup_Realm.BP_CreatureSpawner_NPCGroup_Realm_C
class ABP_CreatureSpawner_NPCGroup_Realm_C : public ABP_CreatureSpawner_NPCGroup_C
{
public:

	static class UClass* StaticClass();
	static class ABP_CreatureSpawner_NPCGroup_Realm_C* GetDefaultObj();

	bool AddToCreatures(class ANWXAICharacter* Creature, bool CallFunc_AddToCreatures_ReturnValue, const struct FGameplayTag& Temp_struct_Variable);
};

}


