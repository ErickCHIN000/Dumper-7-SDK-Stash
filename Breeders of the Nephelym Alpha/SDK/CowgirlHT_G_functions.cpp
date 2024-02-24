#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlHT_G.CowgirlHT_G_C
// (None)

class UClass* UCowgirlHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlHT_G_C");

	return Clss;
}


// CowgirlHT_G_C CowgirlHT_G.Default__CowgirlHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlHT_G_C* UCowgirlHT_G_C::GetDefaultObj()
{
	static class UCowgirlHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlHT_G_C*>(UCowgirlHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


