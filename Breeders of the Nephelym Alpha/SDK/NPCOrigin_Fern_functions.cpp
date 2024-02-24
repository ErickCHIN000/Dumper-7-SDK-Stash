#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPCOrigin_Fern.NPCOrigin_Fern_C
// (Actor)

class UClass* ANPCOrigin_Fern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPCOrigin_Fern_C");

	return Clss;
}


// NPCOrigin_Fern_C NPCOrigin_Fern.Default__NPCOrigin_Fern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPCOrigin_Fern_C* ANPCOrigin_Fern_C::GetDefaultObj()
{
	static class ANPCOrigin_Fern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPCOrigin_Fern_C*>(ANPCOrigin_Fern_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPCOrigin_Fern.NPCOrigin_Fern_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void ANPCOrigin_Fern_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCOrigin_Fern_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCOrigin_Fern.NPCOrigin_Fern_C.OnSetWorldState
// (Event, Public, BlueprintEvent)
// Parameters:

void ANPCOrigin_Fern_C::OnSetWorldState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCOrigin_Fern_C", "OnSetWorldState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCOrigin_Fern.NPCOrigin_Fern_C.ExecuteUbergraph_NPCOrigin_Fern
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditions                 K2Node_MakeStruct_Conditions                                     (None)
// bool                               CallFunc_CheckGameFlags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConditions                 K2Node_MakeStruct_Conditions_1                                   (None)
// bool                               CallFunc_CheckGameFlags_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPCOrigin_Fern_C::ExecuteUbergraph_NPCOrigin_Fern(int32 EntryPoint, const struct FConditions& K2Node_MakeStruct_Conditions, bool CallFunc_CheckGameFlags_ReturnValue, const struct FConditions& K2Node_MakeStruct_Conditions_1, bool CallFunc_CheckGameFlags_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_2, bool CallFunc_K2_SetActorLocation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCOrigin_Fern_C", "ExecuteUbergraph_NPCOrigin_Fern");

	Params::ANPCOrigin_Fern_C_ExecuteUbergraph_NPCOrigin_Fern_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Conditions = K2Node_MakeStruct_Conditions;
	Parms.CallFunc_CheckGameFlags_ReturnValue = CallFunc_CheckGameFlags_ReturnValue;
	Parms.K2Node_MakeStruct_Conditions_1 = K2Node_MakeStruct_Conditions_1;
	Parms.CallFunc_CheckGameFlags_ReturnValue_1 = CallFunc_CheckGameFlags_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_1 = CallFunc_K2_SetActorLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_1 = CallFunc_K2_SetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_2 = CallFunc_K2_SetActorLocation_SweepHitResult_2;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_2 = CallFunc_K2_SetActorLocation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


