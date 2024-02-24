#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SesterCrossbowBase.BP_SesterCrossbowBase_C
// (Actor, Pawn)

class UClass* ABP_SesterCrossbowBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SesterCrossbowBase_C");

	return Clss;
}


// BP_SesterCrossbowBase_C BP_SesterCrossbowBase.Default__BP_SesterCrossbowBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SesterCrossbowBase_C* ABP_SesterCrossbowBase_C::GetDefaultObj()
{
	static class ABP_SesterCrossbowBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SesterCrossbowBase_C*>(ABP_SesterCrossbowBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.TraceBehind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SesterCrossbowBase_C::TraceBehind(TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "TraceBehind");

	Params::ABP_SesterCrossbowBase_C_TraceBehind_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.GetMeleeTraceEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceEnd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "GetMeleeTraceEnd");

	Params::ABP_SesterCrossbowBase_C_GetMeleeTraceEnd_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceEnd != nullptr)
		*TraceEnd = std::move(Parms.TraceEnd);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.GetMeleeTraceStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceStart                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "GetMeleeTraceStart");

	Params::ABP_SesterCrossbowBase_C_GetMeleeTraceStart_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceStart != nullptr)
		*TraceStart = std::move(Parms.TraceStart);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyEnd_E79F42BB4AFD467B059C5EB10B0175BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnNotifyEnd_E79F42BB4AFD467B059C5EB10B0175BB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnNotifyEnd_E79F42BB4AFD467B059C5EB10B0175BB");

	Params::ABP_SesterCrossbowBase_C_OnNotifyEnd_E79F42BB4AFD467B059C5EB10B0175BB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyBegin_E79F42BB4AFD467B059C5EB10B0175BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnNotifyBegin_E79F42BB4AFD467B059C5EB10B0175BB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnNotifyBegin_E79F42BB4AFD467B059C5EB10B0175BB");

	Params::ABP_SesterCrossbowBase_C_OnNotifyBegin_E79F42BB4AFD467B059C5EB10B0175BB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnInterrupted_E79F42BB4AFD467B059C5EB10B0175BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnInterrupted_E79F42BB4AFD467B059C5EB10B0175BB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnInterrupted_E79F42BB4AFD467B059C5EB10B0175BB");

	Params::ABP_SesterCrossbowBase_C_OnInterrupted_E79F42BB4AFD467B059C5EB10B0175BB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnBlendOut_E79F42BB4AFD467B059C5EB10B0175BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnBlendOut_E79F42BB4AFD467B059C5EB10B0175BB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnBlendOut_E79F42BB4AFD467B059C5EB10B0175BB");

	Params::ABP_SesterCrossbowBase_C_OnBlendOut_E79F42BB4AFD467B059C5EB10B0175BB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnCompleted_E79F42BB4AFD467B059C5EB10B0175BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnCompleted_E79F42BB4AFD467B059C5EB10B0175BB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnCompleted_E79F42BB4AFD467B059C5EB10B0175BB");

	Params::ABP_SesterCrossbowBase_C_OnCompleted_E79F42BB4AFD467B059C5EB10B0175BB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyEnd_AD966C164EF3767F28A521933537316C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnNotifyEnd_AD966C164EF3767F28A521933537316C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnNotifyEnd_AD966C164EF3767F28A521933537316C");

	Params::ABP_SesterCrossbowBase_C_OnNotifyEnd_AD966C164EF3767F28A521933537316C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyBegin_AD966C164EF3767F28A521933537316C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnNotifyBegin_AD966C164EF3767F28A521933537316C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnNotifyBegin_AD966C164EF3767F28A521933537316C");

	Params::ABP_SesterCrossbowBase_C_OnNotifyBegin_AD966C164EF3767F28A521933537316C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnInterrupted_AD966C164EF3767F28A521933537316C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnInterrupted_AD966C164EF3767F28A521933537316C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnInterrupted_AD966C164EF3767F28A521933537316C");

	Params::ABP_SesterCrossbowBase_C_OnInterrupted_AD966C164EF3767F28A521933537316C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnBlendOut_AD966C164EF3767F28A521933537316C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnBlendOut_AD966C164EF3767F28A521933537316C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnBlendOut_AD966C164EF3767F28A521933537316C");

	Params::ABP_SesterCrossbowBase_C_OnBlendOut_AD966C164EF3767F28A521933537316C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnCompleted_AD966C164EF3767F28A521933537316C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnCompleted_AD966C164EF3767F28A521933537316C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnCompleted_AD966C164EF3767F28A521933537316C");

	Params::ABP_SesterCrossbowBase_C_OnCompleted_AD966C164EF3767F28A521933537316C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyEnd_C454EFBC424D25F96F1EF2809C2F4343
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnNotifyEnd_C454EFBC424D25F96F1EF2809C2F4343(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnNotifyEnd_C454EFBC424D25F96F1EF2809C2F4343");

	Params::ABP_SesterCrossbowBase_C_OnNotifyEnd_C454EFBC424D25F96F1EF2809C2F4343_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyBegin_C454EFBC424D25F96F1EF2809C2F4343
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnNotifyBegin_C454EFBC424D25F96F1EF2809C2F4343(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnNotifyBegin_C454EFBC424D25F96F1EF2809C2F4343");

	Params::ABP_SesterCrossbowBase_C_OnNotifyBegin_C454EFBC424D25F96F1EF2809C2F4343_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnInterrupted_C454EFBC424D25F96F1EF2809C2F4343
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnInterrupted_C454EFBC424D25F96F1EF2809C2F4343(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnInterrupted_C454EFBC424D25F96F1EF2809C2F4343");

	Params::ABP_SesterCrossbowBase_C_OnInterrupted_C454EFBC424D25F96F1EF2809C2F4343_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnBlendOut_C454EFBC424D25F96F1EF2809C2F4343
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnBlendOut_C454EFBC424D25F96F1EF2809C2F4343(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnBlendOut_C454EFBC424D25F96F1EF2809C2F4343");

	Params::ABP_SesterCrossbowBase_C_OnBlendOut_C454EFBC424D25F96F1EF2809C2F4343_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnCompleted_C454EFBC424D25F96F1EF2809C2F4343
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnCompleted_C454EFBC424D25F96F1EF2809C2F4343(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnCompleted_C454EFBC424D25F96F1EF2809C2F4343");

	Params::ABP_SesterCrossbowBase_C_OnCompleted_C454EFBC424D25F96F1EF2809C2F4343_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyEnd_E3DDAFF34B6ACB25A48FD899874BD27B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnNotifyEnd_E3DDAFF34B6ACB25A48FD899874BD27B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnNotifyEnd_E3DDAFF34B6ACB25A48FD899874BD27B");

	Params::ABP_SesterCrossbowBase_C_OnNotifyEnd_E3DDAFF34B6ACB25A48FD899874BD27B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyBegin_E3DDAFF34B6ACB25A48FD899874BD27B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnNotifyBegin_E3DDAFF34B6ACB25A48FD899874BD27B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnNotifyBegin_E3DDAFF34B6ACB25A48FD899874BD27B");

	Params::ABP_SesterCrossbowBase_C_OnNotifyBegin_E3DDAFF34B6ACB25A48FD899874BD27B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnInterrupted_E3DDAFF34B6ACB25A48FD899874BD27B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnInterrupted_E3DDAFF34B6ACB25A48FD899874BD27B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnInterrupted_E3DDAFF34B6ACB25A48FD899874BD27B");

	Params::ABP_SesterCrossbowBase_C_OnInterrupted_E3DDAFF34B6ACB25A48FD899874BD27B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnBlendOut_E3DDAFF34B6ACB25A48FD899874BD27B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnBlendOut_E3DDAFF34B6ACB25A48FD899874BD27B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnBlendOut_E3DDAFF34B6ACB25A48FD899874BD27B");

	Params::ABP_SesterCrossbowBase_C_OnBlendOut_E3DDAFF34B6ACB25A48FD899874BD27B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnCompleted_E3DDAFF34B6ACB25A48FD899874BD27B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnCompleted_E3DDAFF34B6ACB25A48FD899874BD27B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnCompleted_E3DDAFF34B6ACB25A48FD899874BD27B");

	Params::ABP_SesterCrossbowBase_C_OnCompleted_E3DDAFF34B6ACB25A48FD899874BD27B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyEnd_6AB0A1014188C0DAC083139FC2477174
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnNotifyEnd_6AB0A1014188C0DAC083139FC2477174(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnNotifyEnd_6AB0A1014188C0DAC083139FC2477174");

	Params::ABP_SesterCrossbowBase_C_OnNotifyEnd_6AB0A1014188C0DAC083139FC2477174_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyBegin_6AB0A1014188C0DAC083139FC2477174
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnNotifyBegin_6AB0A1014188C0DAC083139FC2477174(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnNotifyBegin_6AB0A1014188C0DAC083139FC2477174");

	Params::ABP_SesterCrossbowBase_C_OnNotifyBegin_6AB0A1014188C0DAC083139FC2477174_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnInterrupted_6AB0A1014188C0DAC083139FC2477174
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnInterrupted_6AB0A1014188C0DAC083139FC2477174(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnInterrupted_6AB0A1014188C0DAC083139FC2477174");

	Params::ABP_SesterCrossbowBase_C_OnInterrupted_6AB0A1014188C0DAC083139FC2477174_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnBlendOut_6AB0A1014188C0DAC083139FC2477174
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnBlendOut_6AB0A1014188C0DAC083139FC2477174(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnBlendOut_6AB0A1014188C0DAC083139FC2477174");

	Params::ABP_SesterCrossbowBase_C_OnBlendOut_6AB0A1014188C0DAC083139FC2477174_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnCompleted_6AB0A1014188C0DAC083139FC2477174
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::OnCompleted_6AB0A1014188C0DAC083139FC2477174(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnCompleted_6AB0A1014188C0DAC083139FC2477174");

	Params::ABP_SesterCrossbowBase_C_OnCompleted_6AB0A1014188C0DAC083139FC2477174_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.InitAfterSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedEnemySpawner_C*     SpawnerRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            PhaseToSpawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPermanentlyDeadOnceKilled_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointA                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldWander_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointB                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AggroRadius                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   TriggerToActivateOnAggro                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldPatrol_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABP_SesterCrossbowBase_C::InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "InitAfterSpawn");

	Params::ABP_SesterCrossbowBase_C_InitAfterSpawn_Params Parms{};

	Parms.SpawnerRef = SpawnerRef;
	Parms.UniqueId = UniqueId;
	Parms.PhaseToSpawn = PhaseToSpawn;
	Parms.bPermanentlyDeadOnceKilled_ = bPermanentlyDeadOnceKilled_;
	Parms.PatrolPointA = PatrolPointA;
	Parms.bShouldWander_ = bShouldWander_;
	Parms.PatrolPointB = PatrolPointB;
	Parms.AggroRadius = AggroRadius;
	Parms.TriggerToActivateOnAggro = TriggerToActivateOnAggro;
	Parms.ShouldPatrol_ = ShouldPatrol_;
	Parms.SpawnTransform = SpawnTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnWasAggroed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SesterCrossbowBase_C::OnWasAggroed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "OnWasAggroed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.TransitionToMelee
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SesterCrossbowBase_C::TransitionToMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "TransitionToMelee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.ClientPlayImpactSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::ClientPlayImpactSound(const struct FVector& ImpactLocation, class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "ClientPlayImpactSound");

	Params::ABP_SesterCrossbowBase_C_ClientPlayImpactSound_Params Parms{};

	Parms.ImpactLocation = ImpactLocation;
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.ShootCrossbow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SesterCrossbowBase_C::ShootCrossbow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "ShootCrossbow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.PlayAttackMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartingPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StartingSection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "PlayAttackMontage");

	Params::ABP_SesterCrossbowBase_C_PlayAttackMontage_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.SelectAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceFromPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::SelectAttack(float DistanceFromPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "SelectAttack");

	Params::ABP_SesterCrossbowBase_C_SelectAttack_Params Parms{};

	Parms.DistanceFromPlayer = DistanceFromPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.PlayLightHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SesterCrossbowBase_C::PlayLightHitReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "PlayLightHitReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.ForceHeavyStaggerDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DirectionToSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SesterCrossbowBase_C::ForceHeavyStaggerDamage(const struct FVector& DirectionToSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "ForceHeavyStaggerDamage");

	Params::ABP_SesterCrossbowBase_C_ForceHeavyStaggerDamage_Params Parms{};

	Parms.DirectionToSource = DirectionToSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.PlayDeathMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SesterCrossbowBase_C::PlayDeathMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "PlayDeathMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.EnemyDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SesterCrossbowBase_C::EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "EnemyDeath");

	Params::ABP_SesterCrossbowBase_C_EnemyDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.bShouldPlayDeathAnim = bShouldPlayDeathAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.ExecuteUbergraph_BP_SesterCrossbowBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// class AAdvancedEnemySpawner_C*     K2Node_Event_SpawnerRef                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_UniqueID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            K2Node_Event_PhaseToSpawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPermanentlyDeadOnceKilled_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointA                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldWander_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointB                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_AggroRadius                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   K2Node_Event_TriggerToActivateOnAggro                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShouldPatrol_                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Event_SpawnTransform                                      (IsPlainOldData, NoDestructor)
// class ASesterCrossbow_C*           K2Node_DynamicCast_AsSester_Crossbow                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTwinSisters_Crossbow_AnimBlueprint_C*K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LineOfSightTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTwinSisters_Crossbow_AnimBlueprint_C*K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_ImpactLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_HitActor                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalcRangeAttackTargetLocation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomAttack_SelectedAttack                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CrossbowProjectile_Sesters_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_MontageToPlay                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_PlayRate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StartingPosition                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_StartingSection                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DistanceFromPlayer                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_DirectionToSource                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Killer                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldPlayDeathAnim                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SesterCrossbowBase_C::ExecuteUbergraph_BP_SesterCrossbowBase(int32 EntryPoint, bool Temp_bool_Variable, class FName K2Node_CustomEvent_NotifyName_20, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName Temp_name_Variable_4, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, class ASesterCrossbow_C* K2Node_DynamicCast_AsSester_Crossbow, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UTwinSisters_Crossbow_AnimBlueprint_C* K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_CustomEvent_NotifyName_22, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_LineOfSightTo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UTwinSisters_Crossbow_AnimBlueprint_C* K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint_1, bool K2Node_DynamicCast_bSuccess_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_Event_ImpactLocation, class AActor* K2Node_Event_HitActor, class FName K2Node_CustomEvent_NotifyName_21, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_CalcRangeAttackTargetLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess, class ABP_CrossbowProjectile_Sesters_C* CallFunc_FinishSpawningActor_ReturnValue, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float K2Node_Event_DistanceFromPlayer, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class FName K2Node_CustomEvent_NotifyName_23, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& K2Node_Event_DirectionToSource, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, class FName K2Node_CustomEvent_NotifyName_24, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SesterCrossbowBase_C", "ExecuteUbergraph_BP_SesterCrossbowBase");

	Params::ABP_SesterCrossbowBase_C_ExecuteUbergraph_BP_SesterCrossbowBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_Event_SpawnerRef = K2Node_Event_SpawnerRef;
	Parms.K2Node_Event_UniqueID = K2Node_Event_UniqueID;
	Parms.K2Node_Event_PhaseToSpawn = K2Node_Event_PhaseToSpawn;
	Parms.K2Node_Event_bPermanentlyDeadOnceKilled_ = K2Node_Event_bPermanentlyDeadOnceKilled_;
	Parms.K2Node_Event_PatrolPointA = K2Node_Event_PatrolPointA;
	Parms.K2Node_Event_bShouldWander_ = K2Node_Event_bShouldWander_;
	Parms.K2Node_Event_PatrolPointB = K2Node_Event_PatrolPointB;
	Parms.K2Node_Event_AggroRadius = K2Node_Event_AggroRadius;
	Parms.K2Node_Event_TriggerToActivateOnAggro = K2Node_Event_TriggerToActivateOnAggro;
	Parms.K2Node_Event_ShouldPatrol_ = K2Node_Event_ShouldPatrol_;
	Parms.K2Node_Event_SpawnTransform = K2Node_Event_SpawnTransform;
	Parms.K2Node_DynamicCast_AsSester_Crossbow = K2Node_DynamicCast_AsSester_Crossbow;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint = K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_LineOfSightTo_ReturnValue = CallFunc_LineOfSightTo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint_1 = K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_ImpactLocation = K2Node_Event_ImpactLocation;
	Parms.K2Node_Event_HitActor = K2Node_Event_HitActor;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_CalcRangeAttackTargetLocation_ReturnValue = CallFunc_CalcRangeAttackTargetLocation_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_SelectRandomAttack_SelectedAttack = CallFunc_SelectRandomAttack_SelectedAttack;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_Event_MontageToPlay = K2Node_Event_MontageToPlay;
	Parms.K2Node_Event_PlayRate = K2Node_Event_PlayRate;
	Parms.K2Node_Event_StartingPosition = K2Node_Event_StartingPosition;
	Parms.K2Node_Event_StartingSection = K2Node_Event_StartingSection;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_DistanceFromPlayer = K2Node_Event_DistanceFromPlayer;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_DirectionToSource = K2Node_Event_DirectionToSource;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1 = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.K2Node_Event_Killer = K2Node_Event_Killer;
	Parms.K2Node_Event_bShouldPlayDeathAnim = K2Node_Event_bShouldPlayDeathAnim;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}

}


