#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNS_G.CowgirlNS_G_C
// (None)

class UClass* UCowgirlNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNS_G_C");

	return Clss;
}


// CowgirlNS_G_C CowgirlNS_G.Default__CowgirlNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNS_G_C* UCowgirlNS_G_C::GetDefaultObj()
{
	static class UCowgirlNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNS_G_C*>(UCowgirlNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


