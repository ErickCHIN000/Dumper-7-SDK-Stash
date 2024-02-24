#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlSH_R.CowgirlSH_R_C
// (None)

class UClass* UCowgirlSH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlSH_R_C");

	return Clss;
}


// CowgirlSH_R_C CowgirlSH_R.Default__CowgirlSH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlSH_R_C* UCowgirlSH_R_C::GetDefaultObj()
{
	static class UCowgirlSH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlSH_R_C*>(UCowgirlSH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


