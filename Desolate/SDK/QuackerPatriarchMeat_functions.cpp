#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuackerPatriarchMeat.QuackerPatriarchMeat_C
// (Actor)

class UClass* AQuackerPatriarchMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuackerPatriarchMeat_C");

	return Clss;
}


// QuackerPatriarchMeat_C QuackerPatriarchMeat.Default__QuackerPatriarchMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuackerPatriarchMeat_C* AQuackerPatriarchMeat_C::GetDefaultObj()
{
	static class AQuackerPatriarchMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuackerPatriarchMeat_C*>(AQuackerPatriarchMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


