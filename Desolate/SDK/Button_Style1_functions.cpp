#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Button_Style1.Button_Style1_C
// (None)

class UClass* UButton_Style1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button_Style1_C");

	return Clss;
}


// Button_Style1_C Button_Style1.Default__Button_Style1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButton_Style1_C* UButton_Style1_C::GetDefaultObj()
{
	static class UButton_Style1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButton_Style1_C*>(UButton_Style1_C::StaticClass()->DefaultObject);

	return Default;
}

}


