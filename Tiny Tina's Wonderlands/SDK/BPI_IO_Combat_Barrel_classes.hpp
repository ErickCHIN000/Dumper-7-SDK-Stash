#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C
class IBPI_IO_Combat_Barrel_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_IO_Combat_Barrel_C* GetDefaultObj();

	void BPI_SetNavPainterEnabled(bool Enabled);
	void BPI_ResetHealth();
	void BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector);
	void BPI_SetSimulatePhysics(bool PhysicsOn_);
	void BPI_Explode();
	void BPI_StartFuse();
};

}


