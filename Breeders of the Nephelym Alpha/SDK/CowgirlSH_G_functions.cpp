#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlSH_G.CowgirlSH_G_C
// (None)

class UClass* UCowgirlSH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlSH_G_C");

	return Clss;
}


// CowgirlSH_G_C CowgirlSH_G.Default__CowgirlSH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlSH_G_C* UCowgirlSH_G_C::GetDefaultObj()
{
	static class UCowgirlSH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlSH_G_C*>(UCowgirlSH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


