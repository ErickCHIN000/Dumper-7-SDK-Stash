#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_SmokeRL.LeylannaDefault01_SmokeRL_C
// (None)

class UClass* ULeylannaDefault01_SmokeRL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_SmokeRL_C");

	return Clss;
}


// LeylannaDefault01_SmokeRL_C LeylannaDefault01_SmokeRL.Default__LeylannaDefault01_SmokeRL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_SmokeRL_C* ULeylannaDefault01_SmokeRL_C::GetDefaultObj()
{
	static class ULeylannaDefault01_SmokeRL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_SmokeRL_C*>(ULeylannaDefault01_SmokeRL_C::StaticClass()->DefaultObject);

	return Default;
}

}


