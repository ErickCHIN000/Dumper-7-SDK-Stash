#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHH_G.BaseRCowgirlHH_G_C
// (None)

class UClass* UBaseRCowgirlHH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHH_G_C");

	return Clss;
}


// BaseRCowgirlHH_G_C BaseRCowgirlHH_G.Default__BaseRCowgirlHH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHH_G_C* UBaseRCowgirlHH_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlHH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHH_G_C*>(UBaseRCowgirlHH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


