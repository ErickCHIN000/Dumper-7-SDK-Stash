#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlMS_G.CowgirlMS_G_C
// (None)

class UClass* UCowgirlMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlMS_G_C");

	return Clss;
}


// CowgirlMS_G_C CowgirlMS_G.Default__CowgirlMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlMS_G_C* UCowgirlMS_G_C::GetDefaultObj()
{
	static class UCowgirlMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlMS_G_C*>(UCowgirlMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


