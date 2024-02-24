#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Tediore_Interface.Tediore_Interface_C
class ITediore_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITediore_Interface_C* GetDefaultObj();

	void Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int32* NumMIRVProjectiles, float* FireRate, float* LoadedAmmo, int32* ThrowType);
};

}


