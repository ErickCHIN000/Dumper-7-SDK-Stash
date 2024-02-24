#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BallistazookaReloadStruggleShake.BallistazookaReloadStruggleShake_C
// (None)

class UClass* UBallistazookaReloadStruggleShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BallistazookaReloadStruggleShake_C");

	return Clss;
}


// BallistazookaReloadStruggleShake_C BallistazookaReloadStruggleShake.Default__BallistazookaReloadStruggleShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBallistazookaReloadStruggleShake_C* UBallistazookaReloadStruggleShake_C::GetDefaultObj()
{
	static class UBallistazookaReloadStruggleShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBallistazookaReloadStruggleShake_C*>(UBallistazookaReloadStruggleShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


