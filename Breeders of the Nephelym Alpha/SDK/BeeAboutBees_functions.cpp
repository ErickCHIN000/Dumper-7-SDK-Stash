#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeAboutBees.BeeAboutBees_C
// (None)

class UClass* UBeeAboutBees_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeAboutBees_C");

	return Clss;
}


// BeeAboutBees_C BeeAboutBees.Default__BeeAboutBees_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeAboutBees_C* UBeeAboutBees_C::GetDefaultObj()
{
	static class UBeeAboutBees_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeAboutBees_C*>(UBeeAboutBees_C::StaticClass()->DefaultObject);

	return Default;
}

}


