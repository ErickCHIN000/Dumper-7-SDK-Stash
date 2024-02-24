#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass cshake_BulletReact_01.cshake_BulletReact_01_C
// (None)

class UClass* UCshake_BulletReact_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("cshake_BulletReact_01_C");

	return Clss;
}


// cshake_BulletReact_01_C cshake_BulletReact_01.Default__cshake_BulletReact_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCshake_BulletReact_01_C* UCshake_BulletReact_01_C::GetDefaultObj()
{
	static class UCshake_BulletReact_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCshake_BulletReact_01_C*>(UCshake_BulletReact_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


