#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Clipboard.BP_Clipboard_C
// (Actor)

class UClass* ABP_Clipboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Clipboard_C");

	return Clss;
}


// BP_Clipboard_C BP_Clipboard.Default__BP_Clipboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Clipboard_C* ABP_Clipboard_C::GetDefaultObj()
{
	static class ABP_Clipboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Clipboard_C*>(ABP_Clipboard_C::StaticClass()->DefaultObject);

	return Default;
}

}


