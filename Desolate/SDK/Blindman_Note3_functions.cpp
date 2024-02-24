#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Blindman_Note3.Blindman_Note3_C
// (Actor)

class UClass* ABlindman_Note3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Blindman_Note3_C");

	return Clss;
}


// Blindman_Note3_C Blindman_Note3.Default__Blindman_Note3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindman_Note3_C* ABlindman_Note3_C::GetDefaultObj()
{
	static class ABlindman_Note3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindman_Note3_C*>(ABlindman_Note3_C::StaticClass()->DefaultObject);

	return Default;
}

}


