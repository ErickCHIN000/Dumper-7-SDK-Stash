#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlHM_G.CowgirlHM_G_C
// (None)

class UClass* UCowgirlHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlHM_G_C");

	return Clss;
}


// CowgirlHM_G_C CowgirlHM_G.Default__CowgirlHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlHM_G_C* UCowgirlHM_G_C::GetDefaultObj()
{
	static class UCowgirlHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlHM_G_C*>(UCowgirlHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


