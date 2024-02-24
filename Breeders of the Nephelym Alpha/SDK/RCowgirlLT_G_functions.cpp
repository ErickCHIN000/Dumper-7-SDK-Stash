#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlLT_G.RCowgirlLT_G_C
// (None)

class UClass* URCowgirlLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlLT_G_C");

	return Clss;
}


// RCowgirlLT_G_C RCowgirlLT_G.Default__RCowgirlLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlLT_G_C* URCowgirlLT_G_C::GetDefaultObj()
{
	static class URCowgirlLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlLT_G_C*>(URCowgirlLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


