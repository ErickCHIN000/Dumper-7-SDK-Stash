#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_Weapons.Interface_Weapons_C
class IInterface_Weapons_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_Weapons_C* GetDefaultObj();

	void GetWeaponType(enum class Enum_WeaponType* WeaponType);
	void StopFire();
	void StartFire();
	void FireWeapon();
	void BlendspaceInt(int32* Int);
};

}


