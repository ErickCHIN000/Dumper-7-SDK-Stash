#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SwordBroBase.BP_SwordBroBase_C
// (Actor, Pawn)

class UClass* ABP_SwordBroBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SwordBroBase_C");

	return Clss;
}


// BP_SwordBroBase_C BP_SwordBroBase.Default__BP_SwordBroBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SwordBroBase_C* ABP_SwordBroBase_C::GetDefaultObj()
{
	static class ABP_SwordBroBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SwordBroBase_C*>(ABP_SwordBroBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SwordBroBase.BP_SwordBroBase_C.GetMeleeTraceEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceEnd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, bool K2Node_SwitchName_CmpSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "GetMeleeTraceEnd");

	Params::ABP_SwordBroBase_C_GetMeleeTraceEnd_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceEnd != nullptr)
		*TraceEnd = std::move(Parms.TraceEnd);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.GetMeleeTraceStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceStart                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, bool K2Node_SwitchName_CmpSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "GetMeleeTraceStart");

	Params::ABP_SwordBroBase_C_GetMeleeTraceStart_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceStart != nullptr)
		*TraceStart = std::move(Parms.TraceStart);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnNotifyEnd_195E397846399CE283D43283CA6805F3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnNotifyEnd_195E397846399CE283D43283CA6805F3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnNotifyEnd_195E397846399CE283D43283CA6805F3");

	Params::ABP_SwordBroBase_C_OnNotifyEnd_195E397846399CE283D43283CA6805F3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnNotifyBegin_195E397846399CE283D43283CA6805F3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnNotifyBegin_195E397846399CE283D43283CA6805F3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnNotifyBegin_195E397846399CE283D43283CA6805F3");

	Params::ABP_SwordBroBase_C_OnNotifyBegin_195E397846399CE283D43283CA6805F3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnInterrupted_195E397846399CE283D43283CA6805F3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnInterrupted_195E397846399CE283D43283CA6805F3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnInterrupted_195E397846399CE283D43283CA6805F3");

	Params::ABP_SwordBroBase_C_OnInterrupted_195E397846399CE283D43283CA6805F3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnBlendOut_195E397846399CE283D43283CA6805F3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnBlendOut_195E397846399CE283D43283CA6805F3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnBlendOut_195E397846399CE283D43283CA6805F3");

	Params::ABP_SwordBroBase_C_OnBlendOut_195E397846399CE283D43283CA6805F3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnCompleted_195E397846399CE283D43283CA6805F3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnCompleted_195E397846399CE283D43283CA6805F3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnCompleted_195E397846399CE283D43283CA6805F3");

	Params::ABP_SwordBroBase_C_OnCompleted_195E397846399CE283D43283CA6805F3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnNotifyEnd_111B1FD9401EBBEBBE12C6B53A706F90
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnNotifyEnd_111B1FD9401EBBEBBE12C6B53A706F90(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnNotifyEnd_111B1FD9401EBBEBBE12C6B53A706F90");

	Params::ABP_SwordBroBase_C_OnNotifyEnd_111B1FD9401EBBEBBE12C6B53A706F90_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnNotifyBegin_111B1FD9401EBBEBBE12C6B53A706F90
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnNotifyBegin_111B1FD9401EBBEBBE12C6B53A706F90(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnNotifyBegin_111B1FD9401EBBEBBE12C6B53A706F90");

	Params::ABP_SwordBroBase_C_OnNotifyBegin_111B1FD9401EBBEBBE12C6B53A706F90_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnInterrupted_111B1FD9401EBBEBBE12C6B53A706F90
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnInterrupted_111B1FD9401EBBEBBE12C6B53A706F90(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnInterrupted_111B1FD9401EBBEBBE12C6B53A706F90");

	Params::ABP_SwordBroBase_C_OnInterrupted_111B1FD9401EBBEBBE12C6B53A706F90_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnBlendOut_111B1FD9401EBBEBBE12C6B53A706F90
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnBlendOut_111B1FD9401EBBEBBE12C6B53A706F90(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnBlendOut_111B1FD9401EBBEBBE12C6B53A706F90");

	Params::ABP_SwordBroBase_C_OnBlendOut_111B1FD9401EBBEBBE12C6B53A706F90_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnCompleted_111B1FD9401EBBEBBE12C6B53A706F90
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnCompleted_111B1FD9401EBBEBBE12C6B53A706F90(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnCompleted_111B1FD9401EBBEBBE12C6B53A706F90");

	Params::ABP_SwordBroBase_C_OnCompleted_111B1FD9401EBBEBBE12C6B53A706F90_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnNotifyEnd_7034FFEC4827BBCF84ACCCA704237F22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnNotifyEnd_7034FFEC4827BBCF84ACCCA704237F22(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnNotifyEnd_7034FFEC4827BBCF84ACCCA704237F22");

	Params::ABP_SwordBroBase_C_OnNotifyEnd_7034FFEC4827BBCF84ACCCA704237F22_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnNotifyBegin_7034FFEC4827BBCF84ACCCA704237F22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnNotifyBegin_7034FFEC4827BBCF84ACCCA704237F22(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnNotifyBegin_7034FFEC4827BBCF84ACCCA704237F22");

	Params::ABP_SwordBroBase_C_OnNotifyBegin_7034FFEC4827BBCF84ACCCA704237F22_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnInterrupted_7034FFEC4827BBCF84ACCCA704237F22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnInterrupted_7034FFEC4827BBCF84ACCCA704237F22(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnInterrupted_7034FFEC4827BBCF84ACCCA704237F22");

	Params::ABP_SwordBroBase_C_OnInterrupted_7034FFEC4827BBCF84ACCCA704237F22_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnBlendOut_7034FFEC4827BBCF84ACCCA704237F22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnBlendOut_7034FFEC4827BBCF84ACCCA704237F22(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnBlendOut_7034FFEC4827BBCF84ACCCA704237F22");

	Params::ABP_SwordBroBase_C_OnBlendOut_7034FFEC4827BBCF84ACCCA704237F22_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnCompleted_7034FFEC4827BBCF84ACCCA704237F22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnCompleted_7034FFEC4827BBCF84ACCCA704237F22(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnCompleted_7034FFEC4827BBCF84ACCCA704237F22");

	Params::ABP_SwordBroBase_C_OnCompleted_7034FFEC4827BBCF84ACCCA704237F22_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnNotifyEnd_10BDCB63467BC1A01A8BB79C82CBF71E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnNotifyEnd_10BDCB63467BC1A01A8BB79C82CBF71E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnNotifyEnd_10BDCB63467BC1A01A8BB79C82CBF71E");

	Params::ABP_SwordBroBase_C_OnNotifyEnd_10BDCB63467BC1A01A8BB79C82CBF71E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnNotifyBegin_10BDCB63467BC1A01A8BB79C82CBF71E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnNotifyBegin_10BDCB63467BC1A01A8BB79C82CBF71E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnNotifyBegin_10BDCB63467BC1A01A8BB79C82CBF71E");

	Params::ABP_SwordBroBase_C_OnNotifyBegin_10BDCB63467BC1A01A8BB79C82CBF71E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnInterrupted_10BDCB63467BC1A01A8BB79C82CBF71E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnInterrupted_10BDCB63467BC1A01A8BB79C82CBF71E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnInterrupted_10BDCB63467BC1A01A8BB79C82CBF71E");

	Params::ABP_SwordBroBase_C_OnInterrupted_10BDCB63467BC1A01A8BB79C82CBF71E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnBlendOut_10BDCB63467BC1A01A8BB79C82CBF71E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnBlendOut_10BDCB63467BC1A01A8BB79C82CBF71E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnBlendOut_10BDCB63467BC1A01A8BB79C82CBF71E");

	Params::ABP_SwordBroBase_C_OnBlendOut_10BDCB63467BC1A01A8BB79C82CBF71E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnCompleted_10BDCB63467BC1A01A8BB79C82CBF71E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::OnCompleted_10BDCB63467BC1A01A8BB79C82CBF71E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnCompleted_10BDCB63467BC1A01A8BB79C82CBF71E");

	Params::ABP_SwordBroBase_C_OnCompleted_10BDCB63467BC1A01A8BB79C82CBF71E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.OnWasAggroed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SwordBroBase_C::OnWasAggroed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "OnWasAggroed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.PlayAttackMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartingPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StartingSection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "PlayAttackMontage");

	Params::ABP_SwordBroBase_C_PlayAttackMontage_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.SelectAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceFromPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::SelectAttack(float DistanceFromPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "SelectAttack");

	Params::ABP_SwordBroBase_C_SelectAttack_Params Parms{};

	Parms.DistanceFromPlayer = DistanceFromPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.PlayLightHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SwordBroBase_C::PlayLightHitReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "PlayLightHitReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.ForceHeavyStaggerDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DirectionToSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SwordBroBase_C::ForceHeavyStaggerDamage(const struct FVector& DirectionToSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "ForceHeavyStaggerDamage");

	Params::ABP_SwordBroBase_C_ForceHeavyStaggerDamage_Params Parms{};

	Parms.DirectionToSource = DirectionToSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.PlayDeathMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SwordBroBase_C::PlayDeathMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "PlayDeathMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.EnemyDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SwordBroBase_C::EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "EnemyDeath");

	Params::ABP_SwordBroBase_C_EnemyDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.bShouldPlayDeathAnim = bShouldPlayDeathAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SwordBroBase.BP_SwordBroBase_C.ExecuteUbergraph_BP_SwordBroBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectRandomAttack_SelectedAttack                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USwordBro_animBP_C*          K2Node_DynamicCast_AsSword_Bro_Anim_BP                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class UAnimMontage*                K2Node_Event_MontageToPlay                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_PlayRate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StartingPosition                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_StartingSection                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DistanceFromPlayer                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_DirectionToSource                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_Event_Killer                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldPlayDeathAnim                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)

void ABP_SwordBroBase_C::ExecuteUbergraph_BP_SwordBroBase(int32 EntryPoint, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_16, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName, class FName Temp_name_Variable_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_17, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 CallFunc_SelectRandomAttack_SelectedAttack, class USwordBro_animBP_C* K2Node_DynamicCast_AsSword_Bro_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, float K2Node_Event_DistanceFromPlayer, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class FName K2Node_CustomEvent_NotifyName_18, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, const struct FVector& K2Node_Event_DirectionToSource, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, class FName K2Node_CustomEvent_NotifyName_19, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SwordBroBase_C", "ExecuteUbergraph_BP_SwordBroBase");

	Params::ABP_SwordBroBase_C_ExecuteUbergraph_BP_SwordBroBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_SelectRandomAttack_SelectedAttack = CallFunc_SelectRandomAttack_SelectedAttack;
	Parms.K2Node_DynamicCast_AsSword_Bro_Anim_BP = K2Node_DynamicCast_AsSword_Bro_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_Event_MontageToPlay = K2Node_Event_MontageToPlay;
	Parms.K2Node_Event_PlayRate = K2Node_Event_PlayRate;
	Parms.K2Node_Event_StartingPosition = K2Node_Event_StartingPosition;
	Parms.K2Node_Event_StartingSection = K2Node_Event_StartingSection;
	Parms.K2Node_Event_DistanceFromPlayer = K2Node_Event_DistanceFromPlayer;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.K2Node_Event_DirectionToSource = K2Node_Event_DirectionToSource;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1 = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_Event_Killer = K2Node_Event_Killer;
	Parms.K2Node_Event_bShouldPlayDeathAnim = K2Node_Event_bShouldPlayDeathAnim;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;

	UObject::ProcessEvent(Func, &Parms);

}

}


