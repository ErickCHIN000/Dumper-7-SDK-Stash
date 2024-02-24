#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNL_G.BaseRCowgirlNL_G_C
// (None)

class UClass* UBaseRCowgirlNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNL_G_C");

	return Clss;
}


// BaseRCowgirlNL_G_C BaseRCowgirlNL_G.Default__BaseRCowgirlNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNL_G_C* UBaseRCowgirlNL_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNL_G_C*>(UBaseRCowgirlNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


