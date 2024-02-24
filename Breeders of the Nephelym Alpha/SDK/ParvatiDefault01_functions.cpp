#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDefault01.ParvatiDefault01_C
// (None)

class UClass* UParvatiDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDefault01_C");

	return Clss;
}


// ParvatiDefault01_C ParvatiDefault01.Default__ParvatiDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDefault01_C* UParvatiDefault01_C::GetDefaultObj()
{
	static class UParvatiDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDefault01_C*>(UParvatiDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


