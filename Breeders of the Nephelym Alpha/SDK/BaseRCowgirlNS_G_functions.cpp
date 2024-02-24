#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNS_G.BaseRCowgirlNS_G_C
// (None)

class UClass* UBaseRCowgirlNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNS_G_C");

	return Clss;
}


// BaseRCowgirlNS_G_C BaseRCowgirlNS_G.Default__BaseRCowgirlNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNS_G_C* UBaseRCowgirlNS_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNS_G_C*>(UBaseRCowgirlNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


