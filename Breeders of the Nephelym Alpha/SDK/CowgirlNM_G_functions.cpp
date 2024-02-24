#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNM_G.CowgirlNM_G_C
// (None)

class UClass* UCowgirlNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNM_G_C");

	return Clss;
}


// CowgirlNM_G_C CowgirlNM_G.Default__CowgirlNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNM_G_C* UCowgirlNM_G_C::GetDefaultObj()
{
	static class UCowgirlNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNM_G_C*>(UCowgirlNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


