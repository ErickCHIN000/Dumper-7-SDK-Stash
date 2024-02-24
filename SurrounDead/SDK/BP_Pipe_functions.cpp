#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pipe.BP_Pipe_C
// (Actor)

class UClass* ABP_Pipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pipe_C");

	return Clss;
}


// BP_Pipe_C BP_Pipe.Default__BP_Pipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pipe_C* ABP_Pipe_C::GetDefaultObj()
{
	static class ABP_Pipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pipe_C*>(ABP_Pipe_C::StaticClass()->DefaultObject);

	return Default;
}

}


