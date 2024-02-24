#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlMN_G.CowgirlMN_G_C
// (None)

class UClass* UCowgirlMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlMN_G_C");

	return Clss;
}


// CowgirlMN_G_C CowgirlMN_G.Default__CowgirlMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlMN_G_C* UCowgirlMN_G_C::GetDefaultObj()
{
	static class UCowgirlMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlMN_G_C*>(UCowgirlMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


