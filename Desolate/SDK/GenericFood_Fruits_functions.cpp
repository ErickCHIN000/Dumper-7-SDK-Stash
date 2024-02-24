#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericFood_Fruits.GenericFood_Fruits_C
// (Actor)

class UClass* AGenericFood_Fruits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericFood_Fruits_C");

	return Clss;
}


// GenericFood_Fruits_C GenericFood_Fruits.Default__GenericFood_Fruits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericFood_Fruits_C* AGenericFood_Fruits_C::GetDefaultObj()
{
	static class AGenericFood_Fruits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericFood_Fruits_C*>(AGenericFood_Fruits_C::StaticClass()->DefaultObject);

	return Default;
}

}


