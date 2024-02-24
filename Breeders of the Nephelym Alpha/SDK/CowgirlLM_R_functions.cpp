#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlLM_R.CowgirlLM_R_C
// (None)

class UClass* UCowgirlLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlLM_R_C");

	return Clss;
}


// CowgirlLM_R_C CowgirlLM_R.Default__CowgirlLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlLM_R_C* UCowgirlLM_R_C::GetDefaultObj()
{
	static class UCowgirlLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlLM_R_C*>(UCowgirlLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


