#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MoneyTripleStack.BP_MoneyTripleStack_C
// (Actor)

class UClass* ABP_MoneyTripleStack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MoneyTripleStack_C");

	return Clss;
}


// BP_MoneyTripleStack_C BP_MoneyTripleStack.Default__BP_MoneyTripleStack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MoneyTripleStack_C* ABP_MoneyTripleStack_C::GetDefaultObj()
{
	static class ABP_MoneyTripleStack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MoneyTripleStack_C*>(ABP_MoneyTripleStack_C::StaticClass()->DefaultObject);

	return Default;
}

}


