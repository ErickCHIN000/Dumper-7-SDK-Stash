#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Blindman_Note1.Blindman_Note1_C
// (Actor)

class UClass* ABlindman_Note1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Blindman_Note1_C");

	return Clss;
}


// Blindman_Note1_C Blindman_Note1.Default__Blindman_Note1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindman_Note1_C* ABlindman_Note1_C::GetDefaultObj()
{
	static class ABlindman_Note1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindman_Note1_C*>(ABlindman_Note1_C::StaticClass()->DefaultObject);

	return Default;
}

}


