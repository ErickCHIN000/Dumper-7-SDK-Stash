#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MoneySingleStack.BP_MoneySingleStack_C
// (Actor)

class UClass* ABP_MoneySingleStack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MoneySingleStack_C");

	return Clss;
}


// BP_MoneySingleStack_C BP_MoneySingleStack.Default__BP_MoneySingleStack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MoneySingleStack_C* ABP_MoneySingleStack_C::GetDefaultObj()
{
	static class ABP_MoneySingleStack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MoneySingleStack_C*>(ABP_MoneySingleStack_C::StaticClass()->DefaultObject);

	return Default;
}

}


