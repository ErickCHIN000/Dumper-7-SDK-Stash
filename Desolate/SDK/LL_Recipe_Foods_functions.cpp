#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Recipe_Foods.LL_Recipe_Foods_C
// (Actor)

class UClass* ALL_Recipe_Foods_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Recipe_Foods_C");

	return Clss;
}


// LL_Recipe_Foods_C LL_Recipe_Foods.Default__LL_Recipe_Foods_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Recipe_Foods_C* ALL_Recipe_Foods_C::GetDefaultObj()
{
	static class ALL_Recipe_Foods_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Recipe_Foods_C*>(ALL_Recipe_Foods_C::StaticClass()->DefaultObject);

	return Default;
}

}


