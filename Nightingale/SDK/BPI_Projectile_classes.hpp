#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Projectile.BPI_Projectile_C
class IBPI_Projectile_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Projectile_C* GetDefaultObj();

	void GetMaximumRange(double InitialHeight, double* Range);
	void GetImpactDecal();
	void GetImpactParticle();
};

}


