#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLT_G.BaseRCowgirlLT_G_C
// (None)

class UClass* UBaseRCowgirlLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLT_G_C");

	return Clss;
}


// BaseRCowgirlLT_G_C BaseRCowgirlLT_G.Default__BaseRCowgirlLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLT_G_C* UBaseRCowgirlLT_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLT_G_C*>(UBaseRCowgirlLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


