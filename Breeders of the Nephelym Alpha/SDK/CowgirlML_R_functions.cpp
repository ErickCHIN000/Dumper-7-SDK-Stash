#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlML_R.CowgirlML_R_C
// (None)

class UClass* UCowgirlML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlML_R_C");

	return Clss;
}


// CowgirlML_R_C CowgirlML_R.Default__CowgirlML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlML_R_C* UCowgirlML_R_C::GetDefaultObj()
{
	static class UCowgirlML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlML_R_C*>(UCowgirlML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


