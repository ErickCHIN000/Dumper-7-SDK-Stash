#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlSH_G.BaseRCowgirlSH_G_C
// (None)

class UClass* UBaseRCowgirlSH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlSH_G_C");

	return Clss;
}


// BaseRCowgirlSH_G_C BaseRCowgirlSH_G.Default__BaseRCowgirlSH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlSH_G_C* UBaseRCowgirlSH_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlSH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlSH_G_C*>(UBaseRCowgirlSH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


