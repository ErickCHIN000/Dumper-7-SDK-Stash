#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VA_Siren.BP_VA_Siren_C
// (None)

class UClass* UBP_VA_Siren_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VA_Siren_C");

	return Clss;
}


// BP_VA_Siren_C BP_VA_Siren.Default__BP_VA_Siren_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VA_Siren_C* UBP_VA_Siren_C::GetDefaultObj()
{
	static class UBP_VA_Siren_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VA_Siren_C*>(UBP_VA_Siren_C::StaticClass()->DefaultObject);

	return Default;
}

}


