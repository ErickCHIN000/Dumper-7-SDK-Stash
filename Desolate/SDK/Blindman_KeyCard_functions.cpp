#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Blindman_KeyCard.Blindman_KeyCard_C
// (Actor)

class UClass* ABlindman_KeyCard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Blindman_KeyCard_C");

	return Clss;
}


// Blindman_KeyCard_C Blindman_KeyCard.Default__Blindman_KeyCard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindman_KeyCard_C* ABlindman_KeyCard_C::GetDefaultObj()
{
	static class ABlindman_KeyCard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindman_KeyCard_C*>(ABlindman_KeyCard_C::StaticClass()->DefaultObject);

	return Default;
}

}


