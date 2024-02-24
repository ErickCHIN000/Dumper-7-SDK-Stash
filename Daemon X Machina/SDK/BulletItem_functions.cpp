#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletItem.BulletItem_C
// (Actor)

class UClass* ABulletItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletItem_C");

	return Clss;
}


// BulletItem_C BulletItem.Default__BulletItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABulletItem_C* ABulletItem_C::GetDefaultObj()
{
	static class ABulletItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABulletItem_C*>(ABulletItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BulletItem.BulletItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABulletItem_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BulletItem_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


