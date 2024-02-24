#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlNH_G.RCowgirlNH_G_C
// (None)

class UClass* URCowgirlNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlNH_G_C");

	return Clss;
}


// RCowgirlNH_G_C RCowgirlNH_G.Default__RCowgirlNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlNH_G_C* URCowgirlNH_G_C::GetDefaultObj()
{
	static class URCowgirlNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlNH_G_C*>(URCowgirlNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


