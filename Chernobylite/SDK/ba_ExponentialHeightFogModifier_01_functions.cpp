#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_ExponentialHeightFogModifier_01.ba_ExponentialHeightFogModifier_01_C
// (Actor)

class UClass* Aba_ExponentialHeightFogModifier_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_ExponentialHeightFogModifier_01_C");

	return Clss;
}


// ba_ExponentialHeightFogModifier_01_C ba_ExponentialHeightFogModifier_01.Default__ba_ExponentialHeightFogModifier_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_ExponentialHeightFogModifier_01_C* Aba_ExponentialHeightFogModifier_01_C::GetDefaultObj()
{
	static class Aba_ExponentialHeightFogModifier_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_ExponentialHeightFogModifier_01_C*>(Aba_ExponentialHeightFogModifier_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_ExponentialHeightFogModifier_01.ba_ExponentialHeightFogModifier_01_C.GetOriginalProperties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ExponentialHeightFogModifier_01_C::GetOriginalProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ExponentialHeightFogModifier_01_C", "GetOriginalProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ExponentialHeightFogModifier_01.ba_ExponentialHeightFogModifier_01_C.UpdateFog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta_Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NextProgress                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ExponentialHeightFogModifier_01_C::UpdateFog(float Delta_Time, float NextProgress, float DeltaTime, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ExponentialHeightFogModifier_01_C", "UpdateFog");

	Params::Aba_ExponentialHeightFogModifier_01_C_UpdateFog_Params Parms{};

	Parms.Delta_Time = Delta_Time;
	Parms.NextProgress = NextProgress;
	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_1 = CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_LinearColorLerp_ReturnValue_2 = CallFunc_LinearColorLerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ExponentialHeightFogModifier_01.ba_ExponentialHeightFogModifier_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_ExponentialHeightFogModifier_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ExponentialHeightFogModifier_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ExponentialHeightFogModifier_01.ba_ExponentialHeightFogModifier_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ExponentialHeightFogModifier_01_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ExponentialHeightFogModifier_01_C", "ReceiveTick");

	Params::Aba_ExponentialHeightFogModifier_01_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ExponentialHeightFogModifier_01.ba_ExponentialHeightFogModifier_01_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ExponentialHeightFogModifier_01_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ExponentialHeightFogModifier_01_C", "ReceiveActorBeginOverlap");

	Params::Aba_ExponentialHeightFogModifier_01_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ExponentialHeightFogModifier_01.ba_ExponentialHeightFogModifier_01_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ExponentialHeightFogModifier_01_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ExponentialHeightFogModifier_01_C", "ReceiveActorEndOverlap");

	Params::Aba_ExponentialHeightFogModifier_01_C_ReceiveActorEndOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ExponentialHeightFogModifier_01.ba_ExponentialHeightFogModifier_01_C.ManualStartModifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ExponentialHeightFogModifier_01_C::ManualStartModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ExponentialHeightFogModifier_01_C", "ManualStartModifier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ExponentialHeightFogModifier_01.ba_ExponentialHeightFogModifier_01_C.ManualDisableMOdifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ExponentialHeightFogModifier_01_C::ManualDisableMOdifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ExponentialHeightFogModifier_01_C", "ManualDisableMOdifier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ExponentialHeightFogModifier_01.ba_ExponentialHeightFogModifier_01_C.ExecuteUbergraph_ba_ExponentialHeightFogModifier_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ExponentialHeightFogModifier_01_C::ExecuteUbergraph_ba_ExponentialHeightFogModifier_01(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_OtherActor_1, class AActor* K2Node_Event_OtherActor, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ExponentialHeightFogModifier_01_C", "ExecuteUbergraph_ba_ExponentialHeightFogModifier_01");

	Params::Aba_ExponentialHeightFogModifier_01_C_ExecuteUbergraph_ba_ExponentialHeightFogModifier_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_OtherActor_1 = K2Node_Event_OtherActor_1;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


