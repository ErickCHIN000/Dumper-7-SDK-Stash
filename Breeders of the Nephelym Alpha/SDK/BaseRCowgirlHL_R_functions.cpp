#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHL_R.BaseRCowgirlHL_R_C
// (None)

class UClass* UBaseRCowgirlHL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHL_R_C");

	return Clss;
}


// BaseRCowgirlHL_R_C BaseRCowgirlHL_R.Default__BaseRCowgirlHL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHL_R_C* UBaseRCowgirlHL_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlHL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHL_R_C*>(UBaseRCowgirlHL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


