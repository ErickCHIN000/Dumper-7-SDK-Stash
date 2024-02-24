#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNH_G.BaseRCowgirlNH_G_C
// (None)

class UClass* UBaseRCowgirlNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNH_G_C");

	return Clss;
}


// BaseRCowgirlNH_G_C BaseRCowgirlNH_G.Default__BaseRCowgirlNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNH_G_C* UBaseRCowgirlNH_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNH_G_C*>(UBaseRCowgirlNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


