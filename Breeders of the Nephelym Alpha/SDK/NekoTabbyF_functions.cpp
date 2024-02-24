#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NekoTabbyF.NekoTabbyF_C
// (None)

class UClass* UNekoTabbyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NekoTabbyF_C");

	return Clss;
}


// NekoTabbyF_C NekoTabbyF.Default__NekoTabbyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNekoTabbyF_C* UNekoTabbyF_C::GetDefaultObj()
{
	static class UNekoTabbyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNekoTabbyF_C*>(UNekoTabbyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


