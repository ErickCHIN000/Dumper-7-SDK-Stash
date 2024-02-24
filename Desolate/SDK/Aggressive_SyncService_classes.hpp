#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2D8 - 0x288)
// BlueprintGeneratedClass Aggressive_SyncService.Aggressive_SyncService_C
class UAggressive_SyncService_C : public UBTS_BaseSyncService_C
{
public:
	struct FBlackboardKeySelector                EnemyCharacter;                                    // 0x288(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                AggroPOI;                                          // 0x2B0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UAggressive_SyncService_C* GetDefaultObj();

	void SS_SetAggroPOI(const struct FVector& POI);
	void SS_SetEnemyCharacter(class ASHCharacter* Character);
};

}


