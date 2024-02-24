#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Seat.Trash_Seat_C
// (Actor)

class UClass* ATrash_Seat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Seat_C");

	return Clss;
}


// Trash_Seat_C Trash_Seat.Default__Trash_Seat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Seat_C* ATrash_Seat_C::GetDefaultObj()
{
	static class ATrash_Seat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Seat_C*>(ATrash_Seat_C::StaticClass()->DefaultObject);

	return Default;
}

}


