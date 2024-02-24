#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_Necromancer_Lichform.BP_CE_Necromancer_Lichform_C
// (None)

class UClass* UBP_CE_Necromancer_Lichform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_Necromancer_Lichform_C");

	return Clss;
}


// BP_CE_Necromancer_Lichform_C BP_CE_Necromancer_Lichform.Default__BP_CE_Necromancer_Lichform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_Necromancer_Lichform_C* UBP_CE_Necromancer_Lichform_C::GetDefaultObj()
{
	static class UBP_CE_Necromancer_Lichform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_Necromancer_Lichform_C*>(UBP_CE_Necromancer_Lichform_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CE_Necromancer_Lichform.BP_CE_Necromancer_Lichform_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_Necromancer_Lichform_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_Necromancer_Lichform_C", "OnBegin");

	Params::UBP_CE_Necromancer_Lichform_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_Necromancer_Lichform.BP_CE_Necromancer_Lichform_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_Necromancer_Lichform_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_Necromancer_Lichform_C", "OnEnd");

	Params::UBP_CE_Necromancer_Lichform_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_Necromancer_Lichform.BP_CE_Necromancer_Lichform_C.ExecuteUbergraph_BP_CE_Necromancer_Lichform
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_Necromancer_Lichform_C::ExecuteUbergraph_BP_CE_Necromancer_Lichform(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* K2Node_Event_Actor1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_Necromancer_Lichform_C", "ExecuteUbergraph_BP_CE_Necromancer_Lichform");

	Params::UBP_CE_Necromancer_Lichform_C_ExecuteUbergraph_BP_CE_Necromancer_Lichform_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;

	UObject::ProcessEvent(Func, &Parms);

}

}


