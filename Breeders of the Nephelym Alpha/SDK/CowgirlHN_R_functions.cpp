#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlHN_R.CowgirlHN_R_C
// (None)

class UClass* UCowgirlHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlHN_R_C");

	return Clss;
}


// CowgirlHN_R_C CowgirlHN_R.Default__CowgirlHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlHN_R_C* UCowgirlHN_R_C::GetDefaultObj()
{
	static class UCowgirlHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlHN_R_C*>(UCowgirlHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


