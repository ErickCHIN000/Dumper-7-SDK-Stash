#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlMH_R.CowgirlMH_R_C
// (None)

class UClass* UCowgirlMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlMH_R_C");

	return Clss;
}


// CowgirlMH_R_C CowgirlMH_R.Default__CowgirlMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlMH_R_C* UCowgirlMH_R_C::GetDefaultObj()
{
	static class UCowgirlMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlMH_R_C*>(UCowgirlMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


