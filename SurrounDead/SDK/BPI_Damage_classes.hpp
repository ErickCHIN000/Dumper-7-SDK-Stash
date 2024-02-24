#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Damage.BPI_Damage_C
class IBPI_Damage_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Damage_C* GetDefaultObj();

	void IsObjectDamageable_(bool* Damageable_);
	void Damage_Object(double Damage, class AActor* Damage_Causer, class AController* Event_Instigator);
	void Damage_Shoved();
};

}


