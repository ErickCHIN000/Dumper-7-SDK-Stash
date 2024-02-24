#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleDinner.SimpleDinner_C
// (Actor)

class UClass* ASimpleDinner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleDinner_C");

	return Clss;
}


// SimpleDinner_C SimpleDinner.Default__SimpleDinner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASimpleDinner_C* ASimpleDinner_C::GetDefaultObj()
{
	static class ASimpleDinner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASimpleDinner_C*>(ASimpleDinner_C::StaticClass()->DefaultObject);

	return Default;
}

}


