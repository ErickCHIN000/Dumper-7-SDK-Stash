#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlSL_G.RCowgirlSL_G_C
// (None)

class UClass* URCowgirlSL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlSL_G_C");

	return Clss;
}


// RCowgirlSL_G_C RCowgirlSL_G.Default__RCowgirlSL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlSL_G_C* URCowgirlSL_G_C::GetDefaultObj()
{
	static class URCowgirlSL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlSL_G_C*>(URCowgirlSL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


