#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_NPC_HUD.BPI_NPC_HUD_C
class IBPI_NPC_HUD_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_NPC_HUD_C* GetDefaultObj();

	void FnSetHUDLocation(bool Reset_Location, const struct FVector& Location);
};

}


