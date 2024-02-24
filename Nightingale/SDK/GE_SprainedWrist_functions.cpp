#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SprainedWrist.GE_SprainedWrist_C
// (None)

class UClass* UGE_SprainedWrist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SprainedWrist_C");

	return Clss;
}


// GE_SprainedWrist_C GE_SprainedWrist.Default__GE_SprainedWrist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SprainedWrist_C* UGE_SprainedWrist_C::GetDefaultObj()
{
	static class UGE_SprainedWrist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SprainedWrist_C*>(UGE_SprainedWrist_C::StaticClass()->DefaultObject);

	return Default;
}

}


