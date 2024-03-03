#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AntizeSave.BP_AntizeSave_C
// (None)

class UClass* UBP_AntizeSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AntizeSave_C");

	return Clss;
}


// BP_AntizeSave_C BP_AntizeSave.Default__BP_AntizeSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AntizeSave_C* UBP_AntizeSave_C::GetDefaultObj()
{
	static class UBP_AntizeSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AntizeSave_C*>(UBP_AntizeSave_C::StaticClass()->DefaultObject);

	return Default;
}

}


