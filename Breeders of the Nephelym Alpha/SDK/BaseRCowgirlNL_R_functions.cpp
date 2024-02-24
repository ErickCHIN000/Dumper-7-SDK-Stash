#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNL_R.BaseRCowgirlNL_R_C
// (None)

class UClass* UBaseRCowgirlNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNL_R_C");

	return Clss;
}


// BaseRCowgirlNL_R_C BaseRCowgirlNL_R.Default__BaseRCowgirlNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNL_R_C* UBaseRCowgirlNL_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNL_R_C*>(UBaseRCowgirlNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


