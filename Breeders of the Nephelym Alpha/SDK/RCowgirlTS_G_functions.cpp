#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlTS_G.RCowgirlTS_G_C
// (None)

class UClass* URCowgirlTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlTS_G_C");

	return Clss;
}


// RCowgirlTS_G_C RCowgirlTS_G.Default__RCowgirlTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlTS_G_C* URCowgirlTS_G_C::GetDefaultObj()
{
	static class URCowgirlTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlTS_G_C*>(URCowgirlTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


