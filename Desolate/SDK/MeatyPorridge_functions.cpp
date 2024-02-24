#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeatyPorridge.MeatyPorridge_C
// (Actor)

class UClass* AMeatyPorridge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeatyPorridge_C");

	return Clss;
}


// MeatyPorridge_C MeatyPorridge.Default__MeatyPorridge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMeatyPorridge_C* AMeatyPorridge_C::GetDefaultObj()
{
	static class AMeatyPorridge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeatyPorridge_C*>(AMeatyPorridge_C::StaticClass()->DefaultObject);

	return Default;
}

}


