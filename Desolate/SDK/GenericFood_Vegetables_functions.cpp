#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericFood_Vegetables.GenericFood_Vegetables_C
// (Actor)

class UClass* AGenericFood_Vegetables_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericFood_Vegetables_C");

	return Clss;
}


// GenericFood_Vegetables_C GenericFood_Vegetables.Default__GenericFood_Vegetables_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericFood_Vegetables_C* AGenericFood_Vegetables_C::GetDefaultObj()
{
	static class AGenericFood_Vegetables_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericFood_Vegetables_C*>(AGenericFood_Vegetables_C::StaticClass()->DefaultObject);

	return Default;
}

}


