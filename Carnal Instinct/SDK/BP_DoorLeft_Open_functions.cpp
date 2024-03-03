#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DoorLeft_Open.BP_DoorLeft_Open_C
// (Actor)

class UClass* ABP_DoorLeft_Open_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DoorLeft_Open_C");

	return Clss;
}


// BP_DoorLeft_Open_C BP_DoorLeft_Open.Default__BP_DoorLeft_Open_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DoorLeft_Open_C* ABP_DoorLeft_Open_C::GetDefaultObj()
{
	static class ABP_DoorLeft_Open_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DoorLeft_Open_C*>(ABP_DoorLeft_Open_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DoorLeft_Open.BP_DoorLeft_Open_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DoorLeft_Open_C::UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DoorLeft_Open_C", "UserConstructionScript");

	Params::ABP_DoorLeft_Open_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


