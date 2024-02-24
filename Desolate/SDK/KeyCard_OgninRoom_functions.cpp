#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KeyCard_OgninRoom.KeyCard_OgninRoom_C
// (Actor)

class UClass* AKeyCard_OgninRoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyCard_OgninRoom_C");

	return Clss;
}


// KeyCard_OgninRoom_C KeyCard_OgninRoom.Default__KeyCard_OgninRoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKeyCard_OgninRoom_C* AKeyCard_OgninRoom_C::GetDefaultObj()
{
	static class AKeyCard_OgninRoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKeyCard_OgninRoom_C*>(AKeyCard_OgninRoom_C::StaticClass()->DefaultObject);

	return Default;
}

}


