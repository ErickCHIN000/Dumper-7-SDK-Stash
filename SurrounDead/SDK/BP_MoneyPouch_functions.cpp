#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MoneyPouch.BP_MoneyPouch_C
// (Actor)

class UClass* ABP_MoneyPouch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MoneyPouch_C");

	return Clss;
}


// BP_MoneyPouch_C BP_MoneyPouch.Default__BP_MoneyPouch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MoneyPouch_C* ABP_MoneyPouch_C::GetDefaultObj()
{
	static class ABP_MoneyPouch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MoneyPouch_C*>(ABP_MoneyPouch_C::StaticClass()->DefaultObject);

	return Default;
}

}


