#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuackerStrangeMeat.QuackerStrangeMeat_C
// (Actor)

class UClass* AQuackerStrangeMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuackerStrangeMeat_C");

	return Clss;
}


// QuackerStrangeMeat_C QuackerStrangeMeat.Default__QuackerStrangeMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuackerStrangeMeat_C* AQuackerStrangeMeat_C::GetDefaultObj()
{
	static class AQuackerStrangeMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuackerStrangeMeat_C*>(AQuackerStrangeMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


