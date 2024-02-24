#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterAIBase.BP_MasterAIBase_C
// (Actor)

class UClass* ABP_MasterAIBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterAIBase_C");

	return Clss;
}


// BP_MasterAIBase_C BP_MasterAIBase.Default__BP_MasterAIBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterAIBase_C* ABP_MasterAIBase_C::GetDefaultObj()
{
	static class ABP_MasterAIBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterAIBase_C*>(ABP_MasterAIBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterAIBase.BP_MasterAIBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterAIBase_C::UserConstructionScript(float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterAIBase_C", "UserConstructionScript");

	Params::ABP_MasterAIBase_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast = CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


