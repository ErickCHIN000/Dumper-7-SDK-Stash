#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlLS_R.CowgirlLS_R_C
// (None)

class UClass* UCowgirlLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlLS_R_C");

	return Clss;
}


// CowgirlLS_R_C CowgirlLS_R.Default__CowgirlLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlLS_R_C* UCowgirlLS_R_C::GetDefaultObj()
{
	static class UCowgirlLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlLS_R_C*>(UCowgirlLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


