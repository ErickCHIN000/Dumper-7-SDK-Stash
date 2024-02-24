#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x328 - 0x2D8)
// BlueprintGeneratedClass Grutch_SyncService.Grutch_SyncService_C
class UGrutch_SyncService_C : public UAggressive_SyncService_C
{
public:
	struct FBlackboardKeySelector                PatrolPoiType;                                     // 0x2D8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                PatrolType;                                        // 0x300(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UGrutch_SyncService_C* GetDefaultObj();

	void SS_SetPatrolType(enum class EGrutch_PatrolTypes NewType);
	void SS_SetPatrolPOI(enum class EGrutch_PatrolPoiType PoiType);
};

}


