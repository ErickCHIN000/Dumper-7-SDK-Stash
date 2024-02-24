#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNM_G.BaseRCowgirlNM_G_C
// (None)

class UClass* UBaseRCowgirlNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNM_G_C");

	return Clss;
}


// BaseRCowgirlNM_G_C BaseRCowgirlNM_G.Default__BaseRCowgirlNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNM_G_C* UBaseRCowgirlNM_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNM_G_C*>(UBaseRCowgirlNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


