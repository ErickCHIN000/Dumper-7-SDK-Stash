#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstallationMovement.InstallationMovement_C
// (None)

class UClass* UInstallationMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstallationMovement_C");

	return Clss;
}


// InstallationMovement_C InstallationMovement.Default__InstallationMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstallationMovement_C* UInstallationMovement_C::GetDefaultObj()
{
	static class UInstallationMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstallationMovement_C*>(UInstallationMovement_C::StaticClass()->DefaultObject);

	return Default;
}

}


