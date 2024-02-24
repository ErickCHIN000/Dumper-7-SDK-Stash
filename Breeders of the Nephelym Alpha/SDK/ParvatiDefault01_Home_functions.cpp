#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDefault01_Home.ParvatiDefault01_Home_C
// (None)

class UClass* UParvatiDefault01_Home_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDefault01_Home_C");

	return Clss;
}


// ParvatiDefault01_Home_C ParvatiDefault01_Home.Default__ParvatiDefault01_Home_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDefault01_Home_C* UParvatiDefault01_Home_C::GetDefaultObj()
{
	static class UParvatiDefault01_Home_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDefault01_Home_C*>(UParvatiDefault01_Home_C::StaticClass()->DefaultObject);

	return Default;
}

}


