#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x3A0 - 0x2D8)
// BlueprintGeneratedClass MS_SyncService.MS_SyncService_C
class UMS_SyncService_C : public UAggressive_SyncService_C
{
public:
	struct FBlackboardKeySelector                PatrolPoiType;                                     // 0x2D8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                PatrolPoiLocation;                                 // 0x300(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                DemoniacState;                                     // 0x328(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                PatrolType;                                        // 0x350(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                WeaponType;                                        // 0x378(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UMS_SyncService_C* GetDefaultObj();

	void SS_SetWeaponType(enum class EMadman_WeaponType NewType);
	void SS_SetPatrolType(enum class EMS_PatrolTypes NewType);
	void SS_SyncDemoniacState(enum class EMS_DemoniacStates State);
	void SS_SetPatrolPOI(enum class EMS_PatrolPoiType PoiType, const struct FVector& PoiLocation);
};

}


