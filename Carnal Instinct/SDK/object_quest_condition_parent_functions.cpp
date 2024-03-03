#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass object_quest_condition_parent.object_quest_condition_parent_C
// (Actor)

class UClass* AObject_quest_condition_parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("object_quest_condition_parent_C");

	return Clss;
}


// object_quest_condition_parent_C object_quest_condition_parent.Default__object_quest_condition_parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AObject_quest_condition_parent_C* AObject_quest_condition_parent_C::GetDefaultObj()
{
	static class AObject_quest_condition_parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AObject_quest_condition_parent_C*>(AObject_quest_condition_parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function object_quest_condition_parent.object_quest_condition_parent_C.quest_result_condition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_quest_result             Quest_result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_quest_result             Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)

void AObject_quest_condition_parent_C::Quest_result_condition(const struct FS_quest_result& Quest_result, struct FS_quest_result* Return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_quest_condition_parent_C", "quest_result_condition");

	Params::AObject_quest_condition_parent_C_Quest_result_condition_Params Parms{};

	Parms.Quest_result = Quest_result;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function object_quest_condition_parent.object_quest_condition_parent_C.objective_result_condition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_quest_objective_result   Objective_result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_quest_objective_result   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)

void AObject_quest_condition_parent_C::Objective_result_condition(const struct FS_quest_objective_result& Objective_result, struct FS_quest_objective_result* Return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_quest_condition_parent_C", "objective_result_condition");

	Params::AObject_quest_condition_parent_C_Objective_result_condition_Params Parms{};

	Parms.Objective_result = Objective_result;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function object_quest_condition_parent.object_quest_condition_parent_C.objective_data_condition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_quest_objective_data     Objective_data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_quest_objective_data     Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)

void AObject_quest_condition_parent_C::Objective_data_condition(const struct FS_quest_objective_data& Objective_data, struct FS_quest_objective_data* Return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_quest_condition_parent_C", "objective_data_condition");

	Params::AObject_quest_condition_parent_C_Objective_data_condition_Params Parms{};

	Parms.Objective_data = Objective_data;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function object_quest_condition_parent.object_quest_condition_parent_C.quest_data_condition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_quest_data               Quest_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_quest_data               Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)

void AObject_quest_condition_parent_C::Quest_data_condition(const struct FS_quest_data& Quest_data, struct FS_quest_data* Return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_quest_condition_parent_C", "quest_data_condition");

	Params::AObject_quest_condition_parent_C_Quest_data_condition_Params Parms{};

	Parms.Quest_data = Quest_data;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function object_quest_condition_parent.object_quest_condition_parent_C.init_condition_object
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Instigator_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Sub_objective_id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_condition          Condition_info                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AObject_quest_condition_parent_C*Quest_condition                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AObject_quest_condition_parent_C::Init_condition_object(class Abp_quest_actor_C* Quest_actor, class FName Instigator_id, class FName Objective_id, class FName Sub_objective_id, const struct FS_quest_condition& Condition_info, class AObject_quest_condition_parent_C** Quest_condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_quest_condition_parent_C", "init_condition_object");

	Params::AObject_quest_condition_parent_C_Init_condition_object_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Instigator_id = Instigator_id;
	Parms.Objective_id = Objective_id;
	Parms.Sub_objective_id = Sub_objective_id;
	Parms.Condition_info = Condition_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Quest_condition != nullptr)
		*Quest_condition = Parms.Quest_condition;

}


// Function object_quest_condition_parent.object_quest_condition_parent_C.ExecuteUbergraph_object_quest_condition_parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AObject_quest_condition_parent_C::ExecuteUbergraph_object_quest_condition_parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_quest_condition_parent_C", "ExecuteUbergraph_object_quest_condition_parent");

	Params::AObject_quest_condition_parent_C_ExecuteUbergraph_object_quest_condition_parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


