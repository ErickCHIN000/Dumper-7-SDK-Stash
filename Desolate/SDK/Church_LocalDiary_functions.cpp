#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Church_LocalDiary.Church_LocalDiary_C
// (Actor)

class UClass* AChurch_LocalDiary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Church_LocalDiary_C");

	return Clss;
}


// Church_LocalDiary_C Church_LocalDiary.Default__Church_LocalDiary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChurch_LocalDiary_C* AChurch_LocalDiary_C::GetDefaultObj()
{
	static class AChurch_LocalDiary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChurch_LocalDiary_C*>(AChurch_LocalDiary_C::StaticClass()->DefaultObject);

	return Default;
}

}


