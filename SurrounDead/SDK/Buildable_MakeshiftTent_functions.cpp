#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_MakeshiftTent.Buildable_MakeshiftTent_C
// (Actor)

class UClass* ABuildable_MakeshiftTent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_MakeshiftTent_C");

	return Clss;
}


// Buildable_MakeshiftTent_C Buildable_MakeshiftTent.Default__Buildable_MakeshiftTent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_MakeshiftTent_C* ABuildable_MakeshiftTent_C::GetDefaultObj()
{
	static class ABuildable_MakeshiftTent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_MakeshiftTent_C*>(ABuildable_MakeshiftTent_C::StaticClass()->DefaultObject);

	return Default;
}

}


