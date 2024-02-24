#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NekoTabbyT.NekoTabbyT_C
// (None)

class UClass* UNekoTabbyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NekoTabbyT_C");

	return Clss;
}


// NekoTabbyT_C NekoTabbyT.Default__NekoTabbyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNekoTabbyT_C* UNekoTabbyT_C::GetDefaultObj()
{
	static class UNekoTabbyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNekoTabbyT_C*>(UNekoTabbyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


