#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x980 - 0x980)
// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Magic_TOR.BPWeaponFireProjectileComponent_Magic_TOR_C
class UBPWeaponFireProjectileComponent_Magic_TOR_C : public UBPWeaponFireProjectileComponent_Torgue_C
{
public:

	static class UClass* StaticClass();
	static class UBPWeaponFireProjectileComponent_Magic_TOR_C* GetDefaultObj();

	class UClass* SelectProjectile();
	TSubclassOf<class AActor> GetShotProjectileData(uint8 Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* K2Node_Select_Default);
};

}


