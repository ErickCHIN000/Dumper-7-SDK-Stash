#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlST_R.BaseRCowgirlST_R_C
// (None)

class UClass* UBaseRCowgirlST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlST_R_C");

	return Clss;
}


// BaseRCowgirlST_R_C BaseRCowgirlST_R.Default__BaseRCowgirlST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlST_R_C* UBaseRCowgirlST_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlST_R_C*>(UBaseRCowgirlST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


