#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x328 - 0x2D8)
// BlueprintGeneratedClass GenericNPC_SyncService.GenericNPC_SyncService_C
class UGenericNPC_SyncService_C : public UAggressive_SyncService_C
{
public:
	struct FBlackboardKeySelector                WeaponType;                                        // 0x2D8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                PatrolType;                                        // 0x300(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UGenericNPC_SyncService_C* GetDefaultObj();

	void SS_SetPatrolType(enum class EGenericNPC_PatrolTypes NewType);
	void SS_SetWeaponType(enum class EWeaponType WeaponType);
};

}


