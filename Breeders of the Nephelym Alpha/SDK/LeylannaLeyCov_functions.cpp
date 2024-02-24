#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaLeyCov.LeylannaLeyCov_C
// (None)

class UClass* ULeylannaLeyCov_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaLeyCov_C");

	return Clss;
}


// LeylannaLeyCov_C LeylannaLeyCov.Default__LeylannaLeyCov_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaLeyCov_C* ULeylannaLeyCov_C::GetDefaultObj()
{
	static class ULeylannaLeyCov_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaLeyCov_C*>(ULeylannaLeyCov_C::StaticClass()->DefaultObject);

	return Default;
}

}


