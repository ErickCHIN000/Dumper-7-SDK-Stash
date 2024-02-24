#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ProjectionInterface_Spectator.W_ProjectionInterface_Spectator_C
// (None)

class UClass* UW_ProjectionInterface_Spectator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ProjectionInterface_Spectator_C");

	return Clss;
}


// W_ProjectionInterface_Spectator_C W_ProjectionInterface_Spectator.Default__W_ProjectionInterface_Spectator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ProjectionInterface_Spectator_C* UW_ProjectionInterface_Spectator_C::GetDefaultObj()
{
	static class UW_ProjectionInterface_Spectator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ProjectionInterface_Spectator_C*>(UW_ProjectionInterface_Spectator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ProjectionInterface_Spectator.W_ProjectionInterface_Spectator_C.ProjectionApproved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_UIProjectionComponent_C* Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_ProjectionInterface_Spectator_C::ProjectionApproved(class UBP_UIProjectionComponent_C* Component, bool CallFunc_Set_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionInterface_Spectator_C", "ProjectionApproved");

	Params::UW_ProjectionInterface_Spectator_C_ProjectionApproved_Params Parms{};

	Parms.Component = Component;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


