#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSitOnThrone.PrideSitOnThrone_C
// (None)

class UClass* UPrideSitOnThrone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSitOnThrone_C");

	return Clss;
}


// PrideSitOnThrone_C PrideSitOnThrone.Default__PrideSitOnThrone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSitOnThrone_C* UPrideSitOnThrone_C::GetDefaultObj()
{
	static class UPrideSitOnThrone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSitOnThrone_C*>(UPrideSitOnThrone_C::StaticClass()->DefaultObject);

	return Default;
}

}


