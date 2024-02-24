#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_HYP_WizardsPipe.LightProjectile_HYP_WizardsPipe_C
// (None)

class UClass* ULightProjectile_HYP_WizardsPipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_HYP_WizardsPipe_C");

	return Clss;
}


// LightProjectile_HYP_WizardsPipe_C LightProjectile_HYP_WizardsPipe.Default__LightProjectile_HYP_WizardsPipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_HYP_WizardsPipe_C* ULightProjectile_HYP_WizardsPipe_C::GetDefaultObj()
{
	static class ULightProjectile_HYP_WizardsPipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_HYP_WizardsPipe_C*>(ULightProjectile_HYP_WizardsPipe_C::StaticClass()->DefaultObject);

	return Default;
}

}


