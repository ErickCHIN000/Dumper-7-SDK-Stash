#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MapIconProxyActor.MapIconProxyActor_C
// (Actor)

class UClass* AMapIconProxyActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapIconProxyActor_C");

	return Clss;
}


// MapIconProxyActor_C MapIconProxyActor.Default__MapIconProxyActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMapIconProxyActor_C* AMapIconProxyActor_C::GetDefaultObj()
{
	static class AMapIconProxyActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMapIconProxyActor_C*>(AMapIconProxyActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


