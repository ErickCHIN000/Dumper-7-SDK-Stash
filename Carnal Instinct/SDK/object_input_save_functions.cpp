#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass object_input_save.object_input_save_C
// (None)

class UClass* UObject_input_save_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("object_input_save_C");

	return Clss;
}


// object_input_save_C object_input_save.Default__object_input_save_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UObject_input_save_C* UObject_input_save_C::GetDefaultObj()
{
	static class UObject_input_save_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UObject_input_save_C*>(UObject_input_save_C::StaticClass()->DefaultObject);

	return Default;
}

}


