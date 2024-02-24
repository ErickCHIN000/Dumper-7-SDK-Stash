#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThanksPing.BP_ThanksPing_C
// (Actor)

class UClass* ABP_ThanksPing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThanksPing_C");

	return Clss;
}


// BP_ThanksPing_C BP_ThanksPing.Default__BP_ThanksPing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThanksPing_C* ABP_ThanksPing_C::GetDefaultObj()
{
	static class ABP_ThanksPing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThanksPing_C*>(ABP_ThanksPing_C::StaticClass()->DefaultObject);

	return Default;
}

}


