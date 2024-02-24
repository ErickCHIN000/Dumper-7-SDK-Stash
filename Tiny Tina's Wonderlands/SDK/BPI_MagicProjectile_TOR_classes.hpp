#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_MagicProjectile_TOR.BPI_MagicProjectile_TOR_C
class IBPI_MagicProjectile_TOR_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_MagicProjectile_TOR_C* GetDefaultObj();

	void DoMagicTORStickyAttach(class AActor* InHitActor);
};

}


