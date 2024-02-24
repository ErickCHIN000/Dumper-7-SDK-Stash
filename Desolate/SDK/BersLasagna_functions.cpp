#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BersLasagna.BersLasagna_C
// (Actor)

class UClass* ABersLasagna_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BersLasagna_C");

	return Clss;
}


// BersLasagna_C BersLasagna.Default__BersLasagna_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABersLasagna_C* ABersLasagna_C::GetDefaultObj()
{
	static class ABersLasagna_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABersLasagna_C*>(ABersLasagna_C::StaticClass()->DefaultObject);

	return Default;
}

}


