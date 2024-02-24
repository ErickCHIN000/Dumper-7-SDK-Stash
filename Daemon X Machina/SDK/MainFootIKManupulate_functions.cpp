#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainFootIKManupulate.MainFootIKManupulate_C
// (None)

class UClass* UMainFootIKManupulate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainFootIKManupulate_C");

	return Clss;
}


// MainFootIKManupulate_C MainFootIKManupulate.Default__MainFootIKManupulate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainFootIKManupulate_C* UMainFootIKManupulate_C::GetDefaultObj()
{
	static class UMainFootIKManupulate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainFootIKManupulate_C*>(UMainFootIKManupulate_C::StaticClass()->DefaultObject);

	return Default;
}

}


