#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlSL_G.BaseRCowgirlSL_G_C
// (None)

class UClass* UBaseRCowgirlSL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlSL_G_C");

	return Clss;
}


// BaseRCowgirlSL_G_C BaseRCowgirlSL_G.Default__BaseRCowgirlSL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlSL_G_C* UBaseRCowgirlSL_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlSL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlSL_G_C*>(UBaseRCowgirlSL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


