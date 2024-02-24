#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlTH_G.CowgirlTH_G_C
// (None)

class UClass* UCowgirlTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlTH_G_C");

	return Clss;
}


// CowgirlTH_G_C CowgirlTH_G.Default__CowgirlTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlTH_G_C* UCowgirlTH_G_C::GetDefaultObj()
{
	static class UCowgirlTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlTH_G_C*>(UCowgirlTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


