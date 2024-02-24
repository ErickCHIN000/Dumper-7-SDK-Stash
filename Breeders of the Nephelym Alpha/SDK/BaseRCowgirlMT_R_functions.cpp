#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlMT_R.BaseRCowgirlMT_R_C
// (None)

class UClass* UBaseRCowgirlMT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlMT_R_C");

	return Clss;
}


// BaseRCowgirlMT_R_C BaseRCowgirlMT_R.Default__BaseRCowgirlMT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlMT_R_C* UBaseRCowgirlMT_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlMT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlMT_R_C*>(UBaseRCowgirlMT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


