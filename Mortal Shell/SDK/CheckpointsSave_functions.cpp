#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheckpointsSave.CheckpointsSave_C
// (None)

class UClass* UCheckpointsSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckpointsSave_C");

	return Clss;
}


// CheckpointsSave_C CheckpointsSave.Default__CheckpointsSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheckpointsSave_C* UCheckpointsSave_C::GetDefaultObj()
{
	static class UCheckpointsSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckpointsSave_C*>(UCheckpointsSave_C::StaticClass()->DefaultObject);

	return Default;
}

}


