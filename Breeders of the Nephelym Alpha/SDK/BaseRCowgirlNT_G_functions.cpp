#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNT_G.BaseRCowgirlNT_G_C
// (None)

class UClass* UBaseRCowgirlNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNT_G_C");

	return Clss;
}


// BaseRCowgirlNT_G_C BaseRCowgirlNT_G.Default__BaseRCowgirlNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNT_G_C* UBaseRCowgirlNT_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNT_G_C*>(UBaseRCowgirlNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


