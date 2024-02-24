#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNM_R.CowgirlNM_R_C
// (None)

class UClass* UCowgirlNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNM_R_C");

	return Clss;
}


// CowgirlNM_R_C CowgirlNM_R.Default__CowgirlNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNM_R_C* UCowgirlNM_R_C::GetDefaultObj()
{
	static class UCowgirlNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNM_R_C*>(UCowgirlNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


