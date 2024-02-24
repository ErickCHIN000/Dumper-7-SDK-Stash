#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalHUDComponent.ArsenalHUDComponent_C
// (None)

class UClass* UArsenalHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalHUDComponent_C");

	return Clss;
}


// ArsenalHUDComponent_C ArsenalHUDComponent.Default__ArsenalHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalHUDComponent_C* UArsenalHUDComponent_C::GetDefaultObj()
{
	static class UArsenalHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalHUDComponent_C*>(UArsenalHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalHUDComponent.ArsenalHUDComponent_C.UpdatePlayerHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalHUDComponent_C::UpdatePlayerHUD(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUDComponent_C", "UpdatePlayerHUD");

	Params::UArsenalHUDComponent_C_UpdatePlayerHUD_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalHUDComponent.ArsenalHUDComponent_C.ExecuteUbergraph_ArsenalHUDComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalHUDComponent_C::ExecuteUbergraph_ArsenalHUDComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalHUDComponent_C", "ExecuteUbergraph_ArsenalHUDComponent");

	Params::UArsenalHUDComponent_C_ExecuteUbergraph_ArsenalHUDComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


