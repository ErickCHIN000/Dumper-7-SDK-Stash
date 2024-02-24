#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SpellThrow_Snap.Action_SpellThrow_Snap_C
// (None)

class UClass* UAction_SpellThrow_Snap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SpellThrow_Snap_C");

	return Clss;
}


// Action_SpellThrow_Snap_C Action_SpellThrow_Snap.Default__Action_SpellThrow_Snap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SpellThrow_Snap_C* UAction_SpellThrow_Snap_C::GetDefaultObj()
{
	static class UAction_SpellThrow_Snap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SpellThrow_Snap_C*>(UAction_SpellThrow_Snap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_SpellThrow_Snap.Action_SpellThrow_Snap_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_SpellThrow_Snap_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Snap_C", "OnBegin");

	Params::UAction_SpellThrow_Snap_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_SpellThrow_Snap.Action_SpellThrow_Snap_C.ExecuteUbergraph_Action_SpellThrow_Snap
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_SpellThrow_Snap_C::ExecuteUbergraph_Action_SpellThrow_Snap(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Snap_C", "ExecuteUbergraph_Action_SpellThrow_Snap");

	Params::UAction_SpellThrow_Snap_C_ExecuteUbergraph_Action_SpellThrow_Snap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


