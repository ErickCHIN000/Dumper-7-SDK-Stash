#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass iraya_placeholder.iraya_placeholder_C
// (Actor)

class UClass* AIraya_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("iraya_placeholder_C");

	return Clss;
}


// iraya_placeholder_C iraya_placeholder.Default__iraya_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIraya_placeholder_C* AIraya_placeholder_C::GetDefaultObj()
{
	static class AIraya_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIraya_placeholder_C*>(AIraya_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


