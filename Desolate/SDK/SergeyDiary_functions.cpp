#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SergeyDiary.SergeyDiary_C
// (Actor)

class UClass* ASergeyDiary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SergeyDiary_C");

	return Clss;
}


// SergeyDiary_C SergeyDiary.Default__SergeyDiary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASergeyDiary_C* ASergeyDiary_C::GetDefaultObj()
{
	static class ASergeyDiary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASergeyDiary_C*>(ASergeyDiary_C::StaticClass()->DefaultObject);

	return Default;
}

}


