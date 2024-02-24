#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlMH_G.CowgirlMH_G_C
// (None)

class UClass* UCowgirlMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlMH_G_C");

	return Clss;
}


// CowgirlMH_G_C CowgirlMH_G.Default__CowgirlMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlMH_G_C* UCowgirlMH_G_C::GetDefaultObj()
{
	static class UCowgirlMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlMH_G_C*>(UCowgirlMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


