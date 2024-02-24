#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_RoomOrigin.ba_RoomOrigin_C
// (Actor)

class UClass* Aba_RoomOrigin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_RoomOrigin_C");

	return Clss;
}


// ba_RoomOrigin_C ba_RoomOrigin.Default__ba_RoomOrigin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_RoomOrigin_C* Aba_RoomOrigin_C::GetDefaultObj()
{
	static class Aba_RoomOrigin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_RoomOrigin_C*>(Aba_RoomOrigin_C::StaticClass()->DefaultObject);

	return Default;
}

}


