#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Carrot.Carrot_C
// (Actor)

class UClass* ACarrot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Carrot_C");

	return Clss;
}


// Carrot_C Carrot.Default__Carrot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACarrot_C* ACarrot_C::GetDefaultObj()
{
	static class ACarrot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACarrot_C*>(ACarrot_C::StaticClass()->DefaultObject);

	return Default;
}

}


