#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlLT_G.CowgirlLT_G_C
// (None)

class UClass* UCowgirlLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlLT_G_C");

	return Clss;
}


// CowgirlLT_G_C CowgirlLT_G.Default__CowgirlLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlLT_G_C* UCowgirlLT_G_C::GetDefaultObj()
{
	static class UCowgirlLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlLT_G_C*>(UCowgirlLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


