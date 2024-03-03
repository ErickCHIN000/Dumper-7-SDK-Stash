#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_msl_identifier_component.bp_msl_identifier_component_C
// (None)

class UClass* Ubp_msl_identifier_component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_msl_identifier_component_C");

	return Clss;
}


// bp_msl_identifier_component_C bp_msl_identifier_component.Default__bp_msl_identifier_component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubp_msl_identifier_component_C* Ubp_msl_identifier_component_C::GetDefaultObj()
{
	static class Ubp_msl_identifier_component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubp_msl_identifier_component_C*>(Ubp_msl_identifier_component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.get_id
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Is_valid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Actor_unique_id                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_msl_identifier_component_C::Get_id(bool* Is_valid, class FName* Actor_unique_id, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "get_id");

	Params::Ubp_msl_identifier_component_C_Get_id_Params Parms{};

	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_valid != nullptr)
		*Is_valid = Parms.Is_valid;

	if (Actor_unique_id != nullptr)
		*Actor_unique_id = Parms.Actor_unique_id;

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.random_id
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Output_id                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Local_string_data                                                (Edit, BlueprintVisible)
// class FString                      CallFunc_ToLower_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ReferenceParm)

class FName Ubp_msl_identifier_component_C::Random_id(const class FString& Output_id, const TArray<class FString>& Local_string_data, const class FString& CallFunc_ToLower_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "random_id");

	Params::Ubp_msl_identifier_component_C_Random_id_Params Parms{};

	Parms.Output_id = Output_id;
	Parms.Local_string_data = Local_string_data;
	Parms.CallFunc_ToLower_ReturnValue = CallFunc_ToLower_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.compare_id
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Actor_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_exist                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_msl_identifier_component_C::Compare_id(class FName Actor_id, bool* Is_exist, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "compare_id");

	Params::Ubp_msl_identifier_component_C_Compare_id_Params Parms{};

	Parms.Actor_id = Actor_id;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_exist != nullptr)
		*Is_exist = Parms.Is_exist;

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.set_id
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        New_id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Random_if_exist                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Actor_id                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_random                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_id                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_random_id_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_compare_id_is_exist                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_msl_identifier_component_C::Set_id(class FName New_id, bool Random_if_exist, class FName* Actor_id, bool* Success, bool Local_random, class FName Local_id, class FName CallFunc_random_id_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_compare_id_is_exist, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "set_id");

	Params::Ubp_msl_identifier_component_C_Set_id_Params Parms{};

	Parms.New_id = New_id;
	Parms.Random_if_exist = Random_if_exist;
	Parms.Local_random = Local_random;
	Parms.Local_id = Local_id;
	Parms.CallFunc_random_id_ReturnValue = CallFunc_random_id_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_compare_id_is_exist = CallFunc_compare_id_is_exist;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Actor_id != nullptr)
		*Actor_id = Parms.Actor_id;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.call_ed_save
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubp_msl_identifier_component_C::Call_ed_save()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "call_ed_save");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.call_ed_load
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubp_msl_identifier_component_C::Call_ed_load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "call_ed_load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.call_ed_begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_loaded_savefile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_msl_identifier_component_C::Call_ed_begin(bool Is_loaded_savefile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "call_ed_begin");

	Params::Ubp_msl_identifier_component_C_Call_ed_begin_Params Parms{};

	Parms.Is_loaded_savefile = Is_loaded_savefile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.call_ed_load_spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_destroyed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_msl_identifier_component_C::Call_ed_load_spawn(bool Is_destroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "call_ed_load_spawn");

	Params::Ubp_msl_identifier_component_C_Call_ed_load_spawn_Params Parms{};

	Parms.Is_destroyed = Is_destroyed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.ExecuteUbergraph_bp_msl_identifier_component
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_is_destroyed                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_set_id_actor_id                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_set_id_success                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_is_loaded_savefile                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_set_id_actor_id_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_set_id_success_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_msl_identifier_component_C::ExecuteUbergraph_bp_msl_identifier_component(int32 EntryPoint, bool K2Node_CustomEvent_is_destroyed, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_set_id_actor_id, bool CallFunc_set_id_success, bool K2Node_CustomEvent_is_loaded_savefile, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_set_id_actor_id_1, bool CallFunc_set_id_success_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "ExecuteUbergraph_bp_msl_identifier_component");

	Params::Ubp_msl_identifier_component_C_ExecuteUbergraph_bp_msl_identifier_component_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_is_destroyed = K2Node_CustomEvent_is_destroyed;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_set_id_actor_id = CallFunc_set_id_actor_id;
	Parms.CallFunc_set_id_success = CallFunc_set_id_success;
	Parms.K2Node_CustomEvent_is_loaded_savefile = K2Node_CustomEvent_is_loaded_savefile;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_set_id_actor_id_1 = CallFunc_set_id_actor_id_1;
	Parms.CallFunc_set_id_success_1 = CallFunc_set_id_success_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.ed_loadspawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_destroyed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_msl_identifier_component_C::Ed_loadspawn__DelegateSignature(bool Is_destroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "ed_loadspawn__DelegateSignature");

	Params::Ubp_msl_identifier_component_C_Ed_loadspawn__DelegateSignature_Params Parms{};

	Parms.Is_destroyed = Is_destroyed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.ed_begingame__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_msl_identifier_component_C::Ed_begingame__DelegateSignature(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "ed_begingame__DelegateSignature");

	Params::Ubp_msl_identifier_component_C_Ed_begingame__DelegateSignature_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.ed_loadgame__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubp_msl_identifier_component_C::Ed_loadgame__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "ed_loadgame__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_msl_identifier_component.bp_msl_identifier_component_C.ed_savegame__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubp_msl_identifier_component_C::Ed_savegame__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_msl_identifier_component_C", "ed_savegame__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


