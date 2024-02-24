#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlLH_R.CowgirlLH_R_C
// (None)

class UClass* UCowgirlLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlLH_R_C");

	return Clss;
}


// CowgirlLH_R_C CowgirlLH_R.Default__CowgirlLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlLH_R_C* UCowgirlLH_R_C::GetDefaultObj()
{
	static class UCowgirlLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlLH_R_C*>(UCowgirlLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


