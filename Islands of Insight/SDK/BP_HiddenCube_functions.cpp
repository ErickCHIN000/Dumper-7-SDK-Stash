#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HiddenCube.BP_HiddenCube_C
// (Actor)

class UClass* ABP_HiddenCube_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HiddenCube_C");

	return Clss;
}


// BP_HiddenCube_C BP_HiddenCube.Default__BP_HiddenCube_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HiddenCube_C* ABP_HiddenCube_C::GetDefaultObj()
{
	static class ABP_HiddenCube_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HiddenCube_C*>(ABP_HiddenCube_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HiddenCube.BP_HiddenCube_C.NotifyPlayerTouched
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HiddenCube_C::NotifyPlayerTouched(const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HiddenCube_C", "NotifyPlayerTouched");

	Params::ABP_HiddenCube_C_NotifyPlayerTouched_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HiddenCube.BP_HiddenCube_C.RevealCurve__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_HiddenCube_C::RevealCurve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HiddenCube_C", "RevealCurve__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HiddenCube.BP_HiddenCube_C.RevealCurve__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_HiddenCube_C::RevealCurve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HiddenCube_C", "RevealCurve__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HiddenCube.BP_HiddenCube_C.Reveal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_HiddenCube_C::Reveal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HiddenCube_C", "Reveal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HiddenCube.BP_HiddenCube_C.BP_OnSolved_Client
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_HiddenCube_C::BP_OnSolved_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HiddenCube_C", "BP_OnSolved_Client");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HiddenCube.BP_HiddenCube_C.BPI_PlayBumpEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_HiddenCube_C::BPI_PlayBumpEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HiddenCube_C", "BPI_PlayBumpEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HiddenCube.BP_HiddenCube_C.ExecuteUbergraph_BP_HiddenCube
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetSolverTeam_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HiddenCube_C::ExecuteUbergraph_BP_HiddenCube(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, uint8 CallFunc_GetSolverTeam_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HiddenCube_C", "ExecuteUbergraph_BP_HiddenCube");

	Params::ABP_HiddenCube_C_ExecuteUbergraph_BP_HiddenCube_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSolverTeam_ReturnValue = CallFunc_GetSolverTeam_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue_1 = CallFunc_Conv_LinearColorToVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


