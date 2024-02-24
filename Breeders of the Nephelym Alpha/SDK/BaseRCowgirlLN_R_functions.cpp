#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLN_R.BaseRCowgirlLN_R_C
// (None)

class UClass* UBaseRCowgirlLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLN_R_C");

	return Clss;
}


// BaseRCowgirlLN_R_C BaseRCowgirlLN_R.Default__BaseRCowgirlLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLN_R_C* UBaseRCowgirlLN_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLN_R_C*>(UBaseRCowgirlLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


