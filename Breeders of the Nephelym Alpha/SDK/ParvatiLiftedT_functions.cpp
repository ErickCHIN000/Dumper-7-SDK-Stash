#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiLiftedT.ParvatiLiftedT_C
// (None)

class UClass* UParvatiLiftedT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiLiftedT_C");

	return Clss;
}


// ParvatiLiftedT_C ParvatiLiftedT.Default__ParvatiLiftedT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiLiftedT_C* UParvatiLiftedT_C::GetDefaultObj()
{
	static class UParvatiLiftedT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiLiftedT_C*>(UParvatiLiftedT_C::StaticClass()->DefaultObject);

	return Default;
}

}


