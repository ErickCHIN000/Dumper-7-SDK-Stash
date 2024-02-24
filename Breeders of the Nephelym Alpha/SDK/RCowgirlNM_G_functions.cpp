#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlNM_G.RCowgirlNM_G_C
// (None)

class UClass* URCowgirlNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlNM_G_C");

	return Clss;
}


// RCowgirlNM_G_C RCowgirlNM_G.Default__RCowgirlNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlNM_G_C* URCowgirlNM_G_C::GetDefaultObj()
{
	static class URCowgirlNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlNM_G_C*>(URCowgirlNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


