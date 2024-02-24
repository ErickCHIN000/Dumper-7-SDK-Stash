#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Miniboss_Vorcanar.Challenge_Miniboss_Vorcanar_C
// (None)

class UClass* UChallenge_Miniboss_Vorcanar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Miniboss_Vorcanar_C");

	return Clss;
}


// Challenge_Miniboss_Vorcanar_C Challenge_Miniboss_Vorcanar.Default__Challenge_Miniboss_Vorcanar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Miniboss_Vorcanar_C* UChallenge_Miniboss_Vorcanar_C::GetDefaultObj()
{
	static class UChallenge_Miniboss_Vorcanar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Miniboss_Vorcanar_C*>(UChallenge_Miniboss_Vorcanar_C::StaticClass()->DefaultObject);

	return Default;
}

}


