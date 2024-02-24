#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReaperDefault01.ReaperDefault01_C
// (None)

class UClass* UReaperDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReaperDefault01_C");

	return Clss;
}


// ReaperDefault01_C ReaperDefault01.Default__ReaperDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReaperDefault01_C* UReaperDefault01_C::GetDefaultObj()
{
	static class UReaperDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReaperDefault01_C*>(UReaperDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


