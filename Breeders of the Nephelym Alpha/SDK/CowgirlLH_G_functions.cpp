#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlLH_G.CowgirlLH_G_C
// (None)

class UClass* UCowgirlLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlLH_G_C");

	return Clss;
}


// CowgirlLH_G_C CowgirlLH_G.Default__CowgirlLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlLH_G_C* UCowgirlLH_G_C::GetDefaultObj()
{
	static class UCowgirlLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlLH_G_C*>(UCowgirlLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


