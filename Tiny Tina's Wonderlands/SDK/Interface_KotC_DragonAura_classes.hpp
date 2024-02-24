#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_KotC_DragonAura.Interface_KotC_DragonAura_C
class IInterface_KotC_DragonAura_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_KotC_DragonAura_C* GetDefaultObj();

	void ExternalRemoveDragonAuraTarget(class AActor* DragonAuraTarget, bool* Res);
	void IsActorInMyDragonAura(class AActor* Actor, bool* Res);
	void DragonAuraRefreshAllValues();
	void ResetAuraDuration(bool* Res);
};

}


