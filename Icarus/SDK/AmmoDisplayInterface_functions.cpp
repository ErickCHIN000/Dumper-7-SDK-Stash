#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmmoDisplayInterface.AmmoDisplayInterface_C
// (None)

class UClass* IAmmoDisplayInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmmoDisplayInterface_C");

	return Clss;
}


// AmmoDisplayInterface_C AmmoDisplayInterface.Default__AmmoDisplayInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IAmmoDisplayInterface_C* IAmmoDisplayInterface_C::GetDefaultObj()
{
	static class IAmmoDisplayInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IAmmoDisplayInterface_C*>(IAmmoDisplayInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AmmoDisplayInterface.AmmoDisplayInterface_C.GetCurrentAmmoInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   AmmoIcon                                                         (Parm, OutParm, HasGetValueTypeHash)
// class FText                        CurrentAmmo                                                      (Parm, OutParm)
// class FText                        TotalAmmo                                                        (Parm, OutParm)

void IAmmoDisplayInterface_C::GetCurrentAmmoInfo(TSoftObjectPtr<class UTexture2D>* AmmoIcon, class FText* CurrentAmmo, class FText* TotalAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AmmoDisplayInterface_C", "GetCurrentAmmoInfo");

	Params::IAmmoDisplayInterface_C_GetCurrentAmmoInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AmmoIcon != nullptr)
		*AmmoIcon = Parms.AmmoIcon;

	if (CurrentAmmo != nullptr)
		*CurrentAmmo = Parms.CurrentAmmo;

	if (TotalAmmo != nullptr)
		*TotalAmmo = Parms.TotalAmmo;

}

}


