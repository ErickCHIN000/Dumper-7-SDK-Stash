#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlNL_G.RCowgirlNL_G_C
// (None)

class UClass* URCowgirlNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlNL_G_C");

	return Clss;
}


// RCowgirlNL_G_C RCowgirlNL_G.Default__RCowgirlNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlNL_G_C* URCowgirlNL_G_C::GetDefaultObj()
{
	static class URCowgirlNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlNL_G_C*>(URCowgirlNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


