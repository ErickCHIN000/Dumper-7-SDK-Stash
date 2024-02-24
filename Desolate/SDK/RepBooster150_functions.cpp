#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RepBooster150.RepBooster150_C
// (Actor)

class UClass* ARepBooster150_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RepBooster150_C");

	return Clss;
}


// RepBooster150_C RepBooster150.Default__RepBooster150_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARepBooster150_C* ARepBooster150_C::GetDefaultObj()
{
	static class ARepBooster150_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARepBooster150_C*>(ARepBooster150_C::StaticClass()->DefaultObject);

	return Default;
}

}


