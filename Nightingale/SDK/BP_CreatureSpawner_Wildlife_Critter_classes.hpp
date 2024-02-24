#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x1670 - 0x1638)
// BlueprintGeneratedClass BP_CreatureSpawner_Wildlife_Critter.BP_CreatureSpawner_Wildlife_Critter_C
class ABP_CreatureSpawner_Wildlife_Critter_C : public ABP_CreatureSpawner_Wildlife_C
{
public:
	double                                       ChanceOfPair;                                      // 0x1638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LifeTime;                                          // 0x1640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceCheckInterval;                             // 0x1648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 TriggeringPlayer;                                  // 0x1650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       MaxDistance;                                       // 0x1658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DistanceCheckIntervalTimer;                        // 0x1660(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          RemoveCritterTimer;                                // 0x1668(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CreatureSpawner_Wildlife_Critter_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue);
};

}


