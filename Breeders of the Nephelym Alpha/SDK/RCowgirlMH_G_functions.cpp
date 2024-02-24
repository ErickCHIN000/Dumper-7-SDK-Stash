#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlMH_G.RCowgirlMH_G_C
// (None)

class UClass* URCowgirlMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlMH_G_C");

	return Clss;
}


// RCowgirlMH_G_C RCowgirlMH_G.Default__RCowgirlMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlMH_G_C* URCowgirlMH_G_C::GetDefaultObj()
{
	static class URCowgirlMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlMH_G_C*>(URCowgirlMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


