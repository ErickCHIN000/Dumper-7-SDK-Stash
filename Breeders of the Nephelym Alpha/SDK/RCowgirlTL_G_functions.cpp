#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlTL_G.RCowgirlTL_G_C
// (None)

class UClass* URCowgirlTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlTL_G_C");

	return Clss;
}


// RCowgirlTL_G_C RCowgirlTL_G.Default__RCowgirlTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlTL_G_C* URCowgirlTL_G_C::GetDefaultObj()
{
	static class URCowgirlTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlTL_G_C*>(URCowgirlTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


