#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlTN_G.RCowgirlTN_G_C
// (None)

class UClass* URCowgirlTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlTN_G_C");

	return Clss;
}


// RCowgirlTN_G_C RCowgirlTN_G.Default__RCowgirlTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlTN_G_C* URCowgirlTN_G_C::GetDefaultObj()
{
	static class URCowgirlTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlTN_G_C*>(URCowgirlTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


