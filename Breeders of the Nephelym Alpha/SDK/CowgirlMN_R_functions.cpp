#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlMN_R.CowgirlMN_R_C
// (None)

class UClass* UCowgirlMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlMN_R_C");

	return Clss;
}


// CowgirlMN_R_C CowgirlMN_R.Default__CowgirlMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlMN_R_C* UCowgirlMN_R_C::GetDefaultObj()
{
	static class UCowgirlMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlMN_R_C*>(UCowgirlMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


