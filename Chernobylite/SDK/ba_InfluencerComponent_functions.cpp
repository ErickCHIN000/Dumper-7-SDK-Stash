#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_InfluencerComponent.ba_InfluencerComponent_C
// (Actor)

class UClass* Aba_InfluencerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_InfluencerComponent_C");

	return Clss;
}


// ba_InfluencerComponent_C ba_InfluencerComponent.Default__ba_InfluencerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_InfluencerComponent_C* Aba_InfluencerComponent_C::GetDefaultObj()
{
	static class Aba_InfluencerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_InfluencerComponent_C*>(Aba_InfluencerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_InfluencerComponent.ba_InfluencerComponent_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> Aba_InfluencerComponent_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InfluencerComponent_C", "GetObjectsToSave");

	Params::Aba_InfluencerComponent_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InfluencerComponent.ba_InfluencerComponent_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_InfluencerComponent_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InfluencerComponent_C", "HasObjectsToSave");

	Params::Aba_InfluencerComponent_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InfluencerComponent.ba_InfluencerComponent_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_InfluencerComponent_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InfluencerComponent_C", "ShouldUpdateOverlapsOnLoad");

	Params::Aba_InfluencerComponent_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InfluencerComponent.ba_InfluencerComponent_C.GetisInfluencingActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Output_Get                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InfluencerComponent_C::GetisInfluencingActive(bool* Output_Get)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InfluencerComponent_C", "GetisInfluencingActive");

	Params::Aba_InfluencerComponent_C_GetisInfluencingActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

}


// Function ba_InfluencerComponent.ba_InfluencerComponent_C.ToggleIsInfluencingActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInfluencingactive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DidChange                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_ForgetRecipe_OutSomethingDeleted                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InfluencerComponent_C::ToggleIsInfluencingActive(bool IsInfluencingactive, bool DidChange, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_ForgetRecipe_OutSomethingDeleted, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InfluencerComponent_C", "ToggleIsInfluencingActive");

	Params::Aba_InfluencerComponent_C_ToggleIsInfluencingActive_Params Parms{};

	Parms.IsInfluencingactive = IsInfluencingactive;
	Parms.DidChange = DidChange;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ForgetRecipe_OutSomethingDeleted = CallFunc_ForgetRecipe_OutSomethingDeleted;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InfluencerComponent.ba_InfluencerComponent_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_InfluencerComponent_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InfluencerComponent_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InfluencerComponent.ba_InfluencerComponent_C.PrepareDataForSave
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_InfluencerComponent_C::PrepareDataForSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InfluencerComponent_C", "PrepareDataForSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InfluencerComponent.ba_InfluencerComponent_C.ExecuteUbergraph_ba_InfluencerComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InfluencerComponent_C::ExecuteUbergraph_ba_InfluencerComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InfluencerComponent_C", "ExecuteUbergraph_ba_InfluencerComponent");

	Params::Aba_InfluencerComponent_C_ExecuteUbergraph_ba_InfluencerComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


