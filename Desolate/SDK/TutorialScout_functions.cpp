#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TutorialScout.TutorialScout_C
// (Actor, Pawn)

class UClass* ATutorialScout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TutorialScout_C");

	return Clss;
}


// TutorialScout_C TutorialScout.Default__TutorialScout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATutorialScout_C* ATutorialScout_C::GetDefaultObj()
{
	static class ATutorialScout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATutorialScout_C*>(ATutorialScout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TutorialScout.TutorialScout_C.RemoveBlendable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Obj                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveBlendable_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ATutorialScout_C::RemoveBlendable(class UObject* Obj, bool CallFunc_RemoveBlendable_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "RemoveBlendable");

	Params::ATutorialScout_C_RemoveBlendable_Params Parms{};

	Parms.Obj = Obj;
	Parms.CallFunc_RemoveBlendable_ReturnValue = CallFunc_RemoveBlendable_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TutorialScout.TutorialScout_C.AddBlendable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Obj                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddBlendable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ATutorialScout_C::AddBlendable(class UObject* Obj, bool CallFunc_AddBlendable_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "AddBlendable");

	Params::ATutorialScout_C_AddBlendable_Params Parms{};

	Parms.Obj = Obj;
	Parms.CallFunc_AddBlendable_ReturnValue = CallFunc_AddBlendable_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TutorialScout.TutorialScout_C.OpacityTime_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATutorialScout_C::OpacityTime_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "OpacityTime_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialScout.TutorialScout_C.OpacityTime_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATutorialScout_C::OpacityTime_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "OpacityTime_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialScout.TutorialScout_C.Timeline_2_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATutorialScout_C::Timeline_2_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "Timeline_2_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialScout.TutorialScout_C.Timeline_2_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATutorialScout_C::Timeline_2_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "Timeline_2_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialScout.TutorialScout_C.PlayTestPPOpacityOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Obj                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATutorialScout_C::PlayTestPPOpacityOn(class UObject* Obj)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "PlayTestPPOpacityOn");

	Params::ATutorialScout_C_PlayTestPPOpacityOn_Params Parms{};

	Parms.Obj = Obj;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialScout.TutorialScout_C.PlayTestPPOpacityOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Obj                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATutorialScout_C::PlayTestPPOpacityOff(class UObject* Obj)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "PlayTestPPOpacityOff");

	Params::ATutorialScout_C_PlayTestPPOpacityOff_Params Parms{};

	Parms.Obj = Obj;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialScout.TutorialScout_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATutorialScout_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "ReceiveTick");

	Params::ATutorialScout_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialScout.TutorialScout_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATutorialScout_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialScout.TutorialScout_C.ExecuteUbergraph_TutorialScout
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Obj_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Obj                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetOrAddBlendableMaterialInstance_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetOrAddBlendableMaterialInstance_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATutorialScout_C::ExecuteUbergraph_TutorialScout(int32 EntryPoint, class UObject* K2Node_CustomEvent_Obj_1, class UObject* K2Node_CustomEvent_Obj, class UMaterialInstanceDynamic* CallFunc_GetOrAddBlendableMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetOrAddBlendableMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialScout_C", "ExecuteUbergraph_TutorialScout");

	Params::ATutorialScout_C_ExecuteUbergraph_TutorialScout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Obj_1 = K2Node_CustomEvent_Obj_1;
	Parms.K2Node_CustomEvent_Obj = K2Node_CustomEvent_Obj;
	Parms.CallFunc_GetOrAddBlendableMaterialInstance_ReturnValue = CallFunc_GetOrAddBlendableMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_GetOrAddBlendableMaterialInstance_ReturnValue_1 = CallFunc_GetOrAddBlendableMaterialInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue_1 = CallFunc_K2_GetScalarParameterValue_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


