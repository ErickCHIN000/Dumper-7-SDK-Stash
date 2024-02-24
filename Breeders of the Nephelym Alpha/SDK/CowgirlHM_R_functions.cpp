#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlHM_R.CowgirlHM_R_C
// (None)

class UClass* UCowgirlHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlHM_R_C");

	return Clss;
}


// CowgirlHM_R_C CowgirlHM_R.Default__CowgirlHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlHM_R_C* UCowgirlHM_R_C::GetDefaultObj()
{
	static class UCowgirlHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlHM_R_C*>(UCowgirlHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


