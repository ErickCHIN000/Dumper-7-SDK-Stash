#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlLH_G.RCowgirlLH_G_C
// (None)

class UClass* URCowgirlLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlLH_G_C");

	return Clss;
}


// RCowgirlLH_G_C RCowgirlLH_G.Default__RCowgirlLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlLH_G_C* URCowgirlLH_G_C::GetDefaultObj()
{
	static class URCowgirlLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlLH_G_C*>(URCowgirlLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


