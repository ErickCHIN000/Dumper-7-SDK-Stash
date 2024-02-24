#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlMN_G.RCowgirlMN_G_C
// (None)

class UClass* URCowgirlMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlMN_G_C");

	return Clss;
}


// RCowgirlMN_G_C RCowgirlMN_G.Default__RCowgirlMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlMN_G_C* URCowgirlMN_G_C::GetDefaultObj()
{
	static class URCowgirlMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlMN_G_C*>(URCowgirlMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


