#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlHS_G.CowgirlHS_G_C
// (None)

class UClass* UCowgirlHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlHS_G_C");

	return Clss;
}


// CowgirlHS_G_C CowgirlHS_G.Default__CowgirlHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlHS_G_C* UCowgirlHS_G_C::GetDefaultObj()
{
	static class UCowgirlHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlHS_G_C*>(UCowgirlHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


