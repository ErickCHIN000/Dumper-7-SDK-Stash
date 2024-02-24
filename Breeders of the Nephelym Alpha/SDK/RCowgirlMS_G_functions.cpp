#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlMS_G.RCowgirlMS_G_C
// (None)

class UClass* URCowgirlMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlMS_G_C");

	return Clss;
}


// RCowgirlMS_G_C RCowgirlMS_G.Default__RCowgirlMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlMS_G_C* URCowgirlMS_G_C::GetDefaultObj()
{
	static class URCowgirlMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlMS_G_C*>(URCowgirlMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


