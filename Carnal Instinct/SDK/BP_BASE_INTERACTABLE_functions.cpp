#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BASE_INTERACTABLE.BP_BASE_INTERACTABLE_C
// (Actor)

class UClass* ABP_BASE_INTERACTABLE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BASE_INTERACTABLE_C");

	return Clss;
}


// BP_BASE_INTERACTABLE_C BP_BASE_INTERACTABLE.Default__BP_BASE_INTERACTABLE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BASE_INTERACTABLE_C* ABP_BASE_INTERACTABLE_C::GetDefaultObj()
{
	static class ABP_BASE_INTERACTABLE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BASE_INTERACTABLE_C*>(ABP_BASE_INTERACTABLE_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BASE_INTERACTABLE.BP_BASE_INTERACTABLE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BASE_INTERACTABLE_C::UserConstructionScript(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_INTERACTABLE_C", "UserConstructionScript");

	Params::ABP_BASE_INTERACTABLE_C_UserConstructionScript_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BASE_INTERACTABLE.BP_BASE_INTERACTABLE_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BASE_INTERACTABLE_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_INTERACTABLE_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BASE_INTERACTABLE.BP_BASE_INTERACTABLE_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BASE_INTERACTABLE_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_INTERACTABLE_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BASE_INTERACTABLE.BP_BASE_INTERACTABLE_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BASE_INTERACTABLE_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_INTERACTABLE_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BASE_INTERACTABLE.BP_BASE_INTERACTABLE_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BASE_INTERACTABLE_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_INTERACTABLE_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BASE_INTERACTABLE.BP_BASE_INTERACTABLE_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BASE_INTERACTABLE_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_INTERACTABLE_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BASE_INTERACTABLE.BP_BASE_INTERACTABLE_C.ExecuteUbergraph_BP_BASE_INTERACTABLE
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class UPrimitiveComponent*>   K2Node_MakeSet_Set                                               (ContainsInstancedReference)

void ABP_BASE_INTERACTABLE_C::ExecuteUbergraph_BP_BASE_INTERACTABLE(int32 EntryPoint, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_INTERACTABLE_C", "ExecuteUbergraph_BP_BASE_INTERACTABLE");

	Params::ABP_BASE_INTERACTABLE_C_ExecuteUbergraph_BP_BASE_INTERACTABLE_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;

	UObject::ProcessEvent(Func, &Parms);

}

}


