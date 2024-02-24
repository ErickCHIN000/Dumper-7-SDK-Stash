#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HYP_Shield_Basic.BP_HYP_Shield_Basic_C
// (None)

class UClass* UBP_HYP_Shield_Basic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HYP_Shield_Basic_C");

	return Clss;
}


// BP_HYP_Shield_Basic_C BP_HYP_Shield_Basic.Default__BP_HYP_Shield_Basic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HYP_Shield_Basic_C* UBP_HYP_Shield_Basic_C::GetDefaultObj()
{
	static class UBP_HYP_Shield_Basic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HYP_Shield_Basic_C*>(UBP_HYP_Shield_Basic_C::StaticClass()->DefaultObject);

	return Default;
}

}


