#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlNT_G.RCowgirlNT_G_C
// (None)

class UClass* URCowgirlNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlNT_G_C");

	return Clss;
}


// RCowgirlNT_G_C RCowgirlNT_G.Default__RCowgirlNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlNT_G_C* URCowgirlNT_G_C::GetDefaultObj()
{
	static class URCowgirlNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlNT_G_C*>(URCowgirlNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


