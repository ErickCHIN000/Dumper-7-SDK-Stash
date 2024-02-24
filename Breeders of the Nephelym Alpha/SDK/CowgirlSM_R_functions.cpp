#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlSM_R.CowgirlSM_R_C
// (None)

class UClass* UCowgirlSM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlSM_R_C");

	return Clss;
}


// CowgirlSM_R_C CowgirlSM_R.Default__CowgirlSM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlSM_R_C* UCowgirlSM_R_C::GetDefaultObj()
{
	static class UCowgirlSM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlSM_R_C*>(UCowgirlSM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


