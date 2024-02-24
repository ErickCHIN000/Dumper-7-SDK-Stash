#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlTN_R.CowgirlTN_R_C
// (None)

class UClass* UCowgirlTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlTN_R_C");

	return Clss;
}


// CowgirlTN_R_C CowgirlTN_R.Default__CowgirlTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlTN_R_C* UCowgirlTN_R_C::GetDefaultObj()
{
	static class UCowgirlTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlTN_R_C*>(UCowgirlTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


