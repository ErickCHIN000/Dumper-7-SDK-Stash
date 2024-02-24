#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlHN_G.CowgirlHN_G_C
// (None)

class UClass* UCowgirlHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlHN_G_C");

	return Clss;
}


// CowgirlHN_G_C CowgirlHN_G.Default__CowgirlHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlHN_G_C* UCowgirlHN_G_C::GetDefaultObj()
{
	static class UCowgirlHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlHN_G_C*>(UCowgirlHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


