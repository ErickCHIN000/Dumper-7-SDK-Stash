#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNH_R.BaseRCowgirlNH_R_C
// (None)

class UClass* UBaseRCowgirlNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNH_R_C");

	return Clss;
}


// BaseRCowgirlNH_R_C BaseRCowgirlNH_R.Default__BaseRCowgirlNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNH_R_C* UBaseRCowgirlNH_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNH_R_C*>(UBaseRCowgirlNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


