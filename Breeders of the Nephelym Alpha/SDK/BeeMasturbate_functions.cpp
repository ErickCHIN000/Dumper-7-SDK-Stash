#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeMasturbate.BeeMasturbate_C
// (None)

class UClass* UBeeMasturbate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeMasturbate_C");

	return Clss;
}


// BeeMasturbate_C BeeMasturbate.Default__BeeMasturbate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeMasturbate_C* UBeeMasturbate_C::GetDefaultObj()
{
	static class UBeeMasturbate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeMasturbate_C*>(UBeeMasturbate_C::StaticClass()->DefaultObject);

	return Default;
}

}


