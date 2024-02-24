#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericFood_Flour.GenericFood_Flour_C
// (Actor)

class UClass* AGenericFood_Flour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericFood_Flour_C");

	return Clss;
}


// GenericFood_Flour_C GenericFood_Flour.Default__GenericFood_Flour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericFood_Flour_C* AGenericFood_Flour_C::GetDefaultObj()
{
	static class AGenericFood_Flour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericFood_Flour_C*>(AGenericFood_Flour_C::StaticClass()->DefaultObject);

	return Default;
}

}


