#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLH_R.BaseRCowgirlLH_R_C
// (None)

class UClass* UBaseRCowgirlLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLH_R_C");

	return Clss;
}


// BaseRCowgirlLH_R_C BaseRCowgirlLH_R.Default__BaseRCowgirlLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLH_R_C* UBaseRCowgirlLH_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLH_R_C*>(UBaseRCowgirlLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


