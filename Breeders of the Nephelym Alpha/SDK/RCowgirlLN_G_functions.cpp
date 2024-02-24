#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlLN_G.RCowgirlLN_G_C
// (None)

class UClass* URCowgirlLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlLN_G_C");

	return Clss;
}


// RCowgirlLN_G_C RCowgirlLN_G.Default__RCowgirlLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlLN_G_C* URCowgirlLN_G_C::GetDefaultObj()
{
	static class URCowgirlLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlLN_G_C*>(URCowgirlLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


