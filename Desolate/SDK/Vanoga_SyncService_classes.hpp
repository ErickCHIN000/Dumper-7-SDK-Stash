#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x350 - 0x2D8)
// BlueprintGeneratedClass Vanoga_SyncService.Vanoga_SyncService_C
class UVanoga_SyncService_C : public UAggressive_SyncService_C
{
public:
	struct FBlackboardKeySelector                PatrolPoiType;                                     // 0x2D8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                PatrolPoiLocation;                                 // 0x300(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                PatrolType;                                        // 0x328(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UVanoga_SyncService_C* GetDefaultObj();

	void SS_SetPatrolType(enum class EVanoga_PatrolTypes NewType);
	void SS_SetPatrolPoiLocation(const struct FVector& Location);
	void SS_SetPatrolPoiType(enum class EVanoga_PatrolPoiType PatrolPoiType);
};

}


