#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KeyCard_Zalegorsk.KeyCard_Zalegorsk_C
// (Actor)

class UClass* AKeyCard_Zalegorsk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyCard_Zalegorsk_C");

	return Clss;
}


// KeyCard_Zalegorsk_C KeyCard_Zalegorsk.Default__KeyCard_Zalegorsk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKeyCard_Zalegorsk_C* AKeyCard_Zalegorsk_C::GetDefaultObj()
{
	static class AKeyCard_Zalegorsk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKeyCard_Zalegorsk_C*>(AKeyCard_Zalegorsk_C::StaticClass()->DefaultObject);

	return Default;
}

}


