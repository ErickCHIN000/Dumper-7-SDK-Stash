#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlLM_G.CowgirlLM_G_C
// (None)

class UClass* UCowgirlLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlLM_G_C");

	return Clss;
}


// CowgirlLM_G_C CowgirlLM_G.Default__CowgirlLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlLM_G_C* UCowgirlLM_G_C::GetDefaultObj()
{
	static class UCowgirlLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlLM_G_C*>(UCowgirlLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


