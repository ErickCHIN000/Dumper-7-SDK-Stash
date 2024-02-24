#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlTM_R.CowgirlTM_R_C
// (None)

class UClass* UCowgirlTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlTM_R_C");

	return Clss;
}


// CowgirlTM_R_C CowgirlTM_R.Default__CowgirlTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlTM_R_C* UCowgirlTM_R_C::GetDefaultObj()
{
	static class UCowgirlTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlTM_R_C*>(UCowgirlTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


