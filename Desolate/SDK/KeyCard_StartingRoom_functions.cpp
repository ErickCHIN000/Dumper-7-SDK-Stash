#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KeyCard_StartingRoom.KeyCard_StartingRoom_C
// (Actor)

class UClass* AKeyCard_StartingRoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyCard_StartingRoom_C");

	return Clss;
}


// KeyCard_StartingRoom_C KeyCard_StartingRoom.Default__KeyCard_StartingRoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKeyCard_StartingRoom_C* AKeyCard_StartingRoom_C::GetDefaultObj()
{
	static class AKeyCard_StartingRoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKeyCard_StartingRoom_C*>(AKeyCard_StartingRoom_C::StaticClass()->DefaultObject);

	return Default;
}

}


