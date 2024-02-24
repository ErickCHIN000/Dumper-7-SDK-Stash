#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlHL_R.CowgirlHL_R_C
// (None)

class UClass* UCowgirlHL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlHL_R_C");

	return Clss;
}


// CowgirlHL_R_C CowgirlHL_R.Default__CowgirlHL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlHL_R_C* UCowgirlHL_R_C::GetDefaultObj()
{
	static class UCowgirlHL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlHL_R_C*>(UCowgirlHL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


