#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlSL_G.CowgirlSL_G_C
// (None)

class UClass* UCowgirlSL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlSL_G_C");

	return Clss;
}


// CowgirlSL_G_C CowgirlSL_G.Default__CowgirlSL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlSL_G_C* UCowgirlSL_G_C::GetDefaultObj()
{
	static class UCowgirlSL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlSL_G_C*>(UCowgirlSL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


