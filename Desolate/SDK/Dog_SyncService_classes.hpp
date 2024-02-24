#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x328 - 0x2D8)
// BlueprintGeneratedClass Dog_SyncService.Dog_SyncService_C
class UDog_SyncService_C : public UAggressive_SyncService_C
{
public:
	struct FBlackboardKeySelector                PatrolPoiType;                                     // 0x2D8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                PatrolType;                                        // 0x300(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UDog_SyncService_C* GetDefaultObj();

	void SS_SetPatrolType(enum class EDog_PatrolType NewType);
	void SS_SetPatrolPOI(enum class EDog_PatrolPoiType PoiType);
};

}


