#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat9.Hat9_C
// (Actor)

class UClass* AHat9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat9_C");

	return Clss;
}


// Hat9_C Hat9.Default__Hat9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat9_C* AHat9_C::GetDefaultObj()
{
	static class AHat9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat9_C*>(AHat9_C::StaticClass()->DefaultObject);

	return Default;
}

}


