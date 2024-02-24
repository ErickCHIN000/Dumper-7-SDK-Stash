#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_RoomSlot.ba_RoomSlot_C
// (Actor)

class UClass* Aba_RoomSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_RoomSlot_C");

	return Clss;
}


// ba_RoomSlot_C ba_RoomSlot.Default__ba_RoomSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_RoomSlot_C* Aba_RoomSlot_C::GetDefaultObj()
{
	static class Aba_RoomSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_RoomSlot_C*>(Aba_RoomSlot_C::StaticClass()->DefaultObject);

	return Default;
}

}


