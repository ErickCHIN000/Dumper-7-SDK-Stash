#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlTS_G.CowgirlTS_G_C
// (None)

class UClass* UCowgirlTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlTS_G_C");

	return Clss;
}


// CowgirlTS_G_C CowgirlTS_G.Default__CowgirlTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlTS_G_C* UCowgirlTS_G_C::GetDefaultObj()
{
	static class UCowgirlTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlTS_G_C*>(UCowgirlTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


