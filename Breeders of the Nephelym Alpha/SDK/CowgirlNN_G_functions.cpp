#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlNN_G.CowgirlNN_G_C
// (None)

class UClass* UCowgirlNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlNN_G_C");

	return Clss;
}


// CowgirlNN_G_C CowgirlNN_G.Default__CowgirlNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlNN_G_C* UCowgirlNN_G_C::GetDefaultObj()
{
	static class UCowgirlNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlNN_G_C*>(UCowgirlNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


