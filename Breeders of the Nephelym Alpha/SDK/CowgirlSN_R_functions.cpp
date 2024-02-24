#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlSN_R.CowgirlSN_R_C
// (None)

class UClass* UCowgirlSN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlSN_R_C");

	return Clss;
}


// CowgirlSN_R_C CowgirlSN_R.Default__CowgirlSN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlSN_R_C* UCowgirlSN_R_C::GetDefaultObj()
{
	static class UCowgirlSN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlSN_R_C*>(UCowgirlSN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


