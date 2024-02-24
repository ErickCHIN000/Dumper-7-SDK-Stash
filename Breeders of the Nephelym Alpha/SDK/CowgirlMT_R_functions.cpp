#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlMT_R.CowgirlMT_R_C
// (None)

class UClass* UCowgirlMT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlMT_R_C");

	return Clss;
}


// CowgirlMT_R_C CowgirlMT_R.Default__CowgirlMT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlMT_R_C* UCowgirlMT_R_C::GetDefaultObj()
{
	static class UCowgirlMT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlMT_R_C*>(UCowgirlMT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


