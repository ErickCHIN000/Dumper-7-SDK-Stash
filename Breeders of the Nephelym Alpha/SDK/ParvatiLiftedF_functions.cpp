#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiLiftedF.ParvatiLiftedF_C
// (None)

class UClass* UParvatiLiftedF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiLiftedF_C");

	return Clss;
}


// ParvatiLiftedF_C ParvatiLiftedF.Default__ParvatiLiftedF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiLiftedF_C* UParvatiLiftedF_C::GetDefaultObj()
{
	static class UParvatiLiftedF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiLiftedF_C*>(UParvatiLiftedF_C::StaticClass()->DefaultObject);

	return Default;
}

}


