#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlTS_R.CowgirlTS_R_C
// (None)

class UClass* UCowgirlTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlTS_R_C");

	return Clss;
}


// CowgirlTS_R_C CowgirlTS_R.Default__CowgirlTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlTS_R_C* UCowgirlTS_R_C::GetDefaultObj()
{
	static class UCowgirlTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlTS_R_C*>(UCowgirlTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


