#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHS_R.BaseRCowgirlHS_R_C
// (None)

class UClass* UBaseRCowgirlHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHS_R_C");

	return Clss;
}


// BaseRCowgirlHS_R_C BaseRCowgirlHS_R.Default__BaseRCowgirlHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHS_R_C* UBaseRCowgirlHS_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHS_R_C*>(UBaseRCowgirlHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


