#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_FloraSamples.LL_FloraSamples_C
// (Actor)

class UClass* ALL_FloraSamples_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_FloraSamples_C");

	return Clss;
}


// LL_FloraSamples_C LL_FloraSamples.Default__LL_FloraSamples_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_FloraSamples_C* ALL_FloraSamples_C::GetDefaultObj()
{
	static class ALL_FloraSamples_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_FloraSamples_C*>(ALL_FloraSamples_C::StaticClass()->DefaultObject);

	return Default;
}

}


