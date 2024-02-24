#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTS_R.BaseRCowgirlTS_R_C
// (None)

class UClass* UBaseRCowgirlTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTS_R_C");

	return Clss;
}


// BaseRCowgirlTS_R_C BaseRCowgirlTS_R.Default__BaseRCowgirlTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTS_R_C* UBaseRCowgirlTS_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTS_R_C*>(UBaseRCowgirlTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


