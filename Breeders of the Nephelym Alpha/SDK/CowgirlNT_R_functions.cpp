#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNT_R.CowgirlNT_R_C
// (None)

class UClass* UCowgirlNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNT_R_C");

	return Clss;
}


// CowgirlNT_R_C CowgirlNT_R.Default__CowgirlNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNT_R_C* UCowgirlNT_R_C::GetDefaultObj()
{
	static class UCowgirlNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNT_R_C*>(UCowgirlNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


