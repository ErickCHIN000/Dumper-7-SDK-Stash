#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlLN_R.CowgirlLN_R_C
// (None)

class UClass* UCowgirlLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlLN_R_C");

	return Clss;
}


// CowgirlLN_R_C CowgirlLN_R.Default__CowgirlLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlLN_R_C* UCowgirlLN_R_C::GetDefaultObj()
{
	static class UCowgirlLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlLN_R_C*>(UCowgirlLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


