#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_RandomEridiumCount_Standard.Init_RandomEridiumCount_Standard_C
// (None)

class UClass* UInit_RandomEridiumCount_Standard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_RandomEridiumCount_Standard_C");

	return Clss;
}


// Init_RandomEridiumCount_Standard_C Init_RandomEridiumCount_Standard.Default__Init_RandomEridiumCount_Standard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_RandomEridiumCount_Standard_C* UInit_RandomEridiumCount_Standard_C::GetDefaultObj()
{
	static class UInit_RandomEridiumCount_Standard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_RandomEridiumCount_Standard_C*>(UInit_RandomEridiumCount_Standard_C::StaticClass()->DefaultObject);

	return Default;
}

}


