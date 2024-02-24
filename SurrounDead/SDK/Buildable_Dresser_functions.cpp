#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_Dresser.Buildable_Dresser_C
// (Actor)

class UClass* ABuildable_Dresser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_Dresser_C");

	return Clss;
}


// Buildable_Dresser_C Buildable_Dresser.Default__Buildable_Dresser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_Dresser_C* ABuildable_Dresser_C::GetDefaultObj()
{
	static class ABuildable_Dresser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_Dresser_C*>(ABuildable_Dresser_C::StaticClass()->DefaultObject);

	return Default;
}

}


