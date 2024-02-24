#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlMT_G.RCowgirlMT_G_C
// (None)

class UClass* URCowgirlMT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlMT_G_C");

	return Clss;
}


// RCowgirlMT_G_C RCowgirlMT_G.Default__RCowgirlMT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlMT_G_C* URCowgirlMT_G_C::GetDefaultObj()
{
	static class URCowgirlMT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlMT_G_C*>(URCowgirlMT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


