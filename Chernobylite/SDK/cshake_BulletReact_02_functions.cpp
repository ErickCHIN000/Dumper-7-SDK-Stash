#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass cshake_BulletReact_02.cshake_BulletReact_02_C
// (None)

class UClass* UCshake_BulletReact_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("cshake_BulletReact_02_C");

	return Clss;
}


// cshake_BulletReact_02_C cshake_BulletReact_02.Default__cshake_BulletReact_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCshake_BulletReact_02_C* UCshake_BulletReact_02_C::GetDefaultObj()
{
	static class UCshake_BulletReact_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCshake_BulletReact_02_C*>(UCshake_BulletReact_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


