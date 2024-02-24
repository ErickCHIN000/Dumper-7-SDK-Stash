#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNH_G.CowgirlNH_G_C
// (None)

class UClass* UCowgirlNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNH_G_C");

	return Clss;
}


// CowgirlNH_G_C CowgirlNH_G.Default__CowgirlNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNH_G_C* UCowgirlNH_G_C::GetDefaultObj()
{
	static class UCowgirlNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNH_G_C*>(UCowgirlNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


