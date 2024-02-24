#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReaperDefault01_RL.ReaperDefault01_RL_C
// (None)

class UClass* UReaperDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReaperDefault01_RL_C");

	return Clss;
}


// ReaperDefault01_RL_C ReaperDefault01_RL.Default__ReaperDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReaperDefault01_RL_C* UReaperDefault01_RL_C::GetDefaultObj()
{
	static class UReaperDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReaperDefault01_RL_C*>(UReaperDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


