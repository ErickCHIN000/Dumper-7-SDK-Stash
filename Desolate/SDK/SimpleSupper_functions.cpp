#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleSupper.SimpleSupper_C
// (Actor)

class UClass* ASimpleSupper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleSupper_C");

	return Clss;
}


// SimpleSupper_C SimpleSupper.Default__SimpleSupper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASimpleSupper_C* ASimpleSupper_C::GetDefaultObj()
{
	static class ASimpleSupper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASimpleSupper_C*>(ASimpleSupper_C::StaticClass()->DefaultObject);

	return Default;
}

}


