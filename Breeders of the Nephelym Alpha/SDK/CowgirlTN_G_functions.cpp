#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CowgirlTN_G.CowgirlTN_G_C
// (None)

class UClass* UCowgirlTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowgirlTN_G_C");

	return Clss;
}


// CowgirlTN_G_C CowgirlTN_G.Default__CowgirlTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirlTN_G_C* UCowgirlTN_G_C::GetDefaultObj()
{
	static class UCowgirlTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirlTN_G_C*>(UCowgirlTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


