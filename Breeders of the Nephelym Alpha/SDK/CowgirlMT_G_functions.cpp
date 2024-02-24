#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlMT_G.CowgirlMT_G_C
// (None)

class UClass* UCowgirlMT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlMT_G_C");

	return Clss;
}


// CowgirlMT_G_C CowgirlMT_G.Default__CowgirlMT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlMT_G_C* UCowgirlMT_G_C::GetDefaultObj()
{
	static class UCowgirlMT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlMT_G_C*>(UCowgirlMT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


