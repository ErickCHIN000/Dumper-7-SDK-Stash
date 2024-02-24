#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cucumber.Cucumber_C
// (Actor)

class UClass* ACucumber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cucumber_C");

	return Clss;
}


// Cucumber_C Cucumber.Default__Cucumber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACucumber_C* ACucumber_C::GetDefaultObj()
{
	static class ACucumber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACucumber_C*>(ACucumber_C::StaticClass()->DefaultObject);

	return Default;
}

}


