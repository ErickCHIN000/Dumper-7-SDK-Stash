#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiLapDanceT.ParvatiLapDanceT_C
// (None)

class UClass* UParvatiLapDanceT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiLapDanceT_C");

	return Clss;
}


// ParvatiLapDanceT_C ParvatiLapDanceT.Default__ParvatiLapDanceT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiLapDanceT_C* UParvatiLapDanceT_C::GetDefaultObj()
{
	static class UParvatiLapDanceT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiLapDanceT_C*>(UParvatiLapDanceT_C::StaticClass()->DefaultObject);

	return Default;
}

}


