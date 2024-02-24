#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlTH_R.CowgirlTH_R_C
// (None)

class UClass* UCowgirlTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlTH_R_C");

	return Clss;
}


// CowgirlTH_R_C CowgirlTH_R.Default__CowgirlTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlTH_R_C* UCowgirlTH_R_C::GetDefaultObj()
{
	static class UCowgirlTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlTH_R_C*>(UCowgirlTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


