#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AmmoDisplayInterface.AmmoDisplayInterface_C
class IAmmoDisplayInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAmmoDisplayInterface_C* GetDefaultObj();

	void GetCurrentAmmoInfo(TSoftObjectPtr<class UTexture2D>* AmmoIcon, class FText* CurrentAmmo, class FText* TotalAmmo);
};

}


