#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MoneySingleStack_OW.BP_MoneySingleStack_OW_C
// (Actor)

class UClass* ABP_MoneySingleStack_OW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MoneySingleStack_OW_C");

	return Clss;
}


// BP_MoneySingleStack_OW_C BP_MoneySingleStack_OW.Default__BP_MoneySingleStack_OW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MoneySingleStack_OW_C* ABP_MoneySingleStack_OW_C::GetDefaultObj()
{
	static class ABP_MoneySingleStack_OW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MoneySingleStack_OW_C*>(ABP_MoneySingleStack_OW_C::StaticClass()->DefaultObject);

	return Default;
}

}


