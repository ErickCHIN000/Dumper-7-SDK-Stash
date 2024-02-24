#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlLN_G.CowgirlLN_G_C
// (None)

class UClass* UCowgirlLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlLN_G_C");

	return Clss;
}


// CowgirlLN_G_C CowgirlLN_G.Default__CowgirlLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlLN_G_C* UCowgirlLN_G_C::GetDefaultObj()
{
	static class UCowgirlLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlLN_G_C*>(UCowgirlLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


