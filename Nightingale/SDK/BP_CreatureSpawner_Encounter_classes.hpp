#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x1651 - 0x1618)
// BlueprintGeneratedClass BP_CreatureSpawner_Encounter.BP_CreatureSpawner_Encounter_C
class ABP_CreatureSpawner_Encounter_C : public ABP_CreatureSpawnerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1618(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       TimeoutDuration;                                   // 0x1620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxEncounterSpawnerCreatures;                      // 0x1628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        EncounterCreatureClasses;                          // 0x1630(0x10)(Edit, BlueprintVisible)
	class UClass*                                DefaultCreatureClass;                              // 0x1640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       LifeTime;                                          // 0x1648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoSpawn;                                         // 0x1650(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CreatureSpawner_Encounter_C* GetDefaultObj();

	void SpawnCreature(const struct FTransform& Transform, class ABP_CreatureBase_C** Creature, class ABP_CreatureBase_C* CallFunc_SpawnCreature_Creature);
	class UEnvQueryInstanceBlueprintWrapper* RunSpawnEQSQuery(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue);
	void ResolveSimulationRound(bool* bSuccess);
	void SelectSpawnPawnClass(class UClass** SpawnPawnClass, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void StartTimeout();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_CreatureSpawner_Encounter(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast);
};

}


