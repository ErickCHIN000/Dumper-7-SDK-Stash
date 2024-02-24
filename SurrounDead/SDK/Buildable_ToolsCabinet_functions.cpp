#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_ToolsCabinet.Buildable_ToolsCabinet_C
// (Actor)

class UClass* ABuildable_ToolsCabinet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_ToolsCabinet_C");

	return Clss;
}


// Buildable_ToolsCabinet_C Buildable_ToolsCabinet.Default__Buildable_ToolsCabinet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_ToolsCabinet_C* ABuildable_ToolsCabinet_C::GetDefaultObj()
{
	static class ABuildable_ToolsCabinet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_ToolsCabinet_C*>(ABuildable_ToolsCabinet_C::StaticClass()->DefaultObject);

	return Default;
}

}


