#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlSM_G.CowgirlSM_G_C
// (None)

class UClass* UCowgirlSM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlSM_G_C");

	return Clss;
}


// CowgirlSM_G_C CowgirlSM_G.Default__CowgirlSM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlSM_G_C* UCowgirlSM_G_C::GetDefaultObj()
{
	static class UCowgirlSM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlSM_G_C*>(UCowgirlSM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


