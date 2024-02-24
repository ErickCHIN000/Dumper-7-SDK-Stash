#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHS_G.BaseRCowgirlHS_G_C
// (None)

class UClass* UBaseRCowgirlHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHS_G_C");

	return Clss;
}


// BaseRCowgirlHS_G_C BaseRCowgirlHS_G.Default__BaseRCowgirlHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHS_G_C* UBaseRCowgirlHS_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHS_G_C*>(UBaseRCowgirlHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


