#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gunpowder.Gunpowder_C
// (Actor)

class UClass* AGunpowder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gunpowder_C");

	return Clss;
}


// Gunpowder_C Gunpowder.Default__Gunpowder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGunpowder_C* AGunpowder_C::GetDefaultObj()
{
	static class AGunpowder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGunpowder_C*>(AGunpowder_C::StaticClass()->DefaultObject);

	return Default;
}

}


