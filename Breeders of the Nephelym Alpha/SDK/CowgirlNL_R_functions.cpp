#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNL_R.CowgirlNL_R_C
// (None)

class UClass* UCowgirlNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNL_R_C");

	return Clss;
}


// CowgirlNL_R_C CowgirlNL_R.Default__CowgirlNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNL_R_C* UCowgirlNL_R_C::GetDefaultObj()
{
	static class UCowgirlNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNL_R_C*>(UCowgirlNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


