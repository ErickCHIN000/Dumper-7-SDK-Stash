#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNN_R.CowgirlNN_R_C
// (None)

class UClass* UCowgirlNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNN_R_C");

	return Clss;
}


// CowgirlNN_R_C CowgirlNN_R.Default__CowgirlNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNN_R_C* UCowgirlNN_R_C::GetDefaultObj()
{
	static class UCowgirlNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNN_R_C*>(UCowgirlNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


