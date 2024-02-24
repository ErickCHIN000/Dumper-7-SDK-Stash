#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlTM_G.RCowgirlTM_G_C
// (None)

class UClass* URCowgirlTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlTM_G_C");

	return Clss;
}


// RCowgirlTM_G_C RCowgirlTM_G.Default__RCowgirlTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlTM_G_C* URCowgirlTM_G_C::GetDefaultObj()
{
	static class URCowgirlTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlTM_G_C*>(URCowgirlTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


