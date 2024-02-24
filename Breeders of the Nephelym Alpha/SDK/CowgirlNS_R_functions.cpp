#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNS_R.CowgirlNS_R_C
// (None)

class UClass* UCowgirlNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNS_R_C");

	return Clss;
}


// CowgirlNS_R_C CowgirlNS_R.Default__CowgirlNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNS_R_C* UCowgirlNS_R_C::GetDefaultObj()
{
	static class UCowgirlNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNS_R_C*>(UCowgirlNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


