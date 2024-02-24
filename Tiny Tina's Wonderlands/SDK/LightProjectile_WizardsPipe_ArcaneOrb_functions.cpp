#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_WizardsPipe_ArcaneOrb.LightProjectile_WizardsPipe_ArcaneOrb_C
// (None)

class UClass* ULightProjectile_WizardsPipe_ArcaneOrb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_WizardsPipe_ArcaneOrb_C");

	return Clss;
}


// LightProjectile_WizardsPipe_ArcaneOrb_C LightProjectile_WizardsPipe_ArcaneOrb.Default__LightProjectile_WizardsPipe_ArcaneOrb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_WizardsPipe_ArcaneOrb_C* ULightProjectile_WizardsPipe_ArcaneOrb_C::GetDefaultObj()
{
	static class ULightProjectile_WizardsPipe_ArcaneOrb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_WizardsPipe_ArcaneOrb_C*>(ULightProjectile_WizardsPipe_ArcaneOrb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_WizardsPipe_ArcaneOrb.LightProjectile_WizardsPipe_ArcaneOrb_C.StartHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_WizardsPipe_ArcaneOrb_C::StartHoming(class ULightProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_WizardsPipe_ArcaneOrb_C", "StartHoming");

	Params::ULightProjectile_WizardsPipe_ArcaneOrb_C_StartHoming_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


