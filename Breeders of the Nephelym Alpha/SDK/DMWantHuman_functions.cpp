#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMWantHuman.DMWantHuman_C
// (None)

class UClass* UDMWantHuman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMWantHuman_C");

	return Clss;
}


// DMWantHuman_C DMWantHuman.Default__DMWantHuman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMWantHuman_C* UDMWantHuman_C::GetDefaultObj()
{
	static class UDMWantHuman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMWantHuman_C*>(UDMWantHuman_C::StaticClass()->DefaultObject);

	return Default;
}

}


