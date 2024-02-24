#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TransitionScreenshake_Base.TransitionScreenshake_Base_C
// (None)

class UClass* UTransitionScreenshake_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransitionScreenshake_Base_C");

	return Clss;
}


// TransitionScreenshake_Base_C TransitionScreenshake_Base.Default__TransitionScreenshake_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTransitionScreenshake_Base_C* UTransitionScreenshake_Base_C::GetDefaultObj()
{
	static class UTransitionScreenshake_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransitionScreenshake_Base_C*>(UTransitionScreenshake_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


