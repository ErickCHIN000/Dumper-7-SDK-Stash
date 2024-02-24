#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buckwheat.Buckwheat_C
// (Actor)

class UClass* ABuckwheat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buckwheat_C");

	return Clss;
}


// Buckwheat_C Buckwheat.Default__Buckwheat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuckwheat_C* ABuckwheat_C::GetDefaultObj()
{
	static class ABuckwheat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuckwheat_C*>(ABuckwheat_C::StaticClass()->DefaultObject);

	return Default;
}

}


