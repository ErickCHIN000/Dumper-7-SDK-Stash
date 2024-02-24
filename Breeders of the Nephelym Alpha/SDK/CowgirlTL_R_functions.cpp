#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlTL_R.CowgirlTL_R_C
// (None)

class UClass* UCowgirlTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlTL_R_C");

	return Clss;
}


// CowgirlTL_R_C CowgirlTL_R.Default__CowgirlTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlTL_R_C* UCowgirlTL_R_C::GetDefaultObj()
{
	static class UCowgirlTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlTL_R_C*>(UCowgirlTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


