#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNH_R.CowgirlNH_R_C
// (None)

class UClass* UCowgirlNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNH_R_C");

	return Clss;
}


// CowgirlNH_R_C CowgirlNH_R.Default__CowgirlNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNH_R_C* UCowgirlNH_R_C::GetDefaultObj()
{
	static class UCowgirlNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNH_R_C*>(UCowgirlNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


