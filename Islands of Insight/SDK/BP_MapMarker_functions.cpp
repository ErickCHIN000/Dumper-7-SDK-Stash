#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapMarker.BP_MapMarker_C
// (Actor)

class UClass* ABP_MapMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapMarker_C");

	return Clss;
}


// BP_MapMarker_C BP_MapMarker.Default__BP_MapMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapMarker_C* ABP_MapMarker_C::GetDefaultObj()
{
	static class ABP_MapMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapMarker_C*>(ABP_MapMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapMarker.BP_MapMarker_C.Spawn Orb Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_MapMarker_C::Spawn_Orb_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapMarker_C", "Spawn Orb Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapMarker.BP_MapMarker_C.Spawn Orb Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_MapMarker_C::Spawn_Orb_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapMarker_C", "Spawn Orb Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapMarker.BP_MapMarker_C.Spawn Beam Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_MapMarker_C::Spawn_Beam_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapMarker_C", "Spawn Beam Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapMarker.BP_MapMarker_C.Spawn Beam Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_MapMarker_C::Spawn_Beam_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapMarker_C", "Spawn Beam Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapMarker.BP_MapMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MapMarker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapMarker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapMarker.BP_MapMarker_C.ExecuteUbergraph_BP_MapMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapMarker_C::ExecuteUbergraph_BP_MapMarker(int32 EntryPoint, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapMarker_C", "ExecuteUbergraph_BP_MapMarker");

	Params::ABP_MapMarker_C_ExecuteUbergraph_BP_MapMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


