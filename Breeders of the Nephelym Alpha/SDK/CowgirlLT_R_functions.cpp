#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlLT_R.CowgirlLT_R_C
// (None)

class UClass* UCowgirlLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlLT_R_C");

	return Clss;
}


// CowgirlLT_R_C CowgirlLT_R.Default__CowgirlLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlLT_R_C* UCowgirlLT_R_C::GetDefaultObj()
{
	static class UCowgirlLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlLT_R_C*>(UCowgirlLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


