#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StormMode_GM.BPI_StormMode_GM_C
class IBPI_StormMode_GM_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StormMode_GM_C* GetDefaultObj();

	void StormMode_TeleportCycleCompleted();
	void StormMode_UpdateTeleportData(class FName ID, const struct FVector& Loc, const struct FRotator& Rot, bool Teleport_, enum class EArmorTypes Shell, enum class EComboTypes Weapon, enum class ERiposteTypes Riposte);
	void StormMode_ResetMapState();
};

}


