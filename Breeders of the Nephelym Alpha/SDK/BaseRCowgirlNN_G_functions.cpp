#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNN_G.BaseRCowgirlNN_G_C
// (None)

class UClass* UBaseRCowgirlNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNN_G_C");

	return Clss;
}


// BaseRCowgirlNN_G_C BaseRCowgirlNN_G.Default__BaseRCowgirlNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNN_G_C* UBaseRCowgirlNN_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNN_G_C*>(UBaseRCowgirlNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


