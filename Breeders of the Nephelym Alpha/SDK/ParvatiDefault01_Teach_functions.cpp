#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDefault01_Teach.ParvatiDefault01_Teach_C
// (None)

class UClass* UParvatiDefault01_Teach_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDefault01_Teach_C");

	return Clss;
}


// ParvatiDefault01_Teach_C ParvatiDefault01_Teach.Default__ParvatiDefault01_Teach_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDefault01_Teach_C* UParvatiDefault01_Teach_C::GetDefaultObj()
{
	static class UParvatiDefault01_Teach_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDefault01_Teach_C*>(UParvatiDefault01_Teach_C::StaticClass()->DefaultObject);

	return Default;
}

}


