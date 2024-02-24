#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowSuck_BreederF.WidowSuck_BreederF_C
// (None)

class UClass* UWidowSuck_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowSuck_BreederF_C");

	return Clss;
}


// WidowSuck_BreederF_C WidowSuck_BreederF.Default__WidowSuck_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowSuck_BreederF_C* UWidowSuck_BreederF_C::GetDefaultObj()
{
	static class UWidowSuck_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowSuck_BreederF_C*>(UWidowSuck_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


