#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PolymerFabric.PolymerFabric_C
// (Actor)

class UClass* APolymerFabric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolymerFabric_C");

	return Clss;
}


// PolymerFabric_C PolymerFabric.Default__PolymerFabric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APolymerFabric_C* APolymerFabric_C::GetDefaultObj()
{
	static class APolymerFabric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APolymerFabric_C*>(APolymerFabric_C::StaticClass()->DefaultObject);

	return Default;
}

}


