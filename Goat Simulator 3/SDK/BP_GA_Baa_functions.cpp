#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GA_Baa.BP_GA_Baa_C
// (None)

class UClass* UBP_GA_Baa_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GA_Baa_C");

	return Clss;
}


// BP_GA_Baa_C BP_GA_Baa.Default__BP_GA_Baa_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GA_Baa_C* UBP_GA_Baa_C::GetDefaultObj()
{
	static class UBP_GA_Baa_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GA_Baa_C*>(UBP_GA_Baa_C::StaticClass()->DefaultObject);

	return Default;
}

}


