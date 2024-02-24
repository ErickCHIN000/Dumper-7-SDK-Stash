#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlHL_G.CowgirlHL_G_C
// (None)

class UClass* UCowgirlHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlHL_G_C");

	return Clss;
}


// CowgirlHL_G_C CowgirlHL_G.Default__CowgirlHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlHL_G_C* UCowgirlHL_G_C::GetDefaultObj()
{
	static class UCowgirlHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlHL_G_C*>(UCowgirlHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


