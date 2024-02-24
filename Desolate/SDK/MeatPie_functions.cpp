#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeatPie.MeatPie_C
// (Actor)

class UClass* AMeatPie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeatPie_C");

	return Clss;
}


// MeatPie_C MeatPie.Default__MeatPie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMeatPie_C* AMeatPie_C::GetDefaultObj()
{
	static class AMeatPie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeatPie_C*>(AMeatPie_C::StaticClass()->DefaultObject);

	return Default;
}

}


