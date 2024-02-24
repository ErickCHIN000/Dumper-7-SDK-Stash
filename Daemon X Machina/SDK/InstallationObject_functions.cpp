#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstallationObject.InstallationObject_C
// (Actor)

class UClass* AInstallationObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstallationObject_C");

	return Clss;
}


// InstallationObject_C InstallationObject.Default__InstallationObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInstallationObject_C* AInstallationObject_C::GetDefaultObj()
{
	static class AInstallationObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInstallationObject_C*>(AInstallationObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstallationObject.InstallationObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AInstallationObject_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstallationObject_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


