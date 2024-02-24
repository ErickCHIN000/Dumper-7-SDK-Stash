#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EchoLog.BP_EchoLog_C
// (Actor)

class UClass* ABP_EchoLog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EchoLog_C");

	return Clss;
}


// BP_EchoLog_C BP_EchoLog.Default__BP_EchoLog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EchoLog_C* ABP_EchoLog_C::GetDefaultObj()
{
	static class ABP_EchoLog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EchoLog_C*>(ABP_EchoLog_C::StaticClass()->DefaultObject);

	return Default;
}

}


