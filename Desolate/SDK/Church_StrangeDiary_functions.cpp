#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Church_StrangeDiary.Church_StrangeDiary_C
// (Actor)

class UClass* AChurch_StrangeDiary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Church_StrangeDiary_C");

	return Clss;
}


// Church_StrangeDiary_C Church_StrangeDiary.Default__Church_StrangeDiary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChurch_StrangeDiary_C* AChurch_StrangeDiary_C::GetDefaultObj()
{
	static class AChurch_StrangeDiary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChurch_StrangeDiary_C*>(AChurch_StrangeDiary_C::StaticClass()->DefaultObject);

	return Default;
}

}


