#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeDefault01_MilkyProducts.AmberMaeDefault01_MilkyProducts_C
// (None)

class UClass* UAmberMaeDefault01_MilkyProducts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeDefault01_MilkyProducts_C");

	return Clss;
}


// AmberMaeDefault01_MilkyProducts_C AmberMaeDefault01_MilkyProducts.Default__AmberMaeDefault01_MilkyProducts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeDefault01_MilkyProducts_C* UAmberMaeDefault01_MilkyProducts_C::GetDefaultObj()
{
	static class UAmberMaeDefault01_MilkyProducts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeDefault01_MilkyProducts_C*>(UAmberMaeDefault01_MilkyProducts_C::StaticClass()->DefaultObject);

	return Default;
}

}


