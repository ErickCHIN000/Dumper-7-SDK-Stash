#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cowgirl.Cowgirl_C
// (None)

class UClass* UCowgirl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cowgirl_C");

	return Clss;
}


// Cowgirl_C Cowgirl.Default__Cowgirl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowgirl_C* UCowgirl_C::GetDefaultObj()
{
	static class UCowgirl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowgirl_C*>(UCowgirl_C::StaticClass()->DefaultObject);

	return Default;
}

}


