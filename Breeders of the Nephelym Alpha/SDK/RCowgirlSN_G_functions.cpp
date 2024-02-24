#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlSN_G.RCowgirlSN_G_C
// (None)

class UClass* URCowgirlSN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlSN_G_C");

	return Clss;
}


// RCowgirlSN_G_C RCowgirlSN_G.Default__RCowgirlSN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlSN_G_C* URCowgirlSN_G_C::GetDefaultObj()
{
	static class URCowgirlSN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlSN_G_C*>(URCowgirlSN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


