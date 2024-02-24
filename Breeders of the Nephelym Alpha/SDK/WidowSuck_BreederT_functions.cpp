#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowSuck_BreederT.WidowSuck_BreederT_C
// (None)

class UClass* UWidowSuck_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowSuck_BreederT_C");

	return Clss;
}


// WidowSuck_BreederT_C WidowSuck_BreederT.Default__WidowSuck_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowSuck_BreederT_C* UWidowSuck_BreederT_C::GetDefaultObj()
{
	static class UWidowSuck_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowSuck_BreederT_C*>(UWidowSuck_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


