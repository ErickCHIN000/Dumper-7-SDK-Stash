#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Blindman_Note2.Blindman_Note2_C
// (Actor)

class UClass* ABlindman_Note2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Blindman_Note2_C");

	return Clss;
}


// Blindman_Note2_C Blindman_Note2.Default__Blindman_Note2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindman_Note2_C* ABlindman_Note2_C::GetDefaultObj()
{
	static class ABlindman_Note2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindman_Note2_C*>(ABlindman_Note2_C::StaticClass()->DefaultObject);

	return Default;
}

}


