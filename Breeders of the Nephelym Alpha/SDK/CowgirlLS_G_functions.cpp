#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlLS_G.CowgirlLS_G_C
// (None)

class UClass* UCowgirlLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlLS_G_C");

	return Clss;
}


// CowgirlLS_G_C CowgirlLS_G.Default__CowgirlLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlLS_G_C* UCowgirlLS_G_C::GetDefaultObj()
{
	static class UCowgirlLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlLS_G_C*>(UCowgirlLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


