#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MoneyTripleStack_OW.BP_MoneyTripleStack_OW_C
// (Actor)

class UClass* ABP_MoneyTripleStack_OW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MoneyTripleStack_OW_C");

	return Clss;
}


// BP_MoneyTripleStack_OW_C BP_MoneyTripleStack_OW.Default__BP_MoneyTripleStack_OW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MoneyTripleStack_OW_C* ABP_MoneyTripleStack_OW_C::GetDefaultObj()
{
	static class ABP_MoneyTripleStack_OW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MoneyTripleStack_OW_C*>(ABP_MoneyTripleStack_OW_C::StaticClass()->DefaultObject);

	return Default;
}

}


