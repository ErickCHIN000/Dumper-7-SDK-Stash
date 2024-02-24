#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HYP_Shield_Reflect.BP_HYP_Shield_Reflect_C
// (None)

class UClass* UBP_HYP_Shield_Reflect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HYP_Shield_Reflect_C");

	return Clss;
}


// BP_HYP_Shield_Reflect_C BP_HYP_Shield_Reflect.Default__BP_HYP_Shield_Reflect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HYP_Shield_Reflect_C* UBP_HYP_Shield_Reflect_C::GetDefaultObj()
{
	static class UBP_HYP_Shield_Reflect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HYP_Shield_Reflect_C*>(UBP_HYP_Shield_Reflect_C::StaticClass()->DefaultObject);

	return Default;
}

}


