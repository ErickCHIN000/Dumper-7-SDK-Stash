#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlMS_R.CowgirlMS_R_C
// (None)

class UClass* UCowgirlMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlMS_R_C");

	return Clss;
}


// CowgirlMS_R_C CowgirlMS_R.Default__CowgirlMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlMS_R_C* UCowgirlMS_R_C::GetDefaultObj()
{
	static class UCowgirlMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlMS_R_C*>(UCowgirlMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


