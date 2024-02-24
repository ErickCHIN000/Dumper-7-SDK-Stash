#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlSL_R.CowgirlSL_R_C
// (None)

class UClass* UCowgirlSL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlSL_R_C");

	return Clss;
}


// CowgirlSL_R_C CowgirlSL_R.Default__CowgirlSL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlSL_R_C* UCowgirlSL_R_C::GetDefaultObj()
{
	static class UCowgirlSL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlSL_R_C*>(UCowgirlSL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


