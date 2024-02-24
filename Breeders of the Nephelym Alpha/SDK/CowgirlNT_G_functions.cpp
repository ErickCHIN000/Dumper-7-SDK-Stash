#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNT_G.CowgirlNT_G_C
// (None)

class UClass* UCowgirlNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNT_G_C");

	return Clss;
}


// CowgirlNT_G_C CowgirlNT_G.Default__CowgirlNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNT_G_C* UCowgirlNT_G_C::GetDefaultObj()
{
	static class UCowgirlNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNT_G_C*>(UCowgirlNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


