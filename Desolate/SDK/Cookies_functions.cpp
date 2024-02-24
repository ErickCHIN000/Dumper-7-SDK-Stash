#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cookies.Cookies_C
// (Actor)

class UClass* ACookies_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cookies_C");

	return Clss;
}


// Cookies_C Cookies.Default__Cookies_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACookies_C* ACookies_C::GetDefaultObj()
{
	static class ACookies_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACookies_C*>(ACookies_C::StaticClass()->DefaultObject);

	return Default;
}

}


