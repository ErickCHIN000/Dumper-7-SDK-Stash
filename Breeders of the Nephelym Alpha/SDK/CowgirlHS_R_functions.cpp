#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlHS_R.CowgirlHS_R_C
// (None)

class UClass* UCowgirlHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlHS_R_C");

	return Clss;
}


// CowgirlHS_R_C CowgirlHS_R.Default__CowgirlHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlHS_R_C* UCowgirlHS_R_C::GetDefaultObj()
{
	static class UCowgirlHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlHS_R_C*>(UCowgirlHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


