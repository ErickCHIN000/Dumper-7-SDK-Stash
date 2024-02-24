#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNL_G.CowgirlNL_G_C
// (None)

class UClass* UCowgirlNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNL_G_C");

	return Clss;
}


// CowgirlNL_G_C CowgirlNL_G.Default__CowgirlNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNL_G_C* UCowgirlNL_G_C::GetDefaultObj()
{
	static class UCowgirlNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNL_G_C*>(UCowgirlNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


