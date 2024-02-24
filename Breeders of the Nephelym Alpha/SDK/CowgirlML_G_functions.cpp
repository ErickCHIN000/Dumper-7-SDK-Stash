#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlML_G.CowgirlML_G_C
// (None)

class UClass* UCowgirlML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlML_G_C");

	return Clss;
}


// CowgirlML_G_C CowgirlML_G.Default__CowgirlML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlML_G_C* UCowgirlML_G_C::GetDefaultObj()
{
	static class UCowgirlML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlML_G_C*>(UCowgirlML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


