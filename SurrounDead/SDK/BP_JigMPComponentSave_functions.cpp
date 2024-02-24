#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_JigMPComponentSave.BP_JigMPComponentSave_C
// (None)

class UClass* UBP_JigMPComponentSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_JigMPComponentSave_C");

	return Clss;
}


// BP_JigMPComponentSave_C BP_JigMPComponentSave.Default__BP_JigMPComponentSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_JigMPComponentSave_C* UBP_JigMPComponentSave_C::GetDefaultObj()
{
	static class UBP_JigMPComponentSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_JigMPComponentSave_C*>(UBP_JigMPComponentSave_C::StaticClass()->DefaultObject);

	return Default;
}

}


