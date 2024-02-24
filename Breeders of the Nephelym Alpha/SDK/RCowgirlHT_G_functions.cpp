#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlHT_G.RCowgirlHT_G_C
// (None)

class UClass* URCowgirlHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlHT_G_C");

	return Clss;
}


// RCowgirlHT_G_C RCowgirlHT_G.Default__RCowgirlHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlHT_G_C* URCowgirlHT_G_C::GetDefaultObj()
{
	static class URCowgirlHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlHT_G_C*>(URCowgirlHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


