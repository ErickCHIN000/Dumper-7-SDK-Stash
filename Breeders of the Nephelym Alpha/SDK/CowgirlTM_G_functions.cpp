#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlTM_G.CowgirlTM_G_C
// (None)

class UClass* UCowgirlTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlTM_G_C");

	return Clss;
}


// CowgirlTM_G_C CowgirlTM_G.Default__CowgirlTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlTM_G_C* UCowgirlTM_G_C::GetDefaultObj()
{
	static class UCowgirlTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlTM_G_C*>(UCowgirlTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


