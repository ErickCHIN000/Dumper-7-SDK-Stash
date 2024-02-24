#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlTL_G.CowgirlTL_G_C
// (None)

class UClass* UCowgirlTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlTL_G_C");

	return Clss;
}


// CowgirlTL_G_C CowgirlTL_G.Default__CowgirlTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlTL_G_C* UCowgirlTL_G_C::GetDefaultObj()
{
	static class UCowgirlTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlTL_G_C*>(UCowgirlTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


