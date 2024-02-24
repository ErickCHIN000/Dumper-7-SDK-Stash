#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDefault01_FloatRhyme.ParvatiDefault01_FloatRhyme_C
// (None)

class UClass* UParvatiDefault01_FloatRhyme_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDefault01_FloatRhyme_C");

	return Clss;
}


// ParvatiDefault01_FloatRhyme_C ParvatiDefault01_FloatRhyme.Default__ParvatiDefault01_FloatRhyme_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDefault01_FloatRhyme_C* UParvatiDefault01_FloatRhyme_C::GetDefaultObj()
{
	static class UParvatiDefault01_FloatRhyme_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDefault01_FloatRhyme_C*>(UParvatiDefault01_FloatRhyme_C::StaticClass()->DefaultObject);

	return Default;
}

}


