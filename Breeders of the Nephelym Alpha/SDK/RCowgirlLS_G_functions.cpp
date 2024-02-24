#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlLS_G.RCowgirlLS_G_C
// (None)

class UClass* URCowgirlLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlLS_G_C");

	return Clss;
}


// RCowgirlLS_G_C RCowgirlLS_G.Default__RCowgirlLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlLS_G_C* URCowgirlLS_G_C::GetDefaultObj()
{
	static class URCowgirlLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlLS_G_C*>(URCowgirlLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


