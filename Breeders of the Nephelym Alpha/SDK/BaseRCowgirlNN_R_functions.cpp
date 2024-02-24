#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNN_R.BaseRCowgirlNN_R_C
// (None)

class UClass* UBaseRCowgirlNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNN_R_C");

	return Clss;
}


// BaseRCowgirlNN_R_C BaseRCowgirlNN_R.Default__BaseRCowgirlNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNN_R_C* UBaseRCowgirlNN_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNN_R_C*>(UBaseRCowgirlNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


