#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HomemadeCrowbar.BP_HomemadeCrowbar_C
// (Actor)

class UClass* ABP_HomemadeCrowbar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HomemadeCrowbar_C");

	return Clss;
}


// BP_HomemadeCrowbar_C BP_HomemadeCrowbar.Default__BP_HomemadeCrowbar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HomemadeCrowbar_C* ABP_HomemadeCrowbar_C::GetDefaultObj()
{
	static class ABP_HomemadeCrowbar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HomemadeCrowbar_C*>(ABP_HomemadeCrowbar_C::StaticClass()->DefaultObject);

	return Default;
}

}


