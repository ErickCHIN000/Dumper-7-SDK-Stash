#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KeyCard_Chernovsk.KeyCard_Chernovsk_C
// (Actor)

class UClass* AKeyCard_Chernovsk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyCard_Chernovsk_C");

	return Clss;
}


// KeyCard_Chernovsk_C KeyCard_Chernovsk.Default__KeyCard_Chernovsk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKeyCard_Chernovsk_C* AKeyCard_Chernovsk_C::GetDefaultObj()
{
	static class AKeyCard_Chernovsk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKeyCard_Chernovsk_C*>(AKeyCard_Chernovsk_C::StaticClass()->DefaultObject);

	return Default;
}

}


