#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlNS_G.RCowgirlNS_G_C
// (None)

class UClass* URCowgirlNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlNS_G_C");

	return Clss;
}


// RCowgirlNS_G_C RCowgirlNS_G.Default__RCowgirlNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlNS_G_C* URCowgirlNS_G_C::GetDefaultObj()
{
	static class URCowgirlNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlNS_G_C*>(URCowgirlNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


