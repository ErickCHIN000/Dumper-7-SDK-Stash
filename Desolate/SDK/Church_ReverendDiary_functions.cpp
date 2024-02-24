#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Church_ReverendDiary.Church_ReverendDiary_C
// (Actor)

class UClass* AChurch_ReverendDiary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Church_ReverendDiary_C");

	return Clss;
}


// Church_ReverendDiary_C Church_ReverendDiary.Default__Church_ReverendDiary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChurch_ReverendDiary_C* AChurch_ReverendDiary_C::GetDefaultObj()
{
	static class AChurch_ReverendDiary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChurch_ReverendDiary_C*>(AChurch_ReverendDiary_C::StaticClass()->DefaultObject);

	return Default;
}

}


