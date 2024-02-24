#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Church_AcolyteDiary.Church_AcolyteDiary_C
// (Actor)

class UClass* AChurch_AcolyteDiary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Church_AcolyteDiary_C");

	return Clss;
}


// Church_AcolyteDiary_C Church_AcolyteDiary.Default__Church_AcolyteDiary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChurch_AcolyteDiary_C* AChurch_AcolyteDiary_C::GetDefaultObj()
{
	static class AChurch_AcolyteDiary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChurch_AcolyteDiary_C*>(AChurch_AcolyteDiary_C::StaticClass()->DefaultObject);

	return Default;
}

}


