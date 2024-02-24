#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass WeaponAnimationInterface.WeaponAnimationInterface_C
class IWeaponAnimationInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWeaponAnimationInterface_C* GetDefaultObj();

	void WeaponFired(float Power);
};

}


