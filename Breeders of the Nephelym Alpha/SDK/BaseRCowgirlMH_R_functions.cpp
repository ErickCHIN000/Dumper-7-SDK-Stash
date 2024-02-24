#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlMH_R.BaseRCowgirlMH_R_C
// (None)

class UClass* UBaseRCowgirlMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlMH_R_C");

	return Clss;
}


// BaseRCowgirlMH_R_C BaseRCowgirlMH_R.Default__BaseRCowgirlMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlMH_R_C* UBaseRCowgirlMH_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlMH_R_C*>(UBaseRCowgirlMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


