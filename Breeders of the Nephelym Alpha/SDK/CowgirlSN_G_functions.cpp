#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlSN_G.CowgirlSN_G_C
// (None)

class UClass* UCowgirlSN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlSN_G_C");

	return Clss;
}


// CowgirlSN_G_C CowgirlSN_G.Default__CowgirlSN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlSN_G_C* UCowgirlSN_G_C::GetDefaultObj()
{
	static class UCowgirlSN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlSN_G_C*>(UCowgirlSN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


