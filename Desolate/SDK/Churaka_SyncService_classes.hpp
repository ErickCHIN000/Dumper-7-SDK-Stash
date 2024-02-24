#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2D8 - 0x288)
// BlueprintGeneratedClass Churaka_SyncService.Churaka_SyncService_C
class UChuraka_SyncService_C : public UBTS_BaseSyncService_C
{
public:
	struct FBlackboardKeySelector                PatrolPoiType;                                     // 0x288(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                PatrolType;                                        // 0x2B0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UChuraka_SyncService_C* GetDefaultObj();

	void SS_SetPatrolType(enum class EChuraka_PatrolTypes NewType);
	void SS_SetPatrolPOI(enum class EChuraka_PatrolPoiType PoiType);
};

}


